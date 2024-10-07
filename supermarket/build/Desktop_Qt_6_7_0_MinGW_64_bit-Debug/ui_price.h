/********************************************************************************
** Form generated from reading UI file 'price.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRICE_H
#define UI_PRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_price
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;

    void setupUi(QWidget *price)
    {
        if (price->objectName().isEmpty())
            price->setObjectName("price");
        price->resize(312, 230);
        price->setStyleSheet(QString::fromUtf8("background-image: url(:/images/bk1.jpg);"));
        horizontalLayoutWidget = new QWidget(price);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 160, 311, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(18);
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(price);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 301, 151));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font1.setPointSize(24);
        label->setFont(font1);

        retranslateUi(price);
        QObject::connect(pushButton, &QPushButton::clicked, price, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(price);
    } // setupUi

    void retranslateUi(QWidget *price)
    {
        price->setWindowTitle(QCoreApplication::translate("price", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("price", "\347\241\256\345\256\232", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class price: public Ui_price {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRICE_H
