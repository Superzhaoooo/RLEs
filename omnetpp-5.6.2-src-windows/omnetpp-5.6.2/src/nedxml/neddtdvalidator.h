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


#ifndef __OMNETPP_NEDXML_NEDDTDVALIDATOR_H
#define __OMNETPP_NEDXML_NEDDTDVALIDATOR_H

#include "nedelements.h"
#include "nedvalidator.h"
#include "dtdvalidationutils.h"

namespace omnetpp {
namespace nedxml {

/**
 *  GENERATED CLASS. Validates an ASTNode tree by the DTD.
 *
 * @ingroup Validation
 */
class NEDXML_API NedDtdValidator : public NedValidatorBase
{
  protected:
      typedef DtdValidationUtils::Choice Choice;
      DtdValidationUtils utils;
  public:
    NedDtdValidator(ErrorStore *e) : NedValidatorBase(e), utils(e) {}
    virtual ~NedDtdValidator() {}

  protected:
    /** @name Validation functions */
    //@{
    virtual void validateElement(FilesElement *node) override;
    virtual void validateElement(NedFileElement *node) override;
    virtual void validateElement(CommentElement *node) override;
    virtual void validateElement(PackageElement *node) override;
    virtual void validateElement(ImportElement *node) override;
    virtual void validateElement(PropertyDeclElement *node) override;
    virtual void validateElement(ExtendsElement *node) override;
    virtual void validateElement(InterfaceNameElement *node) override;
    virtual void validateElement(SimpleModuleElement *node) override;
    virtual void validateElement(ModuleInterfaceElement *node) override;
    virtual void validateElement(CompoundModuleElement *node) override;
    virtual void validateElement(ChannelInterfaceElement *node) override;
    virtual void validateElement(ChannelElement *node) override;
    virtual void validateElement(ParametersElement *node) override;
    virtual void validateElement(ParamElement *node) override;
    virtual void validateElement(PropertyElement *node) override;
    virtual void validateElement(PropertyKeyElement *node) override;
    virtual void validateElement(GatesElement *node) override;
    virtual void validateElement(GateElement *node) override;
    virtual void validateElement(TypesElement *node) override;
    virtual void validateElement(SubmodulesElement *node) override;
    virtual void validateElement(SubmoduleElement *node) override;
    virtual void validateElement(ConnectionsElement *node) override;
    virtual void validateElement(ConnectionElement *node) override;
    virtual void validateElement(ConnectionGroupElement *node) override;
    virtual void validateElement(LoopElement *node) override;
    virtual void validateElement(ConditionElement *node) override;
    virtual void validateElement(ExpressionElement *node) override;
    virtual void validateElement(OperatorElement *node) override;
    virtual void validateElement(FunctionElement *node) override;
    virtual void validateElement(IdentElement *node) override;
    virtual void validateElement(LiteralElement *node) override;
    virtual void validateElement(UnknownElement *node) override;
    //@}
};

} // namespace nedxml
} // namespace omnetpp

#endif

