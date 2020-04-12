/****************************************************************************//*
 * Copyright (C) 2020 Marek M. Cel
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 ******************************************************************************/

#include <gui/WidgetGDU.h>
#include <ui_WidgetGDU.h>

#include <Defines.h>

////////////////////////////////////////////////////////////////////////////////

WidgetGDU::WidgetGDU( QWidget *parent ) :
    QWidget ( parent ),
    _ui ( new Ui::WidgetGDU )
{
    _ui->setupUi( this );
}

////////////////////////////////////////////////////////////////////////////////

WidgetGDU::~WidgetGDU()
{
    DELPTR( _ui );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::update()
{
    _ui->widgetCGI->update();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::setSceneRoot( osg::Node *sceneRoot )
{
    _ui->widgetCGI->setSceneData( sceneRoot );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKnob_Vol_NAV_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKnob_Vol_COM_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKnob_NAV_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKnob_COM_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKnob_HDG_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKnob_CRS_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKnob_ALT_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKnob_FMS_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKey_NAV_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKey_COM_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKey_AP_AP_clicked()
{
    _ap->onPressedAP();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKey_AP_FD_clicked()
{
    _ap->onPressedFD();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKey_AP_HDG_clicked()
{
    //_ap->onPressedHDG();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKey_AP_ALT_clicked()
{
    _ap->onPressedALT();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKey_AP_NAV_clicked()
{
    //_ap->onPressedNAV();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKey_AP_VNV_clicked()
{
    _ap->onPressedVNV();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKey_AP_APR_clicked()
{
    _ap->onPressedAPR();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKey_AP_BC_clicked()
{
    _ap->onPressedBC();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKey_AP_VS_clicked()
{
    _ap->onPressedVS();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKey_AP_FLC_clicked()
{
    _ap->onPressedFLC();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKey_FMS_DEST_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKey_FMS_MENU_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKey_FMS_FPL_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKey_FMS_PROC_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKey_FMS_CLR_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKey_FMS_ENT_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKeySoft_01_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKeySoft_02_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKeySoft_03_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKeySoft_04_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKeySoft_05_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKeySoft_06_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKeySoft_07_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKeySoft_08_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKeySoft_09_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKeySoft_10_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKeySoft_11_clicked()
{

}

////////////////////////////////////////////////////////////////////////////////

void WidgetGDU::on_buttonKeySoft_12_clicked()
{

}
