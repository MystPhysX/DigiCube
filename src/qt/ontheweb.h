#ifndef ONTHEWEB_H
#define ONTHEWEB_H

#include <QWidget>

namespace Ui {
	class Ontheweb;
}
class WalletModel;

class Ontheweb : public QWidget
{
    Q_OBJECT

public:
    explicit Ontheweb(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Ontheweb();    


private:
	Ui::Ontheweb *ui;
    WalletModel *model;
};

#endif // ONTHEWEB_H