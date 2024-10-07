/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

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

class Ui_signup
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_password_2;
    QLabel *label_id;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *def;
    QSpacerItem *horizontalSpacer;
    QPushButton *back;

    void setupUi(QWidget *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(343, 262);
        signup->setStyleSheet(QString::fromUtf8("background-image: url(:/images/bk3.jpg);"));
        verticalLayoutWidget = new QWidget(signup);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 341, 261));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_password_2 = new QLabel(verticalLayoutWidget);
        label_password_2->setObjectName("label_password_2");
        label_password_2->setFont(font);
        label_password_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_5->addWidget(label_password_2);

        label_id = new QLabel(verticalLayoutWidget);
        label_id->setObjectName("label_id");
        label_id->setFont(font);
        label_id->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_5->addWidget(label_id);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_password = new QLabel(verticalLayoutWidget);
        label_password->setObjectName("label_password");
        label_password->setFont(font);

        horizontalLayout_2->addWidget(label_password);

        lineEdit_password = new QLineEdit(verticalLayoutWidget);
        lineEdit_password->setObjectName("lineEdit_password");

        horizontalLayout_2->addWidget(lineEdit_password);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        def = new QPushButton(verticalLayoutWidget);
        def->setObjectName("def");
        def->setFont(font);

        horizontalLayout->addWidget(def);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        back = new QPushButton(verticalLayoutWidget);
        back->setObjectName("back");
        back->setFont(font);

        horizontalLayout->addWidget(back);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(signup);
        QObject::connect(back, &QPushButton::clicked, signup, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QWidget *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("signup", "\346\263\250\345\206\214", nullptr));
        label_password_2->setText(QCoreApplication::translate("signup", "\344\275\240\347\232\204id\357\274\232", nullptr));
        label_id->setText(QString());
        label_password->setText(QCoreApplication::translate("signup", "\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", nullptr));
        def->setText(QCoreApplication::translate("signup", "\347\241\256\345\256\232", nullptr));
        back->setText(QCoreApplication::translate("signup", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
