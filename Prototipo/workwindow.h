#ifndef WORKWINDOW_H
#define WORKWINDOW_H

#include <QDialog>
#include <QTimer>


namespace Ui {
class workwindow;
}

class workwindow : public QDialog
{
    Q_OBJECT

public:
    explicit workwindow(QWidget *parent = nullptr);
    ~workwindow();

public slots:
    void function();

private slots:
    void on_comboBox_operacion_currentIndexChanged(int index);

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::workwindow *ui;
        QTimer *timer;
};

#endif // WORKWINDOW_H
