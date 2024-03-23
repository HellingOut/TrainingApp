#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include <QProcess>
#include <QDir>
#include <load_questions.cpp>
#include <cstdlib>
#include <QDebug>
#include <QMediaPlayer>
#include <QUrl>
#include <QAudioOutput>

bool is_task_completed = false;

//Объявляем список из вопросов
QList<question> questions;
QList<practice_question> practice_questions;

//Объявляем примерные отвечающие за вопросы
ushort questions_count = 0;
ushort current_question = 0;
ushort current_variant = 0;
ushort right_answers_count = 0;
ushort practice_questions_count = 0;

void reset_questions(){
    current_question = 0;
    current_variant = 0;
    right_answers_count = 0;
}

//Конструктор главного окна, встроенная функция
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //При старте открываем главное меню
    ui->pages->setCurrentIndex(0);
    //Создаём экземпляр класса QMediaPlayer для проигрывания аудио
    player = new QMediaPlayer(this);
    //Создаём экземпляр класса QAudioOutput для регулирования громкости и выбора аудиоустройств
    audioOutput = new QAudioOutput;
}

//Обновляем интерфейс теста
void Widget::update_question(){
    ui->variant_1->setText(questions.at(current_question).variants[0]);
    ui->variant_2->setText(questions.at(current_question).variants[1]);
    ui->variant_3->setText(questions.at(current_question).variants[2]);
    ui->question->setText(questions.at(current_question).question_text);
    ui->right_answers_count->setText("Правильных ответов: "+ QString::number(right_answers_count));
    ui->right_answers_count_2->setText("Правильных ответов: "+ QString::number(right_answers_count));
}
//При нажатии на следующий вопрос - тестовая часть
void Widget::on_next_pressed(){
    if(current_variant == questions.at(current_question).right_answer)
        right_answers_count++;
    if(current_question < questions_count-1)
        current_question++;
    else
        ui->pages->setCurrentIndex(2);
    update_question();
}

//При нажатии на следущую ситуацию - практика
void Widget::on_next_situation_pressed()
{
    QList<QLineEdit*> entries = {
        ui->street_entry,
        ui->house_entry,
        ui->floor_entry,
        ui->doorway_entry,
        ui->flat_entry,
        ui->subject_entry,
        ui->victims_entry,
        ui->deads_entry,
        ui->full_name_entry,
        ui->adress_entry,
        ui->phone_entry
    };
    QList<QTextEdit*> big_entries = {
        ui->description_entry
    };
    QList<QCheckBox*> checkboxes = {
        ui->is_thread,
        ui->is_emergency,
        ui->is_01,
        ui->is_02,
        ui->is_03,
        ui->is_04
    };
    QList<QComboBox*> combo_boxes = {
        ui->incident_vid_combox,
        ui->incident_type_combox
    };

    bool is_wrong = false;
    for(int i = 0; i < entries.size(); i++){
        if(entries.at(i)->text() != practice_questions.at(current_question).entries.at(i)){
            is_wrong = true;
            entries.at(i)->setStyleSheet("background:#ec755b");
            entries.at(i)->setText(practice_questions.at(current_question).entries.at(i));
        }
        else{
            entries.at(i)->setStyleSheet("background:#84e97a");
        }
    }
    for(int i = 0; i < big_entries.size(); i++){
        if(big_entries.at(i)->toPlainText() != practice_questions.at(current_question).big_entries.at(i))
            is_wrong = true;
    }
    for(int i = 0; i < checkboxes.size(); i++){
        if(checkboxes.at(i)->isChecked() != practice_questions.at(current_question).checkboxes.at(i))
            is_wrong = true;
    }
    for(int i = 0; i < combo_boxes.size(); i++){
        if(combo_boxes.at(i)->currentIndex() != practice_questions.at(current_question).combo_boxes.at(i))
            is_wrong = true;
    }
    if(!is_wrong and !is_task_completed){
        right_answers_count++;
        ui->right_answers_count_3->setText("Правильных ответов: " + QString::number(right_answers_count));
    }
    if(is_task_completed){
        for(int i = 0; i < entries.size(); i++){
            entries.at(i)->setText("");
        }
        for(int i = 0; i < big_entries.size(); i++){
            big_entries.at(i)->setPlainText("");
        }
        for(int i = 0; i < checkboxes.size(); i++){
            checkboxes.at(i)->setChecked(false);
        }
        for(int i = 0; i < combo_boxes.size(); i++){
            combo_boxes.at(i)->setCurrentIndex(0);
        }
    }
    if(is_task_completed){
        is_task_completed = false;
        if(current_question < practice_questions_count-1){
            current_question += 1;
        }
        else{
            ui->pages->setCurrentIndex(2);
            ui->right_answers_count_2->setText("Правильных ответов: "+ QString::number(right_answers_count));
        }
        return;
    }
    is_task_completed = true;
}
Widget::~Widget(){delete ui;}

void Widget::on_module_1_pressed() {
    QString file = QDir::currentPath() + "/normativka.docx";
    std::system(file.toStdString().c_str());
}

void Widget::on_module_2_pressed()
{
    questions = load_questions("test_1.json");
    questions_count = questions.size();
    reset_questions();
    ui->pages->setCurrentIndex(1);
    update_question();
}
void Widget::on_module_3_pressed(){
    practice_questions = load_practice("practice_1.json");
    practice_questions_count = practice_questions.size();
    reset_questions();
    ui->pages->setCurrentIndex(3);
}

void Widget::on_play_audio_pressed()
{
    QString sound = QFileInfo(practice_questions.at(current_question).audiofile).absoluteFilePath();
    player->setAudioOutput(audioOutput);
    player->setSource(QUrl::fromLocalFile(sound));
    audioOutput->setVolume(100);
    player->play();
}

void Widget::on_exit_test_pressed(){ui->pages->setCurrentIndex(0);}
void Widget::on_end_test_pressed(){ui->pages->setCurrentIndex(0);}
void Widget::on_variant_1_pressed(){current_variant = 1;}
void Widget::on_variant_2_pressed(){current_variant = 2;}
void Widget::on_variant_3_pressed(){current_variant = 3;}
