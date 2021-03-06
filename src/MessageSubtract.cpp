/*
 *  Copyright 2009,2010,2011 Reality Jockey, Ltd.
 *                 info@rjdj.me
 *                 http://rjdj.me/
 *
 *  This file is part of ZenGarden.
 *
 *  ZenGarden is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  ZenGarden is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with ZenGarden.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "MessageSubtract.h"

MessageObject *MessageSubtract::newObject(PdMessage *initMessage, PdGraph *graph) {
  return new MessageSubtract(initMessage, graph);
}

MessageSubtract::MessageSubtract(PdMessage *initMessage, PdGraph *graph) : MessageObject(2, 1, graph) {
  constant = initMessage->isFloat(0) ? initMessage->getFloat(0) : 0.0f;
}

MessageSubtract::~MessageSubtract() {
  // nothing to do
}

string MessageSubtract::toString() {
  char str[snprintf(NULL, 0, "- %g", constant)+1];
  snprintf(str, sizeof(str), "- %g", constant);
  return string(str);
}

void MessageSubtract::processMessage(int inletIndex, PdMessage *message) {
  switch (inletIndex) {
    case 0: {
      if (message->isFloat(0)) {
        PdMessage *outgoingMessage = PD_MESSAGE_ON_STACK(1);
        outgoingMessage->initWithTimestampAndFloat(message->getTimestamp(), message->getFloat(0)-constant);
        sendMessage(0, outgoingMessage);
      }
      break;
    }
    case 1: {
      if (message->isFloat(0)) {
        constant = message->getFloat(0);
      }
      break;
    }
    default: {
      break;
    }
  }
}
