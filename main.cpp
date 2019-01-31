#include <QtWidgets>

int main(int argc, char** argv) {
  QApplication app(argc, argv);

  // QWidget wgt         = QWidget();
  QWidget               wgt;
  QVBoxLayout* vbox   = new QVBoxLayout;
  QHBoxLayout* hbox_1 = new QHBoxLayout;
  QHBoxLayout* hbox_2 = new QHBoxLayout;

  QPushButton* btn    = new QPushButton("&Добавить книгу");
  QLineEdit* edit_1   = new QLineEdit;
  QLineEdit* edit_2   = new QLineEdit;
  QLabel* lbl_1       = new QLabel("Название");
  QLabel* lbl_2       = new QLabel("Автор");

  hbox_1->addWidget(lbl_1);
  hbox_1->addWidget(edit_1);
  hbox_2->addWidget(lbl_2);
  hbox_2->addWidget(edit_2);
  vbox->addLayout(hbox_1);
  vbox->addLayout(hbox_2);
  vbox->addWidget(btn);

  wgt.setLayout(vbox);
  wgt.show();

  return app.exec();
}
