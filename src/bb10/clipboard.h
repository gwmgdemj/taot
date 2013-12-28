/*
 *  The Advanced Online Translator
 *  Copyright (C) 2013  Oleksii Serdiuk <contacts[at]oleksii[dot]name>
 *
 *  $Id: $Format:%h %ai %an$ $
 *
 *  This file is part of The Advanced Online Translator.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CLIPBOARD_H
#define CLIPBOARD_H

#include <QMetaType>
#include <bb/system/Clipboard>

class Clipboard: public bb::system::Clipboard
{
    Q_OBJECT

public:
    Clipboard(QObject *parent = 0);

public slots:
    bool clear();
    bool insert(const QString &type, const QByteArray &data);
};

Q_DECLARE_METATYPE(Clipboard *)

#endif // CLIPBOARD_H
