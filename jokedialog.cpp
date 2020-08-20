#include "jokedialog.h"
#include "ui_jokedialog.h"
#include <random>


JokeDialog::JokeDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::JokeDialog)
{
    ui->setupUi(this);
    jokelist = {QString::fromLocal8Bit("阿笠博士在做博士之前是什么？阿笠硕士。"),
                QString::fromLocal8Bit("辽宁是中国最推崇ins风的地方。“介银你ins不？”“ins”"),
                QString::fromLocal8Bit("孩子问妈妈：“为什么蜡烛火苗一窜一窜的” 妈妈说：“因为这是精神小火”"),
                QString::fromLocal8Bit("想要一份咖喱猪扒饭 不要咖喱 不要猪 不要饭 给爷爬"),
                QString::fromLocal8Bit("花木兰替父从军，有一天她很想念妈妈，就在营帐里用针在布上绣出妈妈的模样。一个士兵见了就对花木兰说：秀你妈呢"),
                QString::fromLocal8Bit("龙妈妈把龙宝宝骂了，因为他偷看了成龙电影")
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
