#ifndef JOKEDIALOG_H
#define JOKEDIALOG_H

#include <QDialog>
#include <QClipboard>

QT_BEGIN_NAMESPACE
namespace Ui { class JokeDialog; }
QT_END_NAMESPACE

class JokeDialog : public QDialog
{
    Q_OBJECT

public:
    JokeDialog(QWidget *parent = nullptr);
    ~JokeDialog();

private slots:
    void on_pushButton_released();
    void getjoke();

private:
    Ui::JokeDialog *ui;
    QVector<QString> jokelist;
};
#endif // JOKEDIALOG_H
