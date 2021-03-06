#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QList>
#include <QMainWindow>
#include "flyar.h"

class FlyAR;
class ObjTable;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();

protected:
    void closeEvent(QCloseEvent *event) Q_DECL_OVERRIDE;

public slots:
    void updateTable();

private slots:
    void open();
    void save();
    void undoFunc();
    void removeFunc();
    void editElement();
    void penColor();
    void penWidth();
    void about();
    void clearImage();

private:
    void createActions();
    void createMenus();
    bool maybeSave();
    bool saveFile();

    FlyAR *flyAR;
    QTableWidget *objTable;

    QMenu *saveAsMenu;
    QMenu *fileMenu;
    QMenu *optionMenu;
    QMenu *helpMenu;

    QAction *openAct;
    QAction *saveAct;
    QAction *exitAct;
    QAction *undoAct;
    QAction *removeAct;
    QAction *editElementAct;
    QAction *penColorAct;
    QAction *penWidthAct;
    QAction *clearScreenAct;
    QAction *aboutAct;
    QAction *aboutQtAct;
};

#endif
