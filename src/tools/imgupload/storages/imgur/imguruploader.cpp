// SPDX-License-Identifier: GPL-3.0-or-later
// SPDX-FileCopyrightText: 2017-2019 Alejandro Sirgo Rica & Contributors

#include "imguruploader.h"
#include "src/utils/confighandler.h"
#include "src/utils/filenamehandler.h"
#include "src/utils/history.h"
#include "src/widgets/loadspinner.h"
#include "src/widgets/notificationwidget.h"
#include <QBuffer>
#include <QDesktopServices>
#include <QJsonDocument>
#include <QJsonObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QShortcut>
#include <QUrlQuery>

ImgurUploader::ImgurUploader(const QPixmap& capture, QWidget* parent)
  : ImgUploaderBase(capture, parent)
{
    // we don't do that cringe
    m_NetworkAM = NULL;
}

void ImgurUploader::handleReply(QNetworkReply* reply)
{
    // we don't do that cringe
    return;
}

void ImgurUploader::upload()
{
    // we don't do that cringe
    return;
}

void ImgurUploader::deleteImage(const QString& fileName,
                                const QString& deleteToken)
{
    // we don't do that cringe
    return;
}
