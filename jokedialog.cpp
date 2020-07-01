#include "jokedialog.h"
#include "ui_jokedialog.h"
#include <random>


JokeDialog::JokeDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::JokeDialog)
{
    ui->setupUi(this);
    jokelist = {"你好",
                "再见",
                "what's up",
                "whassaaaap"};
}

JokeDialog::~JokeDialog()
{
    delete ui;
}

void JokeDialog::getjoke(){
   std::random_device rd;
   std::uniform_int_distribution<int> dist(0, jokelist.size()-1);
    QString s = jokelist[dist(rd)];
    QTextBrowser *qb = ui->textBrowser;
    qb->setText(s);
    QClipboard *board = QApplication::clipboard();
    board->setText(s);
}

void JokeDialog::on_pushButton_released()
{
    getjoke();
}
