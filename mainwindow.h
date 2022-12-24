#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QStandardItemModel>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QDir>
#include <QToolButton>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_btn_add_clicked();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *m_playListModel;
    QMediaPlayer *m_player;
    QMediaPlaylist *m_playlist;
};
#endif // MAINWINDOW_H
