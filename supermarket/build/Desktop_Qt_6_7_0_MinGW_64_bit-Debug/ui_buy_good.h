/********************************************************************************
** Form generated from reading UI file 'buy_good.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUY_GOOD_H
#define UI_BUY_GOOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buy_good
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *good_name;
    QLineEdit *lineEdit_name;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *good_num;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *def;
    QSpacerItem *horizontalSpacer;
    QPushButton *exit;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *buy_good)
    {
        if (buy_good->objectName().isEmpty())
            buy_good->setObjectName("buy_good");
        buy_good->resize(739, 521);
        buy_good->setStyleSheet(QString::fromUtf8("background-image: url(:/images/bk3.jpg);"));
        verticalLayoutWidget = new QWidget(buy_good);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 741, 521));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(48);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        good_name = new QLabel(verticalLayoutWidget);
        good_name->setObjectName("good_name");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font1.setPointSize(20);
        good_name->setFont(font1);
        good_name->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(good_name);

        lineEdit_name = new QLineEdit(verticalLayoutWidget);
        lineEdit_name->setObjectName("lineEdit_name");

        horizontalLayout->addWidget(lineEdit_name);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        good_num = new QLabel(verticalLayoutWidget);
        good_num->setObjectName("good_num");
        good_num->setFont(font1);
        good_num->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(good_num);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        def = new QPushButton(verticalLayoutWidget);
        def->setObjectName("def");
        def->setFont(font1);

        horizontalLayout_3->addWidget(def);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        exit = new QPushButton(verticalLayoutWidget);
        exit->setObjectName("exit");
        exit->setFont(font1);

        horizontalLayout_3->addWidget(exit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        retranslateUi(buy_good);
        QObject::connect(exit, &QPushButton::clicked, buy_good, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(buy_good);
    } // setupUi

    void retranslateUi(QWidget *buy_good)
    {
        buy_good->setWindowTitle(QCoreApplication::translate("buy_good", "\350\264\255\344\271\260\351\241\265\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("buy_good", "\350\264\255\344\271\260\345\225\206\345\223\201", nullptr));
        good_name->setText(QCoreApplication::translate("buy_good", "\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        good_num->setText(QCoreApplication::translate("buy_good", "\345\225\206\345\223\201\346\225\260\351\207\217\357\274\232", nullptr));
        def->setText(QCoreApplication::translate("buy_good", "\347\241\256\345\256\232", nullptr));
        exit->setText(QCoreApplication::translate("buy_good", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buy_good: public Ui_buy_good {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUY_GOOD_H
