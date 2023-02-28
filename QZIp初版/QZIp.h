#pragma once
#include <qstring.h>

#include <QtWidgets/QWidget>
#include "ui_QZIp.h"

#include <private/qzipreader_p.h>
#include <private/qzipwriter_p.h>

#include <qfile.h>
#include <qstring.h>
#include <qstringlist.h>

class QZIp : public QWidget
{
    Q_OBJECT

public:
    QZIp(QWidget *parent = nullptr);
    ~QZIp();

	void CreatZipFile(const QString &dirpath);
	void DirToZip(QZipWriter *writer,const QString& dirPath, QString SavePath);
	void ZipToDir(QString ZipPath);

private:
    Ui::QZIpClass ui;
};
