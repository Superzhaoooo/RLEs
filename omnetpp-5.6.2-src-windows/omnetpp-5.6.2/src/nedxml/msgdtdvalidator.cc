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


#include <stdio.h>
#include "errorstore.h"
#include "msgdtdvalidator.h"

namespace omnetpp {
namespace nedxml {

void MsgDtdValidator::validateElement(FilesElement *node)
{
    int tags[] = {MSG_MSG_FILE, NED_NULL};
    char mult[] = {'*', 0};
    utils.checkSequence(node, tags, mult);

}

void MsgDtdValidator::validateElement(MsgFileElement *node)
{
    Choice choices[] = {
        {{MSG_COMMENT, NED_NULL}, '*'},
        {{MSG_NAMESPACE, MSG_PROPERTY, MSG_CPLUSPLUS, MSG_IMPORT, MSG_STRUCT_DECL, MSG_CLASS_DECL, MSG_MESSAGE_DECL, MSG_PACKET_DECL, MSG_ENUM_DECL, MSG_STRUCT, MSG_CLASS, MSG_MESSAGE, MSG_PACKET, MSG_ENUM, NED_NULL}, '*'},
    };
    utils.checkSeqOfChoices(node, choices, sizeof(choices)/sizeof(Choice));

}

void MsgDtdValidator::validateElement(CommentElement *node)
{
    utils.checkEmpty(node);

    utils.checkRequiredAttribute(node, "locid");
    utils.checkNameAttribute(node, "locid");
}

void MsgDtdValidator::validateElement(ImportElement *node)
{
    int tags[] = {MSG_COMMENT, NED_NULL};
    char mult[] = {'*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "import-spec");
}

void MsgDtdValidator::validateElement(PropertyElement *node)
{
    int tags[] = {MSG_COMMENT,MSG_PROPERTY_KEY, NED_NULL};
    char mult[] = {'*','*', 0};
    utils.checkSequence(node, tags, mult);

    const char *vals0[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "is-implicit", vals0, sizeof(vals0)/sizeof(const char *));
    utils.checkRequiredAttribute(node, "name");
}

void MsgDtdValidator::validateElement(PropertyKeyElement *node)
{
    int tags[] = {MSG_COMMENT,MSG_LITERAL, NED_NULL};
    char mult[] = {'*','*', 0};
    utils.checkSequence(node, tags, mult);

}

void MsgDtdValidator::validateElement(LiteralElement *node)
{
    int tags[] = {MSG_COMMENT, NED_NULL};
    char mult[] = {'*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "type");
    const char *vals0[] = {"double","quantity","int","bool","string","spec"};
    utils.checkEnumeratedAttribute(node, "type", vals0, sizeof(vals0)/sizeof(const char *));
}

void MsgDtdValidator::validateElement(NamespaceElement *node)
{
    int tags[] = {MSG_COMMENT, NED_NULL};
    char mult[] = {'*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
}

void MsgDtdValidator::validateElement(CplusplusElement *node)
{
    int tags[] = {MSG_COMMENT, NED_NULL};
    char mult[] = {'*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "body");
}

void MsgDtdValidator::validateElement(StructDeclElement *node)
{
    int tags[] = {MSG_COMMENT, NED_NULL};
    char mult[] = {'*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
}

void MsgDtdValidator::validateElement(ClassDeclElement *node)
{
    int tags[] = {MSG_COMMENT, NED_NULL};
    char mult[] = {'*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
    const char *vals1[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "is-cobject", vals1, sizeof(vals1)/sizeof(const char *));
}

void MsgDtdValidator::validateElement(MessageDeclElement *node)
{
    int tags[] = {MSG_COMMENT, NED_NULL};
    char mult[] = {'*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
}

void MsgDtdValidator::validateElement(PacketDeclElement *node)
{
    int tags[] = {MSG_COMMENT, NED_NULL};
    char mult[] = {'*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
}

void MsgDtdValidator::validateElement(EnumDeclElement *node)
{
    int tags[] = {MSG_COMMENT, NED_NULL};
    char mult[] = {'*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
}

void MsgDtdValidator::validateElement(EnumElement *node)
{
    int tags[] = {MSG_COMMENT,MSG_ENUM_FIELD, NED_NULL};
    char mult[] = {'*','*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
}

void MsgDtdValidator::validateElement(EnumFieldElement *node)
{
    int tags[] = {MSG_COMMENT, NED_NULL};
    char mult[] = {'*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
    utils.checkNameAttribute(node, "name");
}

void MsgDtdValidator::validateElement(MessageElement *node)
{
    Choice choices[] = {
        {{MSG_COMMENT, NED_NULL}, '*'},
        {{MSG_PROPERTY, MSG_FIELD, NED_NULL}, '*'},
    };
    utils.checkSeqOfChoices(node, choices, sizeof(choices)/sizeof(Choice));

    utils.checkRequiredAttribute(node, "name");
}

void MsgDtdValidator::validateElement(PacketElement *node)
{
    Choice choices[] = {
        {{MSG_COMMENT, NED_NULL}, '*'},
        {{MSG_PROPERTY, MSG_FIELD, NED_NULL}, '*'},
    };
    utils.checkSeqOfChoices(node, choices, sizeof(choices)/sizeof(Choice));

    utils.checkRequiredAttribute(node, "name");
}

void MsgDtdValidator::validateElement(ClassElement *node)
{
    Choice choices[] = {
        {{MSG_COMMENT, NED_NULL}, '*'},
        {{MSG_PROPERTY, MSG_FIELD, NED_NULL}, '*'},
    };
    utils.checkSeqOfChoices(node, choices, sizeof(choices)/sizeof(Choice));

    utils.checkRequiredAttribute(node, "name");
}

void MsgDtdValidator::validateElement(StructElement *node)
{
    Choice choices[] = {
        {{MSG_COMMENT, NED_NULL}, '*'},
        {{MSG_PROPERTY, MSG_FIELD, NED_NULL}, '*'},
    };
    utils.checkSeqOfChoices(node, choices, sizeof(choices)/sizeof(Choice));

    utils.checkRequiredAttribute(node, "name");
}

void MsgDtdValidator::validateElement(FieldElement *node)
{
    int tags[] = {MSG_COMMENT,MSG_PROPERTY, NED_NULL};
    char mult[] = {'*','*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
    utils.checkNameAttribute(node, "name");
    const char *vals2[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "is-abstract", vals2, sizeof(vals2)/sizeof(const char *));
    const char *vals3[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "is-const", vals3, sizeof(vals3)/sizeof(const char *));
    const char *vals4[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "is-pointer", vals4, sizeof(vals4)/sizeof(const char *));
    const char *vals5[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "is-vector", vals5, sizeof(vals5)/sizeof(const char *));
}

void MsgDtdValidator::validateElement(UnknownElement *node)
{
    // ANY

    utils.checkRequiredAttribute(node, "element");
}

} // namespace nedxml
} // namespace omnetpp

