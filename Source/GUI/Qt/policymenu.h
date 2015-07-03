/*  Copyright (c) MediaArea.net SARL. All Rights Reserved.
 *
 *  Use of this source code is governed by a GPLv3+/MPLv2+ license that can
 *  be found in the License.html file in the root of the source tree.
 */

#ifndef POLICYMENU_H
#define POLICYMENU_H

//---------------------------------------------------------------------------
#ifdef MEDIAINFO_DLL_RUNTIME
    #include "MediaInfoDLL/MediaInfoDLL.h"
    #define MediaInfoNameSpace MediaInfoDLL
#elif defined MEDIAINFO_DLL_STATIC
    #include "MediaInfoDLL/MediaInfoDLL_Static.h"
    #define MediaInfoNameSpace MediaInfoDLL
#else
    #include "MediaInfo/MediaInfoList.h"
    #define MediaInfoNameSpace MediaInfoLib
#endif
#include <QFrame>
using namespace MediaInfoNameSpace;
using namespace std;

namespace Ui {
class PolicyMenu;
}

class QPushButton;
class QLineEdit;

class PolicyMenu : public QFrame
{
    Q_OBJECT

public:
    explicit PolicyMenu(QWidget *parent = 0);
    ~PolicyMenu();

    
//***************************************************************************
// Functions
//***************************************************************************

//***************************************************************************
// Visual element
//***************************************************************************

    QLineEdit   *get_title_line() const;
    QPushButton *get_addNewGor_button() const;
    QPushButton *get_exportPolicy_button() const;

private:
    Ui::PolicyMenu *ui;

//***************************************************************************
// Slots
//***************************************************************************

private Q_SLOTS:
};

#endif // POLICYMENU_H
