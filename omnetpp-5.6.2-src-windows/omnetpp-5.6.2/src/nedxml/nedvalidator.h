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


#ifndef __OMNETPP_NEDXML_NEDVALIDATOR_H
#define __OMNETPP_NEDXML_NEDVALIDATOR_H

#include "errorstore.h"
#include "exception.h"
#include "nedelements.h"

namespace omnetpp {
namespace nedxml {

/**
 *  GENERATED CLASS. Abtract base class for NED validators.
 *
 * @ingroup Validation
 */
class NEDXML_API NedValidatorBase
{
  protected:
    ErrorStore *errors;
  public:
    /** @name Constructor, destructor */
    //@{
    NedValidatorBase(ErrorStore *e) {errors = e;}
    virtual ~NedValidatorBase() {}
    //@}

    /** Validates the node recursively */
    virtual void validate(ASTNode *node);
    /** Dispatches to the corresponding overloaded validateElement() function */
    virtual void validateElement(ASTNode *node);

  protected:
    /** @name Validation functions, to be implemented in subclasses */
    //@{
    virtual void validateElement(FilesElement *node) = 0;
    virtual void validateElement(NedFileElement *node) = 0;
    virtual void validateElement(CommentElement *node) = 0;
    virtual void validateElement(PackageElement *node) = 0;
    virtual void validateElement(ImportElement *node) = 0;
    virtual void validateElement(PropertyDeclElement *node) = 0;
    virtual void validateElement(ExtendsElement *node) = 0;
    virtual void validateElement(InterfaceNameElement *node) = 0;
    virtual void validateElement(SimpleModuleElement *node) = 0;
    virtual void validateElement(ModuleInterfaceElement *node) = 0;
    virtual void validateElement(CompoundModuleElement *node) = 0;
    virtual void validateElement(ChannelInterfaceElement *node) = 0;
    virtual void validateElement(ChannelElement *node) = 0;
    virtual void validateElement(ParametersElement *node) = 0;
    virtual void validateElement(ParamElement *node) = 0;
    virtual void validateElement(PropertyElement *node) = 0;
    virtual void validateElement(PropertyKeyElement *node) = 0;
    virtual void validateElement(GatesElement *node) = 0;
    virtual void validateElement(GateElement *node) = 0;
    virtual void validateElement(TypesElement *node) = 0;
    virtual void validateElement(SubmodulesElement *node) = 0;
    virtual void validateElement(SubmoduleElement *node) = 0;
    virtual void validateElement(ConnectionsElement *node) = 0;
    virtual void validateElement(ConnectionElement *node) = 0;
    virtual void validateElement(ConnectionGroupElement *node) = 0;
    virtual void validateElement(LoopElement *node) = 0;
    virtual void validateElement(ConditionElement *node) = 0;
    virtual void validateElement(ExpressionElement *node) = 0;
    virtual void validateElement(OperatorElement *node) = 0;
    virtual void validateElement(FunctionElement *node) = 0;
    virtual void validateElement(IdentElement *node) = 0;
    virtual void validateElement(LiteralElement *node) = 0;
    virtual void validateElement(UnknownElement *node) = 0;
    //@}
};

} // namespace nedxml
} // namespace omnetpp

#endif

