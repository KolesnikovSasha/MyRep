#include <QApplication>
#include <QLabel>

int main(int argc,char *argv[]){
  QApplication qap(argc,argv);
  QLabel qlab("Hello world!");
  qlab.show();
  return qap.exec();
}
