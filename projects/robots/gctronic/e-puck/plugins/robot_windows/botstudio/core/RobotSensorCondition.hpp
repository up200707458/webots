// Copyright 1996-2024 Cyberbotics Ltd.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*
 * Description:  Abstract class defining a condition over the sensors
 */

#ifndef ROBOT_SENSOR_CONDITION_HPP
#define ROBOT_SENSOR_CONDITION_HPP

#include <QtCore/QString>
#include <QtCore/QStringList>

class RobotSensorCondition {
public:
  virtual ~RobotSensorCondition() {}

  virtual bool isFired() const = 0;
  virtual void fromString(const QString &string) = 0;
  virtual void fromStringVersion3(const QString &string) = 0;  // backward compatibility code
  virtual QString toString() const = 0;
  virtual void reset() = 0;
  virtual void resetSensorsUseNotification() = 0;
};

#endif
