/**
 ******************************************************************************
 *
 * @file       uploaderplugin.cpp
 * @author     dRonin, http://dRonin.org/, Copyright (C) 2015
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2014
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup  Uploader Uploader Plugin
 * @{
 * @brief The Tau Labs uploader plugin
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>
 */
#include "uploaderplugin.h"
#include "uploadergadgetfactory.h"
#include <QtPlugin>
#include <QStringList>
#include <extensionsystem/pluginmanager.h>
#include <QTest>
UploaderPlugin::UploaderPlugin()
{
    // Do nothing
}

UploaderPlugin::~UploaderPlugin()
{
    // Do nothing
}

bool UploaderPlugin::initialize(const QStringList &args, QString *errMsg)
{
    Q_UNUSED(args);
    Q_UNUSED(errMsg);
    mf = new UploaderGadgetFactory(this);
    addAutoReleasedObject(mf);
    return true;
}

void UploaderPlugin::extensionsInitialized()
{
    // Do nothing
}

void UploaderPlugin::shutdown()
{
    // Do nothing
}

void UploaderPlugin::testStuff()
{
    QCOMPARE(QString("hello").toUpper(), QString("HELLO"));
}
