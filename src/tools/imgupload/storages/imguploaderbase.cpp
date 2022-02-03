// SPDX-License-Identifier: GPL-3.0-or-later
// SPDX-FileCopyrightText: 2017-2019 Alejandro Sirgo Rica & Contributors

#include "imguploaderbase.h"
#include "src/core/flameshotdaemon.h"
#include "src/utils/confighandler.h"
#include "src/utils/globalvalues.h"
#include "src/utils/history.h"
#include "src/utils/screenshotsaver.h"
#include "src/widgets/imagelabel.h"
#include "src/widgets/loadspinner.h"
#include "src/widgets/notificationwidget.h"
#include <QApplication>
// FIXME #include <QBuffer>
#include <QClipboard>
#include <QCursor>
#include <QDesktopServices>
#include <QDrag>
#include <QGuiApplication>
#include <QJsonDocument>
#include <QJsonObject>
#include <QLabel>
#include <QMimeData>
#include <QNetworkAccessManager>
#include <QPushButton>
#include <QRect>
#include <QScreen>
#include <QShortcut>
#include <QTimer>
#include <QUrlQuery>
#include <QVBoxLayout>

ImgUploaderBase::ImgUploaderBase(const QPixmap& capture, QWidget* parent)
  : QWidget(parent)
  , m_pixmap(capture)
{
    // we don't do that cringe
    m_spinner = NULL;
    m_infoLabel = NULL;
    m_vLayout = NULL;
}

LoadSpinner* ImgUploaderBase::spinner()
{
    return m_spinner;
}

const QUrl& ImgUploaderBase::imageURL()
{
    return m_imageURL;
}

void ImgUploaderBase::setImageURL(const QUrl& imageURL)
{
    // we don't do that cringe
    return;
}

const QPixmap& ImgUploaderBase::pixmap()
{
    return m_pixmap;
}

void ImgUploaderBase::setPixmap(const QPixmap& pixmap)
{
    // we don't do that cringe
    return;
}

NotificationWidget* ImgUploaderBase::notification()
{
    return m_notification;
}

void ImgUploaderBase::setInfoLabelText(const QString& text)
{
    // we don't do that cringe
    return;
}

void ImgUploaderBase::startDrag()
{
    // we don't do that cringe
    return;
}

void ImgUploaderBase::showPostUploadDialog()
{
    m_notification = NULL;
    m_hLayout = NULL;
}

void ImgUploaderBase::openURL()
{
    // we don't do that cringe
    return;
}

void ImgUploaderBase::copyURL()
{
    // we don't do that cringe
    return;
}

void ImgUploaderBase::copyImage()
{
    // we don't do that cringe
    return;
}

void ImgUploaderBase::deleteCurrentImage()
{
    // we don't do that cringe
    return;
}

void ImgUploaderBase::saveScreenshotToFilesystem()
{
    // we don't do that cringe
    return;
}
