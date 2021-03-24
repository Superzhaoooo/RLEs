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


#ifndef __OMNETPP_NEDXML_MSGDTDVALIDATOR_H
#define __OMNETPP_NEDXML_MSGDTDVALIDATOR_H

#include "msgelements.h"
#include "msgvalidator.h"
#include "dtdvalidationutils.h"

namespace omnetpp {
namespace nedxml {

/**
 *  GENERATED CLASS. Validates an ASTNode tree by the DTD.
 *
 * @ingroup Validation
 */
class NEDXML_API MsgDtdValidator : public MsgValidatorBase
{
  protected:
      typedef DtdValidationUtils::Choice Choice;
      DtdValidationUtils utils;
  public:
    MsgDtdValidator(ErrorStore *e) : MsgValidatorBase(e), utils(e) {}
    virtual ~MsgDtdValidator() {}

  protected:
    /** @name Validation functions */
    //@{
    virtual void validateElement(FilesElement *node) override;
    virtual void validateElement(MsgFileElement *node) override;
    virtual void validateElement(CommentElement *node) override;
    virtual void validateElement(ImportElement *node) override;
    virtual void validateElement(PropertyElement *node) override;
    virtual void validateElement(PropertyKeyElement *node) override;
    virtual void validateElement(LiteralElement *node) override;
    virtual void validateElement(NamespaceElement *node) override;
    virtual void validateElement(CplusplusElement *node) override;
    virtual void validateElement(StructDeclElement *node) override;
    virtual void validateElement(ClassDeclElement *node) override;
    virtual void validateElement(MessageDeclElement *node) override;
    virtual void validateElement(PacketDeclElement *node) override;
    virtual void validateElement(EnumDeclElement *node) override;
    virtual void validateElement(EnumElement *node) override;
    virtual void validateElement(EnumFieldElement *node) override;
    virtual void validateElement(MessageElement *node) override;
    virtual void validateElement(PacketElement *node) override;
    virtual void validateElement(ClassElement *node) override;
    virtual void validateElement(StructElement *node) override;
    virtual void validateElement(FieldElement *node) override;
    virtual void validateElement(UnknownElement *node) override;
    //@}
};

} // namespace nedxml
} // namespace omnetpp

#endif

