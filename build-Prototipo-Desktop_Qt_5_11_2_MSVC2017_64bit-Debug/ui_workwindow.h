/********************************************************************************
** Form generated from reading UI file 'workwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKWINDOW_H
#define UI_WORKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_workwindow
{
public:
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_nombre;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_tarjeta;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_dni;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *comboBox_moneda;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *comboBox_operacion;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QComboBox *comboBox_cta;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QComboBox *comboBox_tipoop;
    QLabel *label_10;
    QLabel *label_hora;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_11;
    QPlainTextEdit *plainTextEdit;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLineEdit *lineEdit_saldo;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton;

    void setupUi(QDialog *workwindow)
    {
        if (workwindow->objectName().isEmpty())
            workwindow->setObjectName(QStringLiteral("workwindow"));
        workwindow->resize(800, 600);
        workwindow->setMinimumSize(QSize(800, 600));
        workwindow->setMaximumSize(QSize(800, 600));
        label = new QLabel(workwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 10, 609, 29));
        line = new QFrame(workwindow);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 40, 811, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(workwindow);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(-30, 70, 841, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(workwindow);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(-20, 160, 841, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(workwindow);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(-30, 340, 291, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(workwindow);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(-40, 550, 841, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(workwindow);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(250, 170, 20, 431));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(workwindow);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(120, 560, 3, 61));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(workwindow);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(370, 170, 20, 391));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(workwindow);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(510, 560, 3, 61));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(workwindow);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(650, 560, 3, 61));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(workwindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 100, 681, 54));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        lineEdit_nombre = new QLineEdit(layoutWidget);
        lineEdit_nombre->setObjectName(QStringLiteral("lineEdit_nombre"));

        horizontalLayout->addWidget(lineEdit_nombre);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_tarjeta = new QLineEdit(layoutWidget);
        lineEdit_tarjeta->setObjectName(QStringLiteral("lineEdit_tarjeta"));

        horizontalLayout_3->addWidget(lineEdit_tarjeta);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(44, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        lineEdit_dni = new QLineEdit(layoutWidget);
        lineEdit_dni->setObjectName(QStringLiteral("lineEdit_dni"));

        horizontalLayout_2->addWidget(lineEdit_dni);

        horizontalSpacer_2 = new QSpacerItem(363, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(workwindow);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 190, 211, 141));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        comboBox_moneda = new QComboBox(layoutWidget1);
        comboBox_moneda->setObjectName(QStringLiteral("comboBox_moneda"));

        horizontalLayout_5->addWidget(comboBox_moneda);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        comboBox_operacion = new QComboBox(layoutWidget1);
        comboBox_operacion->setObjectName(QStringLiteral("comboBox_operacion"));

        horizontalLayout_6->addWidget(comboBox_operacion);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        comboBox_cta = new QComboBox(layoutWidget1);
        comboBox_cta->setObjectName(QStringLiteral("comboBox_cta"));

        horizontalLayout_7->addWidget(comboBox_cta);


        verticalLayout_3->addLayout(horizontalLayout_7);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        comboBox_tipoop = new QComboBox(layoutWidget1);
        comboBox_tipoop->setObjectName(QStringLiteral("comboBox_tipoop"));

        horizontalLayout_8->addWidget(comboBox_tipoop);


        verticalLayout_3->addLayout(horizontalLayout_8);

        label_10 = new QLabel(workwindow);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(400, 190, 141, 16));
        label_hora = new QLabel(workwindow);
        label_hora->setObjectName(QStringLiteral("label_hora"));
        label_hora->setGeometry(QRect(550, 570, 61, 16));
        widget = new QWidget(workwindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(390, 412, 391, 141));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_4->addWidget(label_11);

        plainTextEdit = new QPlainTextEdit(widget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout_4->addWidget(plainTextEdit);

        widget1 = new QWidget(workwindow);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(50, 390, 137, 118));
        verticalLayout_5 = new QVBoxLayout(widget1);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_9 = new QLabel(widget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);

        lineEdit_saldo = new QLineEdit(widget1);
        lineEdit_saldo->setObjectName(QStringLiteral("lineEdit_saldo"));

        verticalLayout_2->addWidget(lineEdit_saldo);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_5->addWidget(pushButton);


        retranslateUi(workwindow);

        QMetaObject::connectSlotsByName(workwindow);
    } // setupUi

    void retranslateUi(QDialog *workwindow)
    {
        workwindow->setWindowTitle(QApplication::translate("workwindow", "Dialog", nullptr));
        label->setText(QApplication::translate("workwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; font-style:italic; color:#ffaa00;\">Cash Bank Simulator</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("workwindow", "NOMBRE", nullptr));
        label_4->setText(QApplication::translate("workwindow", "TARJETA", nullptr));
        label_3->setText(QApplication::translate("workwindow", "DNI", nullptr));
        label_5->setText(QApplication::translate("workwindow", "MONEDA", nullptr));
        label_6->setText(QApplication::translate("workwindow", "OPERACION", nullptr));
        label_7->setText(QApplication::translate("workwindow", "TIPO DE CTA", nullptr));
        label_8->setText(QApplication::translate("workwindow", "TIPO OP", nullptr));
        label_10->setText(QApplication::translate("workwindow", "Nombre de titular de cuenta", nullptr));
        label_hora->setText(QApplication::translate("workwindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_11->setText(QApplication::translate("workwindow", "Comentario", nullptr));
        label_9->setText(QApplication::translate("workwindow", "SALDO MONEDA", nullptr));
        pushButton->setText(QApplication::translate("workwindow", "Hecho", nullptr));
    } // retranslateUi

};

namespace Ui {
    class workwindow: public Ui_workwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKWINDOW_H
