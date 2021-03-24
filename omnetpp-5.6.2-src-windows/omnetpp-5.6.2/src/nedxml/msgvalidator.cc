//==========================================================================
// Part of the OMNeT++/OMNEST Discrete Event Simulation System
//
// Generated from msg2.dtd by dtdclassgen.pl
//
//==========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 2002-2017 Andras Varga

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

//
// THIS IS A GENERATED FILE, DO NOT EDIT!
//


#include <cstdio>
#include "errorstore.h"
#include "exception.h"
#include "msgvalidator.h"

namespace omnetpp {
namespace nedxml {
void  MsgValidatorBase::validate(ASTNode *node)
{
    validateElement(node);
    for (ASTNode *child=node->getFirstChild(); child; child=child->getNextSibling())
        validate(child);
}

void  MsgValidatorBase::validateElement(ASTNode *node)
{
    try {
        switch (node->getTagCode()) {
            case MSG_FILES: validateElement(static_cast<FilesElement *>(node)); break;
            case MSG_MSG_FILE: validateElement(static_cast<MsgFileElement *>(node)); break;
            case MSG_COMMENT: validateElement(static_cast<CommentElement *>(node)); break;
            case MSG_IMPORT: validateElement(static_cast<ImportElement *>(node)); break;
            case MSG_PROPERTY: validateElement(static_cast<PropertyElement *>(node)); break;
            case MSG_PROPERTY_KEY: validateElement(static_cast<PropertyKeyElement *>(node)); break;
            case MSG_LITERAL: validateElement(static_cast<LiteralElement *>(node)); break;
            case MSG_NAMESPACE: validateElement(static_cast<NamespaceElement *>(node)); break;
            case MSG_CPLUSPLUS: validateElement(static_cast<CplusplusElement *>(node)); break;
            case MSG_STRUCT_DECL: validateElement(static_cast<StructDeclElement *>(node)); break;
            case MSG_CLASS_DECL: validateElement(static_cast<ClassDeclElement *>(node)); break;
            case MSG_MESSAGE_DECL: validateElement(static_cast<MessageDeclElement *>(node)); break;
            case MSG_PACKET_DECL: validateElement(static_cast<PacketDeclElement *>(node)); break;
            case MSG_ENUM_DECL: validateElement(static_cast<EnumDeclElement *>(node)); break;
            case MSG_ENUM: validateElement(static_cast<EnumElement *>(node)); break;
            case MSG_ENUM_FIELD: validateElement(static_cast<EnumFieldElement *>(node)); break;
            case MSG_MESSAGE: validateElement(static_cast<MessageElement *>(node)); break;
            case MSG_PACKET: validateElement(static_cast<PacketElement *>(node)); break;
            case MSG_CLASS: validateElement(static_cast<ClassElement *>(node)); break;
            case MSG_STRUCT: validateElement(static_cast<StructElement *>(node)); break;
            case MSG_FIELD: validateElement(static_cast<FieldElement *>(node)); break;
            case MSG_UNKNOWN: validateElement(static_cast<UnknownElement *>(node)); break;
            default: INTERNAL_ERROR1(node,"validateElement(): unknown tag '%s'", node->getTagName());
        }
    }
    catch (NedException& e)
    {
        INTERNAL_ERROR1(node,"validateElement(): NedException: %s", e.what());
    }
}

} // namespace nedxml
} // namespace omnetpp

