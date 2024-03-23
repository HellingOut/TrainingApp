#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QMediaPlayer>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void update_question();
    static QList<QWidget> entries;

private slots:
    void on_next_pressed();
    void on_variant_1_pressed();
    void on_variant_2_pressed();
    void on_variant_3_pressed();
    void on_module_1_pressed();
    void on_module_2_pressed();
    void on_exit_test_pressed();
    void on_end_test_pressed();

    void on_module_3_pressed();

    void on_next_situation_pressed();


    void on_play_audio_pressed();

private:
    Ui::Widget *ui;
    QMediaPlayer* player;
    QAudioOutput* audioOutput;
};
#endif // WIDGET_H
