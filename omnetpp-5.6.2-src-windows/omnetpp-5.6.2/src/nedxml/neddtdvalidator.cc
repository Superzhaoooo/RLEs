//==========================================================================
// Part of the OMNeT++/OMNEST Discrete Event Simulation System
//
// Generated from ned2.dtd by dtdclassgen.pl
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
#include "neddtdvalidator.h"

namespace omnetpp {
namespace nedxml {

void NedDtdValidator::validateElement(FilesElement *node)
{
    int tags[] = {NED_NED_FILE, NED_NULL};
    char mult[] = {'*', 0};
    utils.checkSequence(node, tags, mult);

}

void NedDtdValidator::validateElement(NedFileElement *node)
{
    Choice choices[] = {
        {{NED_COMMENT, NED_NULL}, '*'},
        {{NED_PACKAGE, NED_IMPORT, NED_PROPERTY_DECL, NED_PROPERTY, NED_SIMPLE_MODULE, NED_COMPOUND_MODULE, NED_MODULE_INTERFACE, NED_CHANNEL, NED_CHANNEL_INTERFACE, NED_NULL}, '*'},
    };
    utils.checkSeqOfChoices(node, choices, sizeof(choices)/sizeof(Choice));

    utils.checkRequiredAttribute(node, "filename");
}

void NedDtdValidator::validateElement(CommentElement *node)
{
    utils.checkEmpty(node);

    utils.checkRequiredAttribute(node, "locid");
    utils.checkNameAttribute(node, "locid");
}

void NedDtdValidator::validateElement(PackageElement *node)
{
    int tags[] = {NED_COMMENT, NED_NULL};
    char mult[] = {'*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
}

void NedDtdValidator::validateElement(ImportElement *node)
{
    int tags[] = {NED_COMMENT, NED_NULL};
    char mult[] = {'*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "import-spec");
}

void NedDtdValidator::validateElement(PropertyDeclElement *node)
{
    int tags[] = {NED_COMMENT,NED_PROPERTY_KEY,NED_PROPERTY, NED_NULL};
    char mult[] = {'*','*','*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
    const char *vals1[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "is-array", vals1, sizeof(vals1)/sizeof(const char *));
}

void NedDtdValidator::validateElement(ExtendsElement *node)
{
    int tags[] = {NED_COMMENT, NED_NULL};
    char mult[] = {'*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
}

void NedDtdValidator::validateElement(InterfaceNameElement *node)
{
    int tags[] = {NED_COMMENT, NED_NULL};
    char mult[] = {'*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
}

void NedDtdValidator::validateElement(SimpleModuleElement *node)
{
    int tags[] = {NED_COMMENT,NED_EXTENDS,NED_INTERFACE_NAME,NED_PARAMETERS,NED_GATES, NED_NULL};
    char mult[] = {'*','?','*','?','?', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
    utils.checkNameAttribute(node, "name");
}

void NedDtdValidator::validateElement(ModuleInterfaceElement *node)
{
    int tags[] = {NED_COMMENT,NED_EXTENDS,NED_PARAMETERS,NED_GATES, NED_NULL};
    char mult[] = {'*','*','?','?', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
    utils.checkNameAttribute(node, "name");
}

void NedDtdValidator::validateElement(CompoundModuleElement *node)
{
    int tags[] = {NED_COMMENT,NED_EXTENDS,NED_INTERFACE_NAME,NED_PARAMETERS,NED_GATES,NED_TYPES,NED_SUBMODULES,NED_CONNECTIONS, NED_NULL};
    char mult[] = {'*','?','*','?','?','?','?','?', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
    utils.checkNameAttribute(node, "name");
}

void NedDtdValidator::validateElement(ChannelInterfaceElement *node)
{
    int tags[] = {NED_COMMENT,NED_EXTENDS,NED_PARAMETERS, NED_NULL};
    char mult[] = {'*','*','?', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
    utils.checkNameAttribute(node, "name");
}

void NedDtdValidator::validateElement(ChannelElement *node)
{
    int tags[] = {NED_COMMENT,NED_EXTENDS,NED_INTERFACE_NAME,NED_PARAMETERS, NED_NULL};
    char mult[] = {'*','?','*','?', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
    utils.checkNameAttribute(node, "name");
}

void NedDtdValidator::validateElement(ParametersElement *node)
{
    Choice choices[] = {
        {{NED_COMMENT, NED_NULL}, '*'},
        {{NED_PROPERTY, NED_PARAM, NED_NULL}, '*'},
    };
    utils.checkSeqOfChoices(node, choices, sizeof(choices)/sizeof(Choice));

    const char *vals0[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "is-implicit", vals0, sizeof(vals0)/sizeof(const char *));
}

void NedDtdValidator::validateElement(ParamElement *node)
{
    int tags[] = {NED_COMMENT,NED_EXPRESSION,NED_PROPERTY, NED_NULL};
    char mult[] = {'*','?','*', 0};
    utils.checkSequence(node, tags, mult);

    const char *vals0[] = {"double","int","string","bool","xml",""};
    utils.checkEnumeratedAttribute(node, "type", vals0, sizeof(vals0)/sizeof(const char *));
    const char *vals1[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "is-volatile", vals1, sizeof(vals1)/sizeof(const char *));
    utils.checkRequiredAttribute(node, "name");
    const char *vals4[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "is-pattern", vals4, sizeof(vals4)/sizeof(const char *));
    const char *vals5[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "is-default", vals5, sizeof(vals5)/sizeof(const char *));
}

void NedDtdValidator::validateElement(PropertyElement *node)
{
    int tags[] = {NED_COMMENT,NED_PROPERTY_KEY, NED_NULL};
    char mult[] = {'*','*', 0};
    utils.checkSequence(node, tags, mult);

    const char *vals0[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "is-implicit", vals0, sizeof(vals0)/sizeof(const char *));
    utils.checkRequiredAttribute(node, "name");
}

void NedDtdValidator::validateElement(PropertyKeyElement *node)
{
    int tags[] = {NED_COMMENT,NED_LITERAL, NED_NULL};
    char mult[] = {'*','*', 0};
    utils.checkSequence(node, tags, mult);

}

void NedDtdValidator::validateElement(GatesElement *node)
{
    int tags[] = {NED_COMMENT,NED_GATE, NED_NULL};
    char mult[] = {'*','*', 0};
    utils.checkSequence(node, tags, mult);

}

void NedDtdValidator::validateElement(GateElement *node)
{
    int tags[] = {NED_COMMENT,NED_EXPRESSION,NED_PROPERTY, NED_NULL};
    char mult[] = {'*','?','*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
    utils.checkNameAttribute(node, "name");
    const char *vals1[] = {"input","output","inout",""};
    utils.checkEnumeratedAttribute(node, "type", vals1, sizeof(vals1)/sizeof(const char *));
    const char *vals2[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "is-vector", vals2, sizeof(vals2)/sizeof(const char *));
}

void NedDtdValidator::validateElement(TypesElement *node)
{
    Choice choices[] = {
        {{NED_COMMENT, NED_NULL}, '*'},
        {{NED_CHANNEL, NED_CHANNEL_INTERFACE, NED_SIMPLE_MODULE, NED_COMPOUND_MODULE, NED_MODULE_INTERFACE, NED_NULL}, '*'},
    };
    utils.checkSeqOfChoices(node, choices, sizeof(choices)/sizeof(Choice));

}

void NedDtdValidator::validateElement(SubmodulesElement *node)
{
    int tags[] = {NED_COMMENT,NED_SUBMODULE, NED_NULL};
    char mult[] = {'*','*', 0};
    utils.checkSequence(node, tags, mult);

}

void NedDtdValidator::validateElement(SubmoduleElement *node)
{
    int tags[] = {NED_COMMENT,NED_EXPRESSION,NED_CONDITION,NED_PARAMETERS,NED_GATES, NED_NULL};
    char mult[] = {'*','*','?','?','?', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "name");
    utils.checkNameAttribute(node, "name");
    const char *vals4[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "is-default", vals4, sizeof(vals4)/sizeof(const char *));
}

void NedDtdValidator::validateElement(ConnectionsElement *node)
{
    Choice choices[] = {
        {{NED_COMMENT, NED_NULL}, '*'},
        {{NED_CONNECTION, NED_CONNECTION_GROUP, NED_NULL}, '*'},
    };
    utils.checkSeqOfChoices(node, choices, sizeof(choices)/sizeof(Choice));

    const char *vals0[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "allow-unconnected", vals0, sizeof(vals0)/sizeof(const char *));
}

void NedDtdValidator::validateElement(ConnectionElement *node)
{
    Choice choices[] = {
        {{NED_COMMENT, NED_NULL}, '*'},
        {{NED_EXPRESSION, NED_NULL}, '*'},
        {{NED_PARAMETERS, NED_NULL}, '?'},
        {{NED_LOOP, NED_CONDITION, NED_NULL}, '*'},
    };
    utils.checkSeqOfChoices(node, choices, sizeof(choices)/sizeof(Choice));

    utils.checkNameAttribute(node, "src-module");
    utils.checkRequiredAttribute(node, "src-gate");
    utils.checkNameAttribute(node, "src-gate");
    const char *vals3[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "src-gate-plusplus", vals3, sizeof(vals3)/sizeof(const char *));
    const char *vals5[] = {"i","o",""};
    utils.checkEnumeratedAttribute(node, "src-gate-subg", vals5, sizeof(vals5)/sizeof(const char *));
    utils.checkNameAttribute(node, "dest-module");
    utils.checkRequiredAttribute(node, "dest-gate");
    utils.checkNameAttribute(node, "dest-gate");
    const char *vals9[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "dest-gate-plusplus", vals9, sizeof(vals9)/sizeof(const char *));
    const char *vals11[] = {"i","o",""};
    utils.checkEnumeratedAttribute(node, "dest-gate-subg", vals11, sizeof(vals11)/sizeof(const char *));
    utils.checkNameAttribute(node, "name");
    const char *vals16[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "is-default", vals16, sizeof(vals16)/sizeof(const char *));
    const char *vals17[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "is-bidirectional", vals17, sizeof(vals17)/sizeof(const char *));
    const char *vals18[] = {"true","false"};
    utils.checkEnumeratedAttribute(node, "is-forward-arrow", vals18, sizeof(vals18)/sizeof(const char *));
}

void NedDtdValidator::validateElement(ConnectionGroupElement *node)
{
    Choice choices[] = {
        {{NED_COMMENT, NED_NULL}, '*'},
        {{NED_LOOP, NED_CONDITION, NED_NULL}, '*'},
        {{NED_CONNECTION, NED_NULL}, '*'},
    };
    utils.checkSeqOfChoices(node, choices, sizeof(choices)/sizeof(Choice));

}

void NedDtdValidator::validateElement(LoopElement *node)
{
    int tags[] = {NED_COMMENT,NED_EXPRESSION, NED_NULL};
    char mult[] = {'*','*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "param-name");
    utils.checkNameAttribute(node, "param-name");
}

void NedDtdValidator::validateElement(ConditionElement *node)
{
    int tags[] = {NED_COMMENT,NED_EXPRESSION, NED_NULL};
    char mult[] = {'*','?', 0};
    utils.checkSequence(node, tags, mult);

}

void NedDtdValidator::validateElement(ExpressionElement *node)
{
    Choice choices[] = {
        {{NED_COMMENT, NED_NULL}, '*'},
        {{NED_OPERATOR, NED_FUNCTION, NED_IDENT, NED_LITERAL, NED_NULL}, '1'},
    };
    utils.checkSeqOfChoices(node, choices, sizeof(choices)/sizeof(Choice));

}

void NedDtdValidator::validateElement(OperatorElement *node)
{
    Choice choices[] = {
        {{NED_COMMENT, NED_NULL}, '*'},
        {{NED_OPERATOR, NED_FUNCTION, NED_IDENT, NED_LITERAL, NED_NULL}, '+'},
    };
    utils.checkSeqOfChoices(node, choices, sizeof(choices)/sizeof(Choice));

    utils.checkRequiredAttribute(node, "name");
}

void NedDtdValidator::validateElement(FunctionElement *node)
{
    Choice choices[] = {
        {{NED_COMMENT, NED_NULL}, '*'},
        {{NED_OPERATOR, NED_FUNCTION, NED_IDENT, NED_LITERAL, NED_NULL}, '*'},
    };
    utils.checkSeqOfChoices(node, choices, sizeof(choices)/sizeof(Choice));

    utils.checkRequiredAttribute(node, "name");
    utils.checkNameAttribute(node, "name");
}

void NedDtdValidator::validateElement(IdentElement *node)
{
    Choice choices[] = {
        {{NED_COMMENT, NED_NULL}, '*'},
        {{NED_OPERATOR, NED_FUNCTION, NED_IDENT, NED_LITERAL, NED_NULL}, '?'},
    };
    utils.checkSeqOfChoices(node, choices, sizeof(choices)/sizeof(Choice));

    utils.checkRequiredAttribute(node, "name");
    utils.checkNameAttribute(node, "name");
}

void NedDtdValidator::validateElement(LiteralElement *node)
{
    int tags[] = {NED_COMMENT, NED_NULL};
    char mult[] = {'*', 0};
    utils.checkSequence(node, tags, mult);

    utils.checkRequiredAttribute(node, "type");
    const char *vals0[] = {"double","quantity","int","bool","string","spec"};
    utils.checkEnumeratedAttribute(node, "type", vals0, sizeof(vals0)/sizeof(const char *));
}

void NedDtdValidator::validateElement(UnknownElement *node)
{
    // ANY

    utils.checkRequiredAttribute(node, "element");
}

} // namespace nedxml
} // namespace omnetpp

