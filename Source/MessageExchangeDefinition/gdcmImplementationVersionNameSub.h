/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/

#ifndef GDCMIMPLEMENTATIONVERSIONNAMESUB_H
#define GDCMIMPLEMENTATIONVERSIONNAMESUB_H

#include "gdcmTypes.h"

namespace gdcm
{

namespace network
{

/**
 * \brief ImplementationVersionNameSub
 * Table D.3-3
 * IMPLEMENTATION VERSION NAME SUB-ITEM FIELDS (A-ASSOCIATE-RQ)
 */
class ImplementationVersionNameSub
{
public:
  ImplementationVersionNameSub();
  std::istream &Read(std::istream &is);
  const std::ostream &Write(std::ostream &os) const;

  size_t Size() const;

private:
  static const uint8_t ItemType;
  static const uint8_t Reserved2;
  uint16_t ItemLength;
  std::string ImplementationVersionName;
};

} // end namespace network

} // end namespace gdcm

#endif //GDCMMAXIMUMLENGTHSUB_H