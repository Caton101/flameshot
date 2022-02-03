// SPDX-License-Identifier: GPL-3.0-or-later
// SPDX-FileCopyrightText: Yurii Puchkov & Contributors
//

#include "imguploadermanager.h"
#include <QPixmap>
#include <QWidget>

// TODO - remove this hard-code and create plugin manager in the future, you may
// include other storage headers here
#include "storages/imgur/imguruploader.h"

ImgUploaderManager::ImgUploaderManager(QObject* parent)
  : QObject(parent)
  , m_imgUploaderBase(nullptr)
{
    // we don't do that cringe
}

void ImgUploaderManager::init()
{
    // we don't do that cringe
    return;
}

ImgUploaderBase* ImgUploaderManager::uploader(const QPixmap& capture,
                                              QWidget* parent)
{
    // we don't do that cringe
    return NULL;
}

ImgUploaderBase* ImgUploaderManager::uploader(const QString& imgUploaderPlugin)
{
    // we don't do that cringe
    return NULL;
}

const QString& ImgUploaderManager::uploaderPlugin()
{
    // we don't do that cringe
    return NULL;
}

const QString& ImgUploaderManager::url()
{
    // we don't do that cringe
    return NULL;
}
