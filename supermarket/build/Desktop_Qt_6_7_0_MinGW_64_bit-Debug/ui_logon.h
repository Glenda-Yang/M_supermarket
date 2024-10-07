/********************************************************************************
** Form generated from reading UI file 'logon.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGON_H
#define UI_LOGON_H

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

class Ui_Logon
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_id;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *def;
    QSpacerItem *horizontalSpacer;
    QPushButton *back;

    void setupUi(QWidget *Logon)
    {
        if (Logon->objectName().isEmpty())
            Logon->setObjectName("Logon");
        Logon->resize(343, 262);
        Logon->setStyleSheet(QString::fromUtf8("background-image: url(:/images/bk3.jpg);"));
        verticalLayoutWidget = new QWidget(Logon);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 341, 261));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(26);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font1.setPointSize(16);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        lineEdit_id = new QLineEdit(verticalLayoutWidget);
        lineEdit_id->setObjectName("lineEdit_id");

        horizontalLayout->addWidget(lineEdit_id);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_password = new QLineEdit(verticalLayoutWidget);
        lineEdit_password->setObjectName("lineEdit_password");

        horizontalLayout_2->addWidget(lineEdit_password);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        def = new QPushButton(verticalLayoutWidget);
        def->setObjectName("def");
        def->setFont(font1);

        horizontalLayout_3->addWidget(def);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        back = new QPushButton(verticalLayoutWidget);
        back->setObjectName("back");
        back->setFont(font1);

        horizontalLayout_3->addWidget(back);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Logon);
        QObject::connect(back, &QPushButton::clicked, Logon, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Logon);
    } // setupUi

    void retranslateUi(QWidget *Logon)
    {
        Logon->setWindowTitle(QCoreApplication::translate("Logon", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("Logon", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("Logon", "\347\224\250\346\210\267  id\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Logon", "\347\224\250\346\210\267\345\257\206\347\240\201\357\274\232", nullptr));
        def->setText(QCoreApplication::translate("Logon", "\347\241\256\345\256\232", nullptr));
        back->setText(QCoreApplication::translate("Logon", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Logon: public Ui_Logon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGON_H
