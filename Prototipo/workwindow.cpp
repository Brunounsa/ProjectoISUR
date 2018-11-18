#include "workwindow.h"
#include "ui_workwindow.h"
#include <QDateTime>
#include <QDate>

workwindow::workwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::workwindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(function()));
    timer->start(1000);


    ui->comboBox_moneda->addItem("soles");
    ui->comboBox_moneda->addItem("dolares");

    ui->comboBox_operacion->addItem("retiro");
    ui->comboBox_operacion->addItem("deposito");
    ui->comboBox_operacion->addItem("disposicion");
    ui->comboBox_operacion->addItem("pago");
    ui->comboBox_operacion->addItem("cheque");
    ui->comboBox_operacion->addItem("notas contables");
    ui->comboBox_operacion->addItem("COMPRA $");
    ui->comboBox_operacion->addItem("VENTA $");
    ui->comboBox_operacion->addItem("fondos mutuos");
    ui->comboBox_operacion->addItem("certificado bancario");
    ui->comboBox_operacion->addItem("cuenta a plazo");
    ui->comboBox_operacion->addItem("entrega de cheques");
    ui->comboBox_operacion->addItem("bloqueo de cheques");
    ui->comboBox_operacion->addItem("bloqueo de cta");
    ui->comboBox_operacion->addItem("desbloqueo de cta");
    ui->comboBox_operacion->addItem("retencion en cta");
    ui->comboBox_operacion->addItem("anulacion de retencion");

    ui->lineEdit_itf->setEnabled(false);

    QDate fecha = QDate::currentDate();
    QString fecha_text = fecha.toString();
    ui->label_fecha->setText(fecha_text);
}

workwindow::~workwindow()
{
    delete ui;
}

void workwindow::function()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    ui->label_hora->setText(time_text);
}

void workwindow::on_comboBox_operacion_currentIndexChanged(int index)
{
    if(index == 0)
    {
        ui->comboBox_cta->clear();
        ui->comboBox_cta->addItem("ahorro");
        ui->comboBox_cta->addItem("cta cte");
        ui->comboBox_tipoop->clear();
        ui->comboBox_tipoop->addItem("efectivo");
        ui->comboBox_tipoop->addItem("contable");
    }
    else if(index == 1)
    {
        ui->comboBox_cta->clear();
        ui->comboBox_cta->addItem("ahorro");
        ui->comboBox_cta->addItem("cta cte");
        ui->comboBox_cta->addItem("recoleccion");
        ui->comboBox_tipoop->clear();
        ui->comboBox_tipoop->addItem("efectivo");
        ui->comboBox_tipoop->addItem("contable");
        ui->comboBox_tipoop->addItem("cheque otro banco");
    }
    else if(index == 2)
    {
        ui->comboBox_cta->clear();
        ui->comboBox_cta->addItem("tarj credito");
        ui->comboBox_cta->addItem("credito");
        ui->comboBox_tipoop->clear();
        ui->comboBox_tipoop->addItem("efectivo");
        ui->comboBox_tipoop->addItem("contable");
    }
    else if(index == 3)
    {
        ui->comboBox_cta->clear();
        ui->comboBox_cta->addItem("tarj credito");
        ui->comboBox_cta->addItem("credito");
        ui->comboBox_tipoop->clear();
        ui->comboBox_tipoop->addItem("efectivo");
        ui->comboBox_tipoop->addItem("contable");
        ui->comboBox_tipoop->addItem("cheque otro banco");
    }
    else if(index == 4)
    {
        ui->comboBox_cta->clear();
        ui->comboBox_cta->addItem("cta cte");
        ui->comboBox_tipoop->clear();
        ui->comboBox_tipoop->addItem("efectivo");
        ui->comboBox_tipoop->addItem("contable");
    }
    else if(index == 5)
    {
        ui->comboBox_cta->clear();
        ui->comboBox_cta->addItem("debe");
        ui->comboBox_cta->addItem("haber");
        ui->comboBox_tipoop->clear();
        ui->comboBox_tipoop->addItem("efectivo");
    }
    else if(index == 6)
    {
        ui->comboBox_cta->clear();
        ui->comboBox_tipoop->clear();
    }
    else if(index == 7)
    {
        ui->comboBox_cta->clear();
        ui->comboBox_tipoop->clear();
    }
    else if(index == 8)
    {
        ui->comboBox_cta->clear();
        ui->comboBox_cta->addItem("suscripcion");
        ui->comboBox_cta->addItem("rescate");
        ui->comboBox_tipoop->clear();
        ui->comboBox_tipoop->addItem("efectivo");
    }
    else if(index == 9)
    {
        ui->comboBox_cta->clear();
        ui->comboBox_cta->addItem("dep inicial");
        ui->comboBox_cta->addItem("cancelacion");
        ui->comboBox_tipoop->clear();
        ui->comboBox_tipoop->addItem("efectivo");
    }
    else if(index == 10)
    {
        ui->comboBox_cta->clear();
        ui->comboBox_cta->addItem("dep inicial");
        ui->comboBox_cta->addItem("cancelacion");
        ui->comboBox_tipoop->clear();
        ui->comboBox_tipoop->addItem("efectivo");
    }
    else if(index == 11)
    {
        ui->comboBox_cta->clear();
        ui->comboBox_tipoop->clear();
    }
    else if(index == 12)
    {
        ui->comboBox_cta->clear();
        ui->comboBox_tipoop->clear();
    }
    else if(index == 13)
    {
        ui->comboBox_cta->clear();
        ui->comboBox_cta->addItem("ahorro");
        ui->comboBox_cta->addItem("cta cte");
        ui->comboBox_tipoop->clear();
    }
    else if(index == 14)
    {
        ui->comboBox_cta->clear();
        ui->comboBox_cta->addItem("ahorro");
        ui->comboBox_cta->addItem("cta cte");
        ui->comboBox_tipoop->clear();
    }
    else if(index == 15)
    {
        ui->comboBox_cta->clear();
        ui->comboBox_cta->addItem("ahorro");
        ui->comboBox_cta->addItem("cta cte");
        ui->comboBox_tipoop->clear();
    }
    else if(index == 16)
    {
        ui->comboBox_cta->clear();
        ui->comboBox_cta->addItem("ahorro");
        ui->comboBox_cta->addItem("cta cte");
        ui->comboBox_tipoop->clear();
    }
}

void workwindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->lineEdit_itf->setEnabled(true);
    }
    else
    {
        ui->lineEdit_itf->clear();
        ui->lineEdit_itf->setEnabled(false);
    }
}
