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

bool is_next_presed = false;

//Объявляем список из вопросов
QList<question> questions;
QList<practice_question> practice_questions;

//Объявляем примерные отвечающие за вопросы
ushort questions_count = 0;
ushort current_question = 0;
ushort current_variant = 0;
ushort right_answers_count = 0;
ushort practice_questions_count = 0;

QList<QLineEdit*> entries;
QList<QTextEdit*> big_entries;
QList<QCheckBox*> checkboxes;
QList<QComboBox*> combo_boxes;

void reset_questions(){
    current_question = 0;
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
    //Заполняем списки из практики указателями на элементы интерфейса
    QList<QLineEdit*> local_entries = {
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
        ui->phone_entry};
    entries = local_entries;
    QList<QTextEdit*> local_big_entries = {
        ui->description_entry
    };
    big_entries = local_big_entries;
    QList<QCheckBox*> local_checkboxes = {
        ui->is_thread,
        ui->is_emergency,
        ui->is_01,
        ui->is_02,
        ui->is_03,
        ui->is_04
    };
    checkboxes = local_checkboxes;
    QList<QComboBox*> local_combo_boxes = {
        ui->incident_vid_combox,
        ui->incident_type_combox
    };
    combo_boxes = local_combo_boxes;
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
    QList<QRadioButton*> checkboxes = {
        ui->variant_1,
        ui->variant_2,
        ui->variant_3
    };
    if(current_variant == questions.at(current_question).right_answer and !is_next_presed){
        right_answers_count++;
        checkboxes.at(current_variant-1)->setStyleSheet("background:#84e97a");
    }
    else if(current_variant != 0){
        checkboxes.at(current_variant-1)->setStyleSheet("background:#e97a7a");
        checkboxes.at(questions.at(current_question).right_answer-1)->setStyleSheet("background:#84e97a");
    }
    else {
        checkboxes.at(questions.at(current_question).right_answer-1)->setStyleSheet("background:#e97a7a");
    }
    if(current_question < questions_count-1 and is_next_presed){
        current_question++;
        for(int i = 0; i < checkboxes.size(); i++){
            checkboxes.at(i)->setStyleSheet("background:#f0f0f0");
        }
        is_next_presed = false;
        update_question();
        return;
    }
    else if(is_next_presed)
        ui->pages->setCurrentIndex(2);
    is_next_presed = true;
}

//При нажатии на следущую ситуацию - практика
void Widget::on_next_situation_pressed()
{
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
    if(current_question < practice_questions_count-1){
        current_question += 1;
    }
    else{
        ui->pages->setCurrentIndex(0);
        reset_questions();
    }
}
Widget::~Widget(){delete ui;}

void Widget::on_module_1_pressed() {
    QString file = QDir::currentPath() + "/normativka.docx";
    std::system(file.toStdString().c_str());
}

void Widget::on_module_2_pressed()
{
    reset_questions();
    questions = load_questions("test_1.json");
    questions_count = questions.size();
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

void Widget::on_pushButton_pressed()
{
    for(int i = 0; i < entries.size(); i++){
        entries.at(i)->setText(practice_questions.at(current_question).entries.at(i));
    }
    for(int i = 0; i < big_entries.size(); i++){
        big_entries.at(i)->setPlainText(practice_questions.at(current_question).big_entries.at(i));
    }
    for(int i = 0; i < checkboxes.size(); i++){
        checkboxes.at(i)->setChecked(practice_questions.at(current_question).checkboxes.at(i));
    }
    for(int i = 0; i < combo_boxes.size(); i++){
        combo_boxes.at(i)->setCurrentIndex(practice_questions.at(current_question).combo_boxes.at(i));
    }
}

