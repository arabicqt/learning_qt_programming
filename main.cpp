# include <QApplication>
# include <QWidget>
# include <QPushButton>

int main ( int argc , char **argv )
{
    QApplication app ( argc , argv ) ;
    
    QWidget wid , empty_wid ;
    
    wid.setWindowTitle ( "widget with an exit button ") ;
    
    QPushButton btn ( &wid ) ;
    
    btn.setText("&Exit");
    
    QObject :: connect ( &btn , SIGNAL ( clicked () ) , &wid , SLOT ( close () ) ) ;
    
    empty_wid.setWindowTitle ( "An empty widget" ) ;
    empty_wid.show () ;
    
    wid.setMinimumSize ( 500 , 500 ) ;
    wid.show () ;
    
    app.exec () ;
}
