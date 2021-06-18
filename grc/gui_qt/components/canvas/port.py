"""
Copyright 2007, 2008, 2009 Free Software Foundation, Inc.
This file is part of GNU Radio

SPDX-License-Identifier: GPL-2.0-or-later

"""


import math

from PyQt5 import QtGui, QtCore, QtWidgets
from PyQt5.QtCore import Qt

from ....core.utils.descriptors import nop_write
from ....core.ports import Port as CorePort


class Port(QtWidgets.QGraphicsItem, CorePort):
    """The graphical port."""

    @classmethod
    def make_cls_with_base(cls, super_cls):
        name = super_cls.__name__
        bases = (super_cls,) + cls.__bases__[:-1]
        namespace = cls.__dict__.copy()
        return type(name, bases, namespace)

    def __init__(self, parent, direction, **n):
        """
        Port constructor.
        Create list of connector coordinates.
        """
        CorePort.__init__(self, parent, direction, **n)
        QtWidgets.QGraphicsItem.__init__(self, parent)
        self.y_offset = 0
        self.setZValue(100)
        if self._dir == "sink":
            self.setPos(-15, 0)
        else:
            self.setPos(parent.width, 0)

        self.setFlag(QtWidgets.QGraphicsItem.ItemSendsScenePositionChanges)

    def _update_colors(self):
        """
        Get the color that represents this port's type.
        Codes differ for ports where the vec length is 1 or greater than 1.

        Returns:
            a hex color code.
        """
        pass

    def itemChange(self, change, value):
        for conn in self.connections():
            conn.updateLine()
        return QtWidgets.QGraphicsLineItem.itemChange(self, change, value)

    def create_shapes(self):
        """Create new areas and labels for the port."""
        pass

    def create_labels(self, cr=None):
        """Create the labels for the socket."""
        pass

    def boundingRect(self):
        x, y = tuple(self.parent.states['coordinate'])
        return QtCore.QRectF(0, 0, 15, 15) # same as the rectangle we draw, but with a 0.5*pen width margin

    def paint(self, painter, option, widget):
        """
        Draw the socket with a label.
        """
        x, y = tuple(self.parent.states['coordinate'])
        pen = QtGui.QPen(1)
        painter.setPen(pen)
        painter.setBrush(QtGui.QBrush(QtGui.QColor(0x03, 0xFC, 0xF8)))

        rect = QtCore.QRectF(0, 0, 15, 15) # same as the rectangle we draw, but with a 0.5*pen width margin
        painter.drawRect(rect)

