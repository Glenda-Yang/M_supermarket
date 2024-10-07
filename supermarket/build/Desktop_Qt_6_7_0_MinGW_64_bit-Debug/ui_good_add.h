/********************************************************************************
** Form generated from reading UI file 'good_add.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOOD_ADD_H
#define UI_GOOD_ADD_H

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

class Ui_good_add
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_name;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_price;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_num;
    QLineEdit *lineEdit_num;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *def;
    QSpacerItem *horizontalSpacer;
    QPushButton *exit;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *good_add)
    {
        if (good_add->objectName().isEmpty())
            good_add->setObjectName("good_add");
        good_add->resize(462, 331);
        good_add->setStyleSheet(QString::fromUtf8("background-image: url(:/images/bk3.jpg);"));
        verticalLayoutWidget = new QWidget(good_add);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 2, 461, 331));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\232\266\344\271\246")});
        font.setPointSize(36);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_name = new QLabel(verticalLayoutWidget);
        label_name->setObjectName("label_name");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font1.setPointSize(14);
        label_name->setFont(font1);
        label_name->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_name);

        lineEdit_name = new QLineEdit(verticalLayoutWidget);
        lineEdit_name->setObjectName("lineEdit_name");

        horizontalLayout->addWidget(lineEdit_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");

        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_5);

        lineEdit_price = new QLineEdit(verticalLayoutWidget);
        lineEdit_price->setObjectName("lineEdit_price");

        horizontalLayout_3->addWidget(lineEdit_price);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_num = new QLabel(verticalLayoutWidget);
        label_num->setObjectName("label_num");
        label_num->setFont(font1);
        label_num->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_4->addWidget(label_num);

        lineEdit_num = new QLineEdit(verticalLayoutWidget);
        lineEdit_num->setObjectName("lineEdit_num");

        horizontalLayout_4->addWidget(lineEdit_num);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        def = new QPushButton(verticalLayoutWidget);
        def->setObjectName("def");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font2.setPointSize(16);
        def->setFont(font2);

        horizontalLayout_5->addWidget(def);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        exit = new QPushButton(verticalLayoutWidget);
        exit->setObjectName("exit");
        exit->setFont(font2);

        horizontalLayout_5->addWidget(exit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(good_add);
        QObject::connect(exit, &QPushButton::clicked, good_add, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(good_add);
    } // setupUi

    void retranslateUi(QWidget *good_add)
    {
        good_add->setWindowTitle(QCoreApplication::translate("good_add", "\345\225\206\345\223\201\344\270\212\346\226\260", nullptr));
        label->setText(QCoreApplication::translate("good_add", "\344\270\212\346\236\266\345\225\206\345\223\201", nullptr));
        label_name->setText(QCoreApplication::translate("good_add", "\345\225\206\345\223\201\345\220\215\345\255\227\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("good_add", "\345\225\206\345\223\201\345\215\225\344\273\267\357\274\232", nullptr));
        label_num->setText(QCoreApplication::translate("good_add", "\344\270\212\346\236\266\346\225\260\347\233\256\357\274\232", nullptr));
        def->setText(QCoreApplication::translate("good_add", "\347\241\256\345\256\232", nullptr));
        exit->setText(QCoreApplication::translate("good_add", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class good_add: public Ui_good_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOD_ADD_H
