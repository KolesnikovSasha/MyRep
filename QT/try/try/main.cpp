#include <QApplication>
#include <QLabel>

int main(int argc,char *argv[]){
  QApplication qap(argc,argv);
  QLabel qlab("<h3>Hello world!</h3>");
  qlab.show();
  return qap.exec();
}
