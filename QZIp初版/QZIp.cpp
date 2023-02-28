#include "QZIp.h"
#include <qdir.h>
#include <qdebug.h>


QZIp::QZIp(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
 
	CreatZipFile("E:\\A_Demo\\QtObject\\2023_1_31QZip\\QZIp");
   
}

QZIp::~QZIp()
{}

void QZIp::CreatZipFile(const QString & dirpath)
{
	//压缩包路径
	QString YSBPath = dirpath + ".zip";
	QZipWriter *writer = new QZipWriter(YSBPath);
	DirToZip(writer, dirpath, dirpath);
	delete writer;
}
//dirPath：需要压缩的目录。SavePath：压缩到的路径；
void QZIp::DirToZip(QZipWriter * writer, const QString & dirPath, QString SavePath)
{
	QDir dir(dirPath);
	foreach(QFileInfo info, dir.entryInfoList())
	{
		if (info.fileName() == "." || info.fileName() == "..")
			continue;
		if (info.isFile())
		{
			QFile upfile(info.filePath());
			upfile.open(QIODevice::ReadOnly);
			QString fileName = info.filePath().mid(SavePath.size() + 1, info.filePath().size());
			writer->addFile(fileName, upfile.readAll());
			qDebug() << fileName << dirPath << SavePath;
			upfile.close();
		}
		else if (info.isDir())
		{
			DirToZip(writer, info.filePath(), SavePath);
		}
	}
}

void QZIp::ZipToDir(QString zippath)
{
	QString savepath = zippath.left(zippath.size() - 4);
	QDir dir(savepath);
	if (!dir.exists())
	{
		dir.mkdir(savepath);
	}

	QZipReader zipreader(zippath);
	qDebug() << "zippath:" << zippath;
	//reader.extractAll(path); // //可加可不加没有什么影响

	for (int i = 0; i < zipreader.fileInfoList().size(); ++i)
	{
		QStringList paths = zipreader.fileInfoList().at(i).filePath.split("/");
		paths.removeLast();

		QString path = paths.join("/");
		QDir subdir(savepath + "/" + path);

		if (!subdir.exists())
		{
			dir.mkpath(QString::fromLocal8Bit("%1").arg(savepath + "/" + path));
		}

		QFile file(savepath + "/" + zipreader.fileInfoList().at(i).filePath);
		file.open(QIODevice::WriteOnly);

		QByteArray dt = zipreader.fileInfoList().at(i).filePath.toUtf8();
		QString strtemp = QString::fromLocal8Bit(dt);

		QByteArray array = zipreader.fileData(strtemp);
		file.write(array);
		file.close();
	}
	zipreader.close();
}




      