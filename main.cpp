#include <QApplication>
#include <QPushButton>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QIcon>
#include <QSize>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPushButton* bottone = new QPushButton("Premimi");
    bottone->setIcon(QIcon(":/chiudi3.png"));
    bottone->setIconSize(QSize(100,100));
    bottone->show();

    // QMediaPlayer con WAV o MP3
    QMediaPlayer* player = new QMediaPlayer(&a);
    QAudioOutput* audioOutput = new QAudioOutput(&a);
    player->setAudioOutput(audioOutput);
    audioOutput->setVolume(0.5);

    // File incluso nelle risorse Qt
    player->setSource(QUrl("qrc:/musica8.mp3"));
    player->play();

    return a.exec();
}
