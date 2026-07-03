/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *pages;
    QWidget *main;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *module_1;
    QPushButton *module_2;
    QPushButton *module_3;
    QWidget *test;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *vbox_test;
    QLabel *question;
    QRadioButton *variant_1;
    QRadioButton *variant_2;
    QRadioButton *variant_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *bottom_bar;
    QLabel *right_answers_count;
    QPushButton *next;
    QPushButton *exit_test;
    QWidget *test_results;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *result_label;
    QLabel *right_answers_count_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *end_test;
    QWidget *practice;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *incident_vid_combox;
    QLabel *floor_label;
    QCheckBox *is_02;
    QLabel *street_label;
    QCheckBox *is_emergency;
    QLineEdit *street_entry;
    QLabel *phone_label;
    QLineEdit *full_name_entry;
    QLabel *help_3;
    QLabel *incident_vid_label;
    QCheckBox *is_03;
    QLineEdit *adress_entry;
    QVBoxLayout *verticalLayout_4;
    QLabel *victims;
    QLabel *deads;
    QLineEdit *floor_entry;
    QTextEdit *description_entry;
    QLabel *subject_label;
    QLabel *house_label;
    QCheckBox *is_04;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *help_2;
    QLabel *help_4;
    QLabel *adress_label;
    QCheckBox *is_01;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *victims_entry;
    QLineEdit *deads_entry;
    QLabel *help;
    QLabel *flat_label;
    QLineEdit *doorway_entry;
    QLineEdit *flat_entry;
    QLabel *description_label;
    QLineEdit *subject_entry;
    QLabel *doorway_label;
    QCheckBox *is_thread;
    QLabel *incident_type_label;
    QComboBox *incident_type_combox;
    QLabel *full_name_label;
    QLineEdit *house_entry;
    QLineEdit *phone_entry;
    QPushButton *next_situation;
    QPushButton *play_audio;
    QPushButton *pushButton;
    QWidget *list_of_themes;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *theme_list;
    QPushButton *page_003;
    QPushButton *page_008;
    QPushButton *page_028;
    QPushButton *page_070;
    QPushButton *page_145;
    QPushButton *page_262;
    QPushButton *page_293;
    QPushButton *page_319;
    QPushButton *page_345;
    QPushButton *page_360;
    QPushButton *page_361;
    QPushButton *page_401;
    QPushButton *page_409;
    QPushButton *page_440;
    QPushButton *page_443;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMaximumSize(QSize(1280, 720));
        Widget->setAutoFillBackground(false);
        pages = new QStackedWidget(Widget);
        pages->setObjectName("pages");
        pages->setGeometry(QRect(9, 9, 1261, 701));
        sizePolicy.setHeightForWidth(pages->sizePolicy().hasHeightForWidth());
        pages->setSizePolicy(sizePolicy);
        pages->setMinimumSize(QSize(0, 0));
        main = new QWidget();
        main->setObjectName("main");
        sizePolicy.setHeightForWidth(main->sizePolicy().hasHeightForWidth());
        main->setSizePolicy(sizePolicy);
        verticalLayoutWidget = new QWidget(main);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(490, 280, 251, 141));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        module_1 = new QPushButton(verticalLayoutWidget);
        module_1->setObjectName("module_1");

        verticalLayout_2->addWidget(module_1);

        module_2 = new QPushButton(verticalLayoutWidget);
        module_2->setObjectName("module_2");

        verticalLayout_2->addWidget(module_2);

        module_3 = new QPushButton(verticalLayoutWidget);
        module_3->setObjectName("module_3");

        verticalLayout_2->addWidget(module_3);

        pages->addWidget(main);
        test = new QWidget();
        test->setObjectName("test");
        sizePolicy.setHeightForWidth(test->sizePolicy().hasHeightForWidth());
        test->setSizePolicy(sizePolicy);
        verticalLayoutWidget_3 = new QWidget(test);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(10, 10, 1241, 681));
        verticalLayoutWidget_3->setMinimumSize(QSize(0, 100));
        vbox_test = new QVBoxLayout(verticalLayoutWidget_3);
        vbox_test->setObjectName("vbox_test");
        vbox_test->setSizeConstraint(QLayout::SetMaximumSize);
        vbox_test->setContentsMargins(0, 0, 0, 0);
        question = new QLabel(verticalLayoutWidget_3);
        question->setObjectName("question");
        sizePolicy.setHeightForWidth(question->sizePolicy().hasHeightForWidth());
        question->setSizePolicy(sizePolicy);
        question->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(16);
        font.setBold(false);
        question->setFont(font);
        question->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        question->setWordWrap(true);

        vbox_test->addWidget(question);

        variant_1 = new QRadioButton(verticalLayoutWidget_3);
        variant_1->setObjectName("variant_1");
        sizePolicy.setHeightForWidth(variant_1->sizePolicy().hasHeightForWidth());
        variant_1->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        variant_1->setFont(font1);

        vbox_test->addWidget(variant_1);

        variant_2 = new QRadioButton(verticalLayoutWidget_3);
        variant_2->setObjectName("variant_2");
        sizePolicy.setHeightForWidth(variant_2->sizePolicy().hasHeightForWidth());
        variant_2->setSizePolicy(sizePolicy);
        variant_2->setFont(font1);

        vbox_test->addWidget(variant_2);

        variant_3 = new QRadioButton(verticalLayoutWidget_3);
        variant_3->setObjectName("variant_3");
        sizePolicy.setHeightForWidth(variant_3->sizePolicy().hasHeightForWidth());
        variant_3->setSizePolicy(sizePolicy);
        variant_3->setFont(font1);

        vbox_test->addWidget(variant_3);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        vbox_test->addItem(verticalSpacer);

        bottom_bar = new QHBoxLayout();
        bottom_bar->setObjectName("bottom_bar");
        bottom_bar->setSizeConstraint(QLayout::SetFixedSize);
        right_answers_count = new QLabel(verticalLayoutWidget_3);
        right_answers_count->setObjectName("right_answers_count");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(right_answers_count->sizePolicy().hasHeightForWidth());
        right_answers_count->setSizePolicy(sizePolicy1);

        bottom_bar->addWidget(right_answers_count);

        next = new QPushButton(verticalLayoutWidget_3);
        next->setObjectName("next");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(next->sizePolicy().hasHeightForWidth());
        next->setSizePolicy(sizePolicy2);

        bottom_bar->addWidget(next);

        exit_test = new QPushButton(verticalLayoutWidget_3);
        exit_test->setObjectName("exit_test");
        sizePolicy2.setHeightForWidth(exit_test->sizePolicy().hasHeightForWidth());
        exit_test->setSizePolicy(sizePolicy2);

        bottom_bar->addWidget(exit_test);


        vbox_test->addLayout(bottom_bar);

        pages->addWidget(test);
        test_results = new QWidget();
        test_results->setObjectName("test_results");
        verticalLayoutWidget_2 = new QWidget(test_results);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(340, 270, 541, 131));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        result_label = new QLabel(verticalLayoutWidget_2);
        result_label->setObjectName("result_label");
        result_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(result_label);

        right_answers_count_2 = new QLabel(verticalLayoutWidget_2);
        right_answers_count_2->setObjectName("right_answers_count_2");
        right_answers_count_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(right_answers_count_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_2 = new QPushButton(verticalLayoutWidget_2);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        end_test = new QPushButton(verticalLayoutWidget_2);
        end_test->setObjectName("end_test");

        horizontalLayout->addWidget(end_test);


        verticalLayout->addLayout(horizontalLayout);

        pages->addWidget(test_results);
        practice = new QWidget();
        practice->setObjectName("practice");
        gridLayoutWidget = new QWidget(practice);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 1241, 681));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        incident_vid_combox = new QComboBox(gridLayoutWidget);
        incident_vid_combox->addItem(QString());
        incident_vid_combox->addItem(QString());
        incident_vid_combox->addItem(QString());
        incident_vid_combox->addItem(QString());
        incident_vid_combox->setObjectName("incident_vid_combox");

        gridLayout->addWidget(incident_vid_combox, 4, 2, 1, 1);

        floor_label = new QLabel(gridLayoutWidget);
        floor_label->setObjectName("floor_label");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(floor_label->sizePolicy().hasHeightForWidth());
        floor_label->setSizePolicy(sizePolicy3);
        floor_label->setAutoFillBackground(false);
        floor_label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(floor_label, 1, 5, 1, 1);

        is_02 = new QCheckBox(gridLayoutWidget);
        is_02->setObjectName("is_02");

        gridLayout->addWidget(is_02, 12, 4, 1, 1);

        street_label = new QLabel(gridLayoutWidget);
        street_label->setObjectName("street_label");
        sizePolicy3.setHeightForWidth(street_label->sizePolicy().hasHeightForWidth());
        street_label->setSizePolicy(sizePolicy3);
        street_label->setAutoFillBackground(false);
        street_label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(street_label, 1, 0, 1, 1);

        is_emergency = new QCheckBox(gridLayoutWidget);
        is_emergency->setObjectName("is_emergency");

        gridLayout->addWidget(is_emergency, 5, 4, 1, 1);

        street_entry = new QLineEdit(gridLayoutWidget);
        street_entry->setObjectName("street_entry");

        gridLayout->addWidget(street_entry, 1, 2, 1, 1);

        phone_label = new QLabel(gridLayoutWidget);
        phone_label->setObjectName("phone_label");
        sizePolicy3.setHeightForWidth(phone_label->sizePolicy().hasHeightForWidth());
        phone_label->setSizePolicy(sizePolicy3);
        phone_label->setAutoFillBackground(false);
        phone_label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(phone_label, 13, 0, 1, 1);

        full_name_entry = new QLineEdit(gridLayoutWidget);
        full_name_entry->setObjectName("full_name_entry");

        gridLayout->addWidget(full_name_entry, 11, 2, 1, 1);

        help_3 = new QLabel(gridLayoutWidget);
        help_3->setObjectName("help_3");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(help_3->sizePolicy().hasHeightForWidth());
        help_3->setSizePolicy(sizePolicy4);
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        help_3->setFont(font2);
        help_3->setAutoFillBackground(false);
        help_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(help_3, 10, 2, 1, 1);

        incident_vid_label = new QLabel(gridLayoutWidget);
        incident_vid_label->setObjectName("incident_vid_label");
        sizePolicy3.setHeightForWidth(incident_vid_label->sizePolicy().hasHeightForWidth());
        incident_vid_label->setSizePolicy(sizePolicy3);
        incident_vid_label->setAutoFillBackground(false);
        incident_vid_label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(incident_vid_label, 4, 0, 1, 1);

        is_03 = new QCheckBox(gridLayoutWidget);
        is_03->setObjectName("is_03");

        gridLayout->addWidget(is_03, 13, 4, 1, 1);

        adress_entry = new QLineEdit(gridLayoutWidget);
        adress_entry->setObjectName("adress_entry");

        gridLayout->addWidget(adress_entry, 12, 2, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        victims = new QLabel(gridLayoutWidget);
        victims->setObjectName("victims");
        sizePolicy3.setHeightForWidth(victims->sizePolicy().hasHeightForWidth());
        victims->setSizePolicy(sizePolicy3);
        victims->setAutoFillBackground(false);
        victims->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_4->addWidget(victims);

        deads = new QLabel(gridLayoutWidget);
        deads->setObjectName("deads");
        sizePolicy3.setHeightForWidth(deads->sizePolicy().hasHeightForWidth());
        deads->setSizePolicy(sizePolicy3);
        deads->setAutoFillBackground(false);
        deads->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_4->addWidget(deads);


        gridLayout->addLayout(verticalLayout_4, 7, 3, 1, 1);

        floor_entry = new QLineEdit(gridLayoutWidget);
        floor_entry->setObjectName("floor_entry");

        gridLayout->addWidget(floor_entry, 1, 6, 1, 1);

        description_entry = new QTextEdit(gridLayoutWidget);
        description_entry->setObjectName("description_entry");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(description_entry->sizePolicy().hasHeightForWidth());
        description_entry->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(description_entry, 7, 2, 1, 1);

        subject_label = new QLabel(gridLayoutWidget);
        subject_label->setObjectName("subject_label");
        sizePolicy3.setHeightForWidth(subject_label->sizePolicy().hasHeightForWidth());
        subject_label->setSizePolicy(sizePolicy3);
        subject_label->setAutoFillBackground(false);
        subject_label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(subject_label, 2, 5, 1, 1);

        house_label = new QLabel(gridLayoutWidget);
        house_label->setObjectName("house_label");
        sizePolicy3.setHeightForWidth(house_label->sizePolicy().hasHeightForWidth());
        house_label->setSizePolicy(sizePolicy3);
        house_label->setAutoFillBackground(false);
        house_label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(house_label, 1, 3, 1, 1);

        is_04 = new QCheckBox(gridLayoutWidget);
        is_04->setObjectName("is_04");

        gridLayout->addWidget(is_04, 14, 4, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");

        horizontalLayout_2->addLayout(horizontalLayout_3);


        gridLayout->addLayout(horizontalLayout_2, 7, 6, 1, 1);

        help_2 = new QLabel(gridLayoutWidget);
        help_2->setObjectName("help_2");
        sizePolicy4.setHeightForWidth(help_2->sizePolicy().hasHeightForWidth());
        help_2->setSizePolicy(sizePolicy4);
        help_2->setFont(font2);
        help_2->setAutoFillBackground(false);
        help_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(help_2, 3, 2, 1, 1);

        help_4 = new QLabel(gridLayoutWidget);
        help_4->setObjectName("help_4");
        sizePolicy4.setHeightForWidth(help_4->sizePolicy().hasHeightForWidth());
        help_4->setSizePolicy(sizePolicy4);
        help_4->setFont(font2);
        help_4->setAutoFillBackground(false);
        help_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(help_4, 10, 4, 1, 1);

        adress_label = new QLabel(gridLayoutWidget);
        adress_label->setObjectName("adress_label");
        sizePolicy3.setHeightForWidth(adress_label->sizePolicy().hasHeightForWidth());
        adress_label->setSizePolicy(sizePolicy3);
        adress_label->setAutoFillBackground(false);
        adress_label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(adress_label, 12, 0, 1, 1);

        is_01 = new QCheckBox(gridLayoutWidget);
        is_01->setObjectName("is_01");

        gridLayout->addWidget(is_01, 11, 4, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        victims_entry = new QLineEdit(gridLayoutWidget);
        victims_entry->setObjectName("victims_entry");

        verticalLayout_3->addWidget(victims_entry);

        deads_entry = new QLineEdit(gridLayoutWidget);
        deads_entry->setObjectName("deads_entry");

        verticalLayout_3->addWidget(deads_entry);


        gridLayout->addLayout(verticalLayout_3, 7, 4, 1, 1);

        help = new QLabel(gridLayoutWidget);
        help->setObjectName("help");
        sizePolicy4.setHeightForWidth(help->sizePolicy().hasHeightForWidth());
        help->setSizePolicy(sizePolicy4);
        help->setFont(font2);
        help->setAutoFillBackground(false);
        help->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(help, 0, 2, 1, 1);

        flat_label = new QLabel(gridLayoutWidget);
        flat_label->setObjectName("flat_label");
        sizePolicy3.setHeightForWidth(flat_label->sizePolicy().hasHeightForWidth());
        flat_label->setSizePolicy(sizePolicy3);
        flat_label->setAutoFillBackground(false);
        flat_label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(flat_label, 2, 3, 1, 1);

        doorway_entry = new QLineEdit(gridLayoutWidget);
        doorway_entry->setObjectName("doorway_entry");

        gridLayout->addWidget(doorway_entry, 2, 2, 1, 1);

        flat_entry = new QLineEdit(gridLayoutWidget);
        flat_entry->setObjectName("flat_entry");

        gridLayout->addWidget(flat_entry, 2, 4, 1, 1);

        description_label = new QLabel(gridLayoutWidget);
        description_label->setObjectName("description_label");
        sizePolicy3.setHeightForWidth(description_label->sizePolicy().hasHeightForWidth());
        description_label->setSizePolicy(sizePolicy3);
        description_label->setAutoFillBackground(false);
        description_label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(description_label, 7, 0, 1, 1);

        subject_entry = new QLineEdit(gridLayoutWidget);
        subject_entry->setObjectName("subject_entry");

        gridLayout->addWidget(subject_entry, 2, 6, 1, 1);

        doorway_label = new QLabel(gridLayoutWidget);
        doorway_label->setObjectName("doorway_label");
        sizePolicy3.setHeightForWidth(doorway_label->sizePolicy().hasHeightForWidth());
        doorway_label->setSizePolicy(sizePolicy3);
        doorway_label->setAutoFillBackground(false);
        doorway_label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(doorway_label, 2, 0, 1, 1);

        is_thread = new QCheckBox(gridLayoutWidget);
        is_thread->setObjectName("is_thread");

        gridLayout->addWidget(is_thread, 4, 4, 1, 1);

        incident_type_label = new QLabel(gridLayoutWidget);
        incident_type_label->setObjectName("incident_type_label");
        sizePolicy3.setHeightForWidth(incident_type_label->sizePolicy().hasHeightForWidth());
        incident_type_label->setSizePolicy(sizePolicy3);
        incident_type_label->setAutoFillBackground(false);
        incident_type_label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(incident_type_label, 5, 0, 1, 1);

        incident_type_combox = new QComboBox(gridLayoutWidget);
        incident_type_combox->addItem(QString());
        incident_type_combox->addItem(QString());
        incident_type_combox->addItem(QString());
        incident_type_combox->addItem(QString());
        incident_type_combox->setObjectName("incident_type_combox");

        gridLayout->addWidget(incident_type_combox, 5, 2, 1, 1);

        full_name_label = new QLabel(gridLayoutWidget);
        full_name_label->setObjectName("full_name_label");
        sizePolicy3.setHeightForWidth(full_name_label->sizePolicy().hasHeightForWidth());
        full_name_label->setSizePolicy(sizePolicy3);
        full_name_label->setAutoFillBackground(false);
        full_name_label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(full_name_label, 11, 0, 1, 1);

        house_entry = new QLineEdit(gridLayoutWidget);
        house_entry->setObjectName("house_entry");

        gridLayout->addWidget(house_entry, 1, 4, 1, 1);

        phone_entry = new QLineEdit(gridLayoutWidget);
        phone_entry->setObjectName("phone_entry");

        gridLayout->addWidget(phone_entry, 13, 2, 1, 1);

        next_situation = new QPushButton(gridLayoutWidget);
        next_situation->setObjectName("next_situation");

        gridLayout->addWidget(next_situation, 14, 6, 1, 1);

        play_audio = new QPushButton(gridLayoutWidget);
        play_audio->setObjectName("play_audio");

        gridLayout->addWidget(play_audio, 12, 6, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 13, 6, 1, 1);

        pages->addWidget(practice);
        list_of_themes = new QWidget();
        list_of_themes->setObjectName("list_of_themes");
        verticalLayoutWidget_4 = new QWidget(list_of_themes);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(9, 9, 1241, 686));
        theme_list = new QVBoxLayout(verticalLayoutWidget_4);
        theme_list->setObjectName("theme_list");
        theme_list->setContentsMargins(0, 0, 0, 0);
        page_003 = new QPushButton(verticalLayoutWidget_4);
        page_003->setObjectName("page_003");
        page_003->setAutoFillBackground(false);

        theme_list->addWidget(page_003);

        page_008 = new QPushButton(verticalLayoutWidget_4);
        page_008->setObjectName("page_008");

        theme_list->addWidget(page_008);

        page_028 = new QPushButton(verticalLayoutWidget_4);
        page_028->setObjectName("page_028");

        theme_list->addWidget(page_028);

        page_070 = new QPushButton(verticalLayoutWidget_4);
        page_070->setObjectName("page_070");

        theme_list->addWidget(page_070);

        page_145 = new QPushButton(verticalLayoutWidget_4);
        page_145->setObjectName("page_145");

        theme_list->addWidget(page_145);

        page_262 = new QPushButton(verticalLayoutWidget_4);
        page_262->setObjectName("page_262");

        theme_list->addWidget(page_262);

        page_293 = new QPushButton(verticalLayoutWidget_4);
        page_293->setObjectName("page_293");

        theme_list->addWidget(page_293);

        page_319 = new QPushButton(verticalLayoutWidget_4);
        page_319->setObjectName("page_319");

        theme_list->addWidget(page_319);

        page_345 = new QPushButton(verticalLayoutWidget_4);
        page_345->setObjectName("page_345");

        theme_list->addWidget(page_345);

        page_360 = new QPushButton(verticalLayoutWidget_4);
        page_360->setObjectName("page_360");

        theme_list->addWidget(page_360);

        page_361 = new QPushButton(verticalLayoutWidget_4);
        page_361->setObjectName("page_361");

        theme_list->addWidget(page_361);

        page_401 = new QPushButton(verticalLayoutWidget_4);
        page_401->setObjectName("page_401");

        theme_list->addWidget(page_401);

        page_409 = new QPushButton(verticalLayoutWidget_4);
        page_409->setObjectName("page_409");

        theme_list->addWidget(page_409);

        page_440 = new QPushButton(verticalLayoutWidget_4);
        page_440->setObjectName("page_440");

        theme_list->addWidget(page_440);

        page_443 = new QPushButton(verticalLayoutWidget_4);
        page_443->setObjectName("page_443");

        theme_list->addWidget(page_443);

        pages->addWidget(list_of_themes);

        retranslateUi(Widget);

        pages->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        module_1->setText(QCoreApplication::translate("Widget", "\320\234\320\276\320\264\321\203\320\273\321\214 1", nullptr));
        module_2->setText(QCoreApplication::translate("Widget", "\320\234\320\276\320\264\321\203\320\273\321\214 2", nullptr));
        module_3->setText(QCoreApplication::translate("Widget", "\320\234\320\276\320\264\321\203\320\273\321\214 3", nullptr));
        question->setText(QCoreApplication::translate("Widget", "\320\222\320\276\320\277\321\200\320\276\321\201", nullptr));
        variant_1->setText(QCoreApplication::translate("Widget", "\320\222\320\260\321\200\320\270\320\260\320\275\321\202 1", nullptr));
        variant_2->setText(QCoreApplication::translate("Widget", "\320\222\320\260\321\200\320\270\320\260\320\275\321\202 2", nullptr));
        variant_3->setText(QCoreApplication::translate("Widget", "\320\222\320\260\321\200\320\270\320\260\320\275\321\202 3", nullptr));
        right_answers_count->setText(QCoreApplication::translate("Widget", "\320\237\321\200\320\260\320\262\320\270\320\273\321\214\320\275\321\213\321\205 \320\276\321\202\320\262\320\265\321\202\320\276\320\262: 0", nullptr));
        next->setText(QCoreApplication::translate("Widget", "\320\236\320\232", nullptr));
        exit_test->setText(QCoreApplication::translate("Widget", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        result_label->setText(QCoreApplication::translate("Widget", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213 \321\202\320\265\321\201\321\202\320\260", nullptr));
        right_answers_count_2->setText(QCoreApplication::translate("Widget", "\320\237\321\200\320\260\320\262\320\270\320\273\321\214\320\275\321\213\321\205 \320\276\321\202\320\262\320\265\321\202\320\276\320\262: ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\320\227\320\260\320\275\320\276\320\262\320\276", nullptr));
        end_test->setText(QCoreApplication::translate("Widget", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        incident_vid_combox->setItemText(0, QCoreApplication::translate("Widget", "1", nullptr));
        incident_vid_combox->setItemText(1, QCoreApplication::translate("Widget", "2", nullptr));
        incident_vid_combox->setItemText(2, QCoreApplication::translate("Widget", "3", nullptr));
        incident_vid_combox->setItemText(3, QCoreApplication::translate("Widget", "4", nullptr));

        floor_label->setText(QCoreApplication::translate("Widget", "\320\255\321\202\320\260\320\266", nullptr));
        is_02->setText(QCoreApplication::translate("Widget", "02", nullptr));
        street_label->setText(QCoreApplication::translate("Widget", "\320\243\320\273\320\270\321\206\320\260", nullptr));
        is_emergency->setText(QCoreApplication::translate("Widget", "\320\237\321\200\320\270\320\267\320\275\320\260\320\272 \320\247\320\241", nullptr));
        phone_label->setText(QCoreApplication::translate("Widget", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        help_3->setText(QCoreApplication::translate("Widget", "\320\241\320\262\320\265\320\264\320\265\320\275\320\270\321\217 \320\276 \320\267\320\260\321\217\320\262\320\270\321\202\320\265\320\273\320\265", nullptr));
        incident_vid_label->setText(QCoreApplication::translate("Widget", "\320\222\320\270\320\264 \320\277\321\200\320\276\320\270\321\201\321\210\320\265\321\201\321\202\320\262\320\270\321\217", nullptr));
        is_03->setText(QCoreApplication::translate("Widget", "03", nullptr));
        victims->setText(QCoreApplication::translate("Widget", "\320\237\320\276\321\201\321\202\321\200\320\260\320\264\320\260\320\262\321\210\320\270\321\205", nullptr));
        deads->setText(QCoreApplication::translate("Widget", "\320\237\320\276\320\263\320\270\320\261\321\210\320\270\321\205", nullptr));
        subject_label->setText(QCoreApplication::translate("Widget", "\320\236\320\261\321\212\320\265\320\272\321\202", nullptr));
        house_label->setText(QCoreApplication::translate("Widget", "\320\224\320\276\320\274", nullptr));
        is_04->setText(QCoreApplication::translate("Widget", "04", nullptr));
        help_2->setText(QCoreApplication::translate("Widget", "\320\241\320\262\320\265\320\264\320\265\320\275\320\270\321\217 \320\276 \320\277\321\200\320\276\320\270\321\201\321\210\320\265\321\201\321\202\320\262\320\270\320\270", nullptr));
        help_4->setText(QCoreApplication::translate("Widget", "\320\224\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        adress_label->setText(QCoreApplication::translate("Widget", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        is_01->setText(QCoreApplication::translate("Widget", "01", nullptr));
        help->setText(QCoreApplication::translate("Widget", "\320\241\320\262\320\265\320\264\320\265\320\275\320\270\321\217 \320\276 \320\274\320\265\321\201\321\202\320\265 \320\277\321\200\320\276\320\270\321\210\320\265\321\201\321\202\320\262\320\270\321\217", nullptr));
        flat_label->setText(QCoreApplication::translate("Widget", "\320\232\320\262\320\260\321\200\321\202\320\270\321\200\320\260", nullptr));
        description_label->setText(QCoreApplication::translate("Widget", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        doorway_label->setText(QCoreApplication::translate("Widget", "\320\237\320\276\320\264\321\212\320\265\320\267\320\264", nullptr));
        is_thread->setText(QCoreApplication::translate("Widget", "\320\243\320\263\321\200\320\276\320\267\320\260 \320\273\321\216\320\264\321\217\320\274", nullptr));
        incident_type_label->setText(QCoreApplication::translate("Widget", "\320\242\320\270\320\277 \320\277\321\200\320\276\320\270\321\201\321\210\320\265\321\201\321\202\320\262\320\270\321\217", nullptr));
        incident_type_combox->setItemText(0, QCoreApplication::translate("Widget", "1", nullptr));
        incident_type_combox->setItemText(1, QCoreApplication::translate("Widget", "2", nullptr));
        incident_type_combox->setItemText(2, QCoreApplication::translate("Widget", "3", nullptr));
        incident_type_combox->setItemText(3, QCoreApplication::translate("Widget", "4", nullptr));

        full_name_label->setText(QCoreApplication::translate("Widget", "\320\244\320\230\320\236", nullptr));
        next_situation->setText(QCoreApplication::translate("Widget", "\320\241\320\273\320\265\320\264\321\203\321\211\320\260\321\217 \321\201\320\270\321\202\321\203\320\260\321\206\320\270\321\217", nullptr));
        play_audio->setText(QCoreApplication::translate("Widget", "\320\222\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\321\201\321\202\320\270 \320\260\321\203\320\264\320\270\320\276\321\204\320\260\320\271\320\273", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\262\320\265\321\200\320\275\321\213\320\271 \320\276\321\202\320\262\320\265\321\202", nullptr));
        page_003->setText(QCoreApplication::translate("Widget", "1. \320\237\320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\321\200\320\260\320\262\320\270\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\260 \342\204\22664 \320\276\321\202 20.02.2012\320\263. \302\253\320\236 \321\201\320\270\321\201\321\202\320\265\320\274\320\265\n"
"\320\276\320\261\320\265\321\201\320\277\320\265\321\207\320\265\320\275\320\270\321\217 \320\262\321\213\320\267\320\276\320\262\320\276\320\262 \321\215\320\272\321\201\321\202\321\200\320\265\320\275\320\275\321\213\321\205 \320\276\320\277\320\265\321\200\320\260\321\202\320\270\320\262\320\275\321\213\321\205 \321\201\320\273\321\203\320\266\320\261 \320\277\320\276 \321\202\320\265\321\200\321\200\320\270\321\202\320\276\321\200\320\270\320\270 \320\243\320\240\302\273", nullptr));
        page_008->setText(QCoreApplication::translate("Widget", "2. \320\244\320\265\320\264\320\265\321\200\320\260\320\273\321\214\320\275\321\213\320\271 \320\267\320\260\320\272\320\276\320\275 \342\204\226395 \320\276\321\202 28.12.2013\320\263. \302\253\320\236 \320\263\320\276\321\201\321\203\320\264\320\260\321\200\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\271\n"
"\320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\275\320\276\320\271 \321\201\320\270\321\201\321\202\320\265\320\274\320\265 \320\255\320\240\320\220-\320\223\320\233\320\236\320\235\320\220\320\241\320\241\302\273\n"
"", nullptr));
        page_028->setText(QCoreApplication::translate("Widget", "3. \320\244\320\265\320\264\320\265\321\200\320\260\320\273\321\214\320\275\321\213\320\271 \320\267\320\260\320\272\320\276\320\275 \342\204\22668 \320\276\321\202 21.12.1994\320\263. \302\253\320\236 \320\267\320\260\321\211\320\270\321\202\320\265 \320\275\320\260\321\201\320\265\320\273\320\265\320\275\320\270\321\217 \320\270\n"
"\321\202\320\265\321\200\321\200\320\270\321\202\320\276\321\200\320\270\320\271 \320\276\321\202 \320\247\320\241 \320\277\321\200\320\270\321\200\320\276\320\264\320\275\320\276\320\263\320\276 \320\270 \321\202\320\265\321\205\320\275\320\276\320\263\320\265\320\275\320\275\320\276\320\263\320\276 \321\205\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\260\302\273", nullptr));
        page_070->setText(QCoreApplication::translate("Widget", "4. \320\244\320\265\320\264\320\265\321\200\320\260\320\273\321\214\320\275\321\213\320\271 \320\267\320\260\320\272\320\276\320\275 \342\204\22669 \320\276\321\20221.12.1994\320\263. \302\253\320\236 \320\277\320\276\320\266\320\260\321\200\320\275\320\276\320\271 \320\261\320\265\320\267\320\276\320\277\320\260\321\201\320\275\320\276\321\201\321\202\320\270\302\273", nullptr));
        page_145->setText(QCoreApplication::translate("Widget", "5. \320\244\320\265\320\264\320\265\321\200\320\260\320\273\321\214\320\275\321\213\320\271 \320\267\320\260\320\272\320\276\320\275 \342\204\226126 \320\276\321\202 07.07.2003\320\263. \302\253\320\236 \321\201\320\262\321\217\320\267\320\270\302\273.", nullptr));
        page_262->setText(QCoreApplication::translate("Widget", "6. \320\237\320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\321\200\320\260\320\262\320\270\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\260 \320\240\320\244 \342\204\226794 \320\276\321\202 30.12.2003\320\263. \302\253\320\236 \320\265\320\264\320\270\320\275\320\276\320\271\n"
"\320\263\320\276\321\201\321\203\320\264\320\260\321\200\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\271 \321\201\320\270\321\201\321\202\320\265\320\274\320\265 \320\277\321\200\320\265\320\264\321\203\320\277\321\200\320\265\320\266\320\264\320\265\320\275\320\270\321\217 \320\270 \320\273\320\270\320\272\320\262\320\270\320\264\320\260\321\206\320\270\320\270 \320\247\320\241\302\273.", nullptr));
        page_293->setText(QCoreApplication::translate("Widget", "7. \320\237\320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\321\200\320\260\320\262\320\270\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\260 \320\243\320\240 \342\204\226145 \320\276\321\202 06.12.2004\320\263. \302\253\320\236\320\261 \320\243\320\264\320\274\321\203\321\200\321\202\321\201\320\272\320\276\320\271\n"
"\321\202\320\265\321\200\321\200\320\270\321\202\320\276\321\200\320\270\320\260\320\273\321\214\320\275\320\276\320\271 \320\277\320\276\320\264\321\201\320\270\321\201\321\202\320\265\320\274\321\213 \320\265\320\264\320\270\320\275\320\276\320\271 \320\263\320\276\321\201\321\203\320\264\320\260\321\200\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\271 \321\201\320\270\321\201\321\202\320\265\320\274\321\213\n"
"\320\277\321\200\320\265\320\264\321\203\320\277\321\200\320\265\320\266\320\264\320\265\320\275\320\270\321\217 \320\270 \320\273\320\270\320\272\320\262\320\270\320\264\320\260\321\206\320\270\320\270"
                        " \320\247\320\241\302\273.", nullptr));
        page_319->setText(QCoreApplication::translate("Widget", "8. \320\237\321\200\320\270\320\272\320\260\320\267 \320\234\320\247\320\241 \320\240\320\244 \342\204\226329 \320\276\321\202 08.07.2004\320\263. \302\253 \320\236\320\261 \321\203\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\270 \320\272\321\200\320\270\321\202\320\265\321\200\320\270\320\265\320\262\n"
"\320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270 \320\276 \320\247\320\241\302\273.", nullptr));
        page_345->setText(QCoreApplication::translate("Widget", "9. \320\237\320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\321\200\320\260\320\262\320\270\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\260 \320\240\320\244 \342\204\226958 \320\276\321\202 21.11.2011\320\263. \302\253\320\236 \321\201\320\270\321\201\321\202\320\265\320\274\320\265\n"
"\320\276\320\261\320\265\321\201\320\277\320\265\321\207\320\265\320\275\320\270\321\217 \320\262\321\213\320\267\320\276\320\262\320\260 \321\215\320\272\321\201\321\202\321\200\320\265\320\275\320\275\321\213\321\205 \320\276\320\277\320\265\321\200\320\260\321\202\320\270\320\262\320\275\321\213\321\205 \321\201\320\273\321\203\320\266\320\261 \320\277\320\276 \320\265\320\264\320\270\320\275\320\276\320\274\321\203 \320\275\320\276\320\274\320\265\321\200\321\203\n"
"112\302\273.", nullptr));
        page_360->setText(QCoreApplication::translate("Widget", "10. \320\237\320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265 \320\237\321\200\320\260\320\262\320\270\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\260 1453 \320\276\321\202 31.08.2021\320\263. \302\253\320\236\320\261 \321\203\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\270\n"
"\320\277\320\265\321\200\320\265\321\207\320\275\321\217 \321\215\320\272\321\201\321\202\321\200\320\265\320\275\320\275\321\213\321\205 \320\276\320\277\320\265\321\200\320\260\321\202\320\270\320\262\320\275\321\213\321\205 \321\201\320\273\321\203\320\266\320\261, \320\262\321\213\320\267\320\276\320\262 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\272\321\200\321\203\320\263\320\273\320\276\321\201\321\203\321\202\320\276\321\207\320\275\320\276 \320\270\n"
"\320\261\320\265\321\201\320\277\320\273\320\260\321\202\320\275\320\276 \320\276\320\261\321\217\320\267\320\260\320\275 \320\276\320\261\320\265\321\201\320\277\320"
                        "\265\321\207\320\270\321\202\321\214 \320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200 \321\201\320\262\321\217\320\267\320\270 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\216 \321\203\321\201\320\273\321\203\320\263\320\260\320\274\320\270 \321\201\320\262\321\217\320\267\320\270\302\273.", nullptr));
        page_361->setText(QCoreApplication::translate("Widget", "11. \320\244\320\265\320\264\320\265\321\200\320\260\320\273\321\214\320\275\321\213\320\271 \320\267\320\260\320\272\320\276\320\275 \342\204\226151 \320\276\321\202 22.08.1995\320\263. \302\253\320\236\320\261 \320\260\320\262\320\260\321\200\320\270\320\271\320\275\320\276-\321\201\320\277\320\260\321\201\320\260\321\202\320\265\320\273\321\214\320\275\321\213\321\205\n"
"\321\201\320\273\321\203\320\266\320\261\320\260\321\205 \320\270 \321\201\321\202\320\260\321\202\321\203\321\201\320\265 \321\201\320\277\320\260\321\201\320\260\321\202\320\265\320\273\321\217\302\273.", nullptr));
        page_401->setText(QCoreApplication::translate("Widget", "12. \320\244\320\265\320\264\320\265\321\200\320\260\320\273\321\214\320\275\321\213\320\271 \320\267\320\260\320\272\320\276\320\275 \342\204\22628 \320\276\321\202 12.02.1997\320\263. \302\253\320\236 \320\263\321\200\320\260\320\266\320\264\320\260\320\275\321\201\320\272\320\276\320\271 \320\276\320\261\320\276\321\200\320\276\320\275\320\265\302\273.", nullptr));
        page_409->setText(QCoreApplication::translate("Widget", "13. \320\244\320\265\320\264\320\265\321\200\320\260\320\273\321\214\320\275\321\213\320\271 \320\267\320\260\320\272\320\276\320\275 \342\204\226488 \320\276\321\202 30.12.2020\320\263. \302\253\320\236 \321\201\320\270\321\201\321\202\320\265\320\274\320\265 112\302\273.", nullptr));
        page_440->setText(QCoreApplication::translate("Widget", "14. \320\243\320\272\320\260\320\267 \320\237\321\200\320\265\320\267\320\270\320\264\320\265\320\275\321\202\320\260 \320\240\320\244 \342\204\2261632 \320\276\321\202 28.12.2010\320\263. \302\253 \320\236 \321\201\320\276\320\262\320\265\321\200\321\210\320\265\320\275\321\201\321\202\320\262\320\276\320\262\320\260\320\275\320\270\320\270\n"
"\321\201\320\270\321\201\321\202\320\265\320\274\321\213 \320\276\320\261\320\265\321\201\320\277\320\265\321\207\320\265\320\275\320\270\321\217 \320\262\321\213\320\267\320\276\320\262\320\260 \321\215\320\272\321\201\321\202\321\200\320\265\320\275\320\275\321\213\321\205 \320\276\320\277\320\265\321\200\320\260\321\202\320\270\320\262\320\275\321\213\321\205 \321\201\320\273\321\203\320\266\320\261 \320\275\320\260 \321\202\320\265\321\200\321\200\320\270\321\202\320\276\321\200\320\270\320\270\n"
"\320\240\320\276\321\201\321\201\320\270\320\271\321\201\320\272\320\276\320\271 \320\244\320\265\320\264\320\265\321\200\320\260\321\206\320\270\320\270\302\273.", nullptr));
        page_443->setText(QCoreApplication::translate("Widget", "15. \320\240\321\203\320\272\320\276\320\262\320\276\320\264\321\201\321\202\320\262\320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217 \320\220\320\240\320\234 \320\224\320\236 \320\241\320\237\320\236 \302\253\320\230\320\241\320\242\320\236\320\232-\320\241\320\234\302\273.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
