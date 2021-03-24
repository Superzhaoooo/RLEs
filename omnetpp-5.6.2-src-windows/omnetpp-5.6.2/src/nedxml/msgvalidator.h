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


#ifndef __OMNETPP_NEDXML_MSGVALIDATOR_H
#define __OMNETPP_NEDXML_MSGVALIDATOR_H

#include "errorstore.h"
#include "exception.h"
#include "msgelements.h"

namespace omnetpp {
namespace nedxml {

/**
 *  GENERATED CLASS. Abtract base class for MSG validators.
 *
 * @ingroup Validation
 */
class NEDXML_API MsgValidatorBase
{
  protected:
    ErrorStore *errors;
  public:
    /** @name Constructor, destructor */
    //@{
    MsgValidatorBase(ErrorStore *e) {errors = e;}
    virtual ~MsgValidatorBase() {}
    //@}

    /** Validates the node recursively */
    virtual void validate(ASTNode *node);
    /** Dispatches to the corresponding overloaded validateElement() function */
    virtual void validateElement(ASTNode *node);

  protected:
    /** @name Validation functions, to be implemented in subclasses */
    //@{
    virtual void validateElement(FilesElement *node) = 0;
    virtual void validateElement(MsgFileElement *node) = 0;
    virtual void validateElement(CommentElement *node) = 0;
    virtual void validateElement(ImportElement *node) = 0;
    virtual void validateElement(PropertyElement *node) = 0;
    virtual void validateElement(PropertyKeyElement *node) = 0;
    virtual void validateElement(LiteralElement *node) = 0;
    virtual void validateElement(NamespaceElement *node) = 0;
    virtual void validateElement(CplusplusElement *node) = 0;
    virtual void validateElement(StructDeclElement *node) = 0;
    virtual void validateElement(ClassDeclElement *node) = 0;
    virtual void validateElement(MessageDeclElement *node) = 0;
    virtual void validateElement(PacketDeclElement *node) = 0;
    virtual void validateElement(EnumDeclElement *node) = 0;
    virtual void validateElement(EnumElement *node) = 0;
    virtual void validateElement(EnumFieldElement *node) = 0;
    virtual void validateElement(MessageElement *node) = 0;
    virtual void validateElement(PacketElement *node) = 0;
    virtual void validateElement(ClassElement *node) = 0;
    virtual void validateElement(StructElement *node) = 0;
    virtual void validateElement(FieldElement *node) = 0;
    virtual void validateElement(UnknownElement *node) = 0;
    //@}
};

} // namespace nedxml
} // namespace omnetpp

#endif

