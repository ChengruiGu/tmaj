#include "jokedialog.h"
#include "ui_jokedialog.h"
#include <random>


JokeDialog::JokeDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::JokeDialog)
{
    ui->setupUi(this);
    jokelist = {QString::fromLocal8Bit("���Ҳ�ʿ������ʿ֮ǰ��ʲô������˶ʿ��"),
                QString::fromLocal8Bit("�������й����Ƴ�ins��ĵط�����������ins��������ins��"),
                QString::fromLocal8Bit("���������裺��Ϊʲô�������һ��һ�ܵġ� ����˵������Ϊ���Ǿ���С��"),
                QString::fromLocal8Bit("��Ҫһ�ݿ����Ƿ� ��Ҫ��� ��Ҫ�� ��Ҫ�� ��ү��"),
                QString::fromLocal8Bit("��ľ���游�Ӿ�����һ�������������裬����Ӫ���������ڲ�����������ģ����һ��ʿ�����˾ͶԻ�ľ��˵����������"),
                QString::fromLocal8Bit("����������������ˣ���Ϊ��͵���˳�����Ӱ")
               };
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
