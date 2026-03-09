// Copyright (C) 2026 Qt Group.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#include "lumbersawcontroller.h"

LumberSawController::LumberSawController(QObject *parent)
    : QObject{parent}
{ }

bool LumberSawController::isWorking() const
{
    return m_isWorking;
}

void LumberSawController::setIsWorking(bool newIsWorking)
{
    if (m_isWorking == newIsWorking)
        return;

    m_isWorking = newIsWorking;
    emit isWorkingChanged();
}

void LumberSawController::start()
{
    setIsWorking(true);
}

void LumberSawController::stop()
{
    setIsWorking(false);
}

int LumberSawController::sawSpeed() const
{
    return m_sawSpeed;
}

void LumberSawController::setSawSpeed(int newSawSpeed)
{
    if (m_sawSpeed == newSawSpeed)
        return;
    m_sawSpeed = newSawSpeed;
    emit sawSpeedChanged();
}
