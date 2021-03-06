/**
 ******************************************************************************
 *
 * @file       configgadget.h
 * @author     dRonin, http://dRonin.org/, Copyright (C) 2016
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup ConfigPlugin Config Plugin
 * @{
 * @brief The Configuration Gadget used to update settings in the firmware
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
 *
 * Additional note on redistribution: The copyright and license notices above
 * must be maintained in each individual source file that is a derivative work
 * of this source file; otherwise redistribution is prohibited.
 */
#ifndef CONFIGGADGET_H
#define CONFIGGADGET_H

#include <coreplugin/iuavgadget.h>
#include "uavobjectwidgetutils/configtaskwidget.h"
#include "extensionsystem/pluginmanager.h"
#include <QWidget>
#include <QTimer>

class IUAVGadget;
// class QList<int>;
class QWidget;
class QString;
class ConfigGadgetWidget;
class Ui_ConfigGadget;

using namespace Core;

class ConfigGadget : public Core::IUAVGadget
{
    Q_OBJECT
public:
    ConfigGadget(QString classId, ConfigGadgetWidget *widget, QWidget *parent = 0);
    ~ConfigGadget();

    QWidget *widget() { return (QWidget *)m_widget; }
    void loadConfiguration(IUAVGadgetConfiguration *config);

private:
    ConfigGadgetWidget *m_widget;
};

#endif // CONFIGGADGET_H
