#include <QFile>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QString>
#include <QList>

struct question{
    QString question_text = "";
    QList<QString> variants;
    int right_answer;
    question(){}
    void set_variants(QList<QString> new_var){
        variants = new_var;
    }
};

struct practice_question{
    QString audiofile;
    QList<QString> entries;
    QList<QString> big_entries;
    QList<bool> checkboxes;
    QList<short> combo_boxes;
};

QList<question> load_questions(QString file) {
    QString json_string;
    QFile json_file;
    json_file.setFileName(file);
    json_file.open(QIODevice::ReadOnly |
                   QIODevice::Text);
    json_string = json_file.readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(json_string.toUtf8());
    QJsonObject json = json_doc.object();
    QList<question> questions;
    int questions_count = json["questions"].toArray().size();
    for(int i = 0; i < questions_count; i++){
        questions.append(question());
        questions[i].set_variants( {json["questions"][i]["answers"][0].toString(),
                                    json["questions"][i]["answers"][1].toString(),
                                    json["questions"][i]["answers"][2].toString()});
        questions[i].question_text =json["questions"][i]["question"].toString();
        questions[i].right_answer = json["questions"][i]["right_answer"].toInt();
    }
    json_file.close();
    return questions;
}

QList<practice_question> load_practice(QString file){
    QList<practice_question> practice_questions;
    QString json_string;
    QFile json_file;
    json_file.setFileName(file);
    json_file.open(QIODevice::ReadOnly |
                   QIODevice::Text);
    json_string = json_file.readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(json_string.toUtf8());
    QJsonObject json = json_doc.object();
    int questions_count = json["practice_questions"].toArray().size();
    for(int i = 0; i < questions_count; i++){
        practice_questions.append(practice_question());
        int adress_count = json["practice_questions"][i]["entries"].toArray().size();
        for(int j = 0; j < adress_count; j++){
            practice_questions[i].entries.append    (json["practice_questions"][i]["entries"][j].toString());
            practice_questions[i].checkboxes.append (json["practice_questions"][i]["checkboxes"][j].toBool());
            practice_questions[i].combo_boxes.append(json["practice_questions"][i]["combo_boxes"][j].toInt());
            practice_questions[i].big_entries.append(json["practice_questions"][i]["big_entries"][j].toString());
        }
        practice_questions[i].audiofile = json["practice_questions"][i]["audiofile"].toString();
    }
    return practice_questions;
}
