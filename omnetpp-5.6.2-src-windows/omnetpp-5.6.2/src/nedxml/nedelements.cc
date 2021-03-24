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


#include <cstring>
#include "errorstore.h"
#include "exception.h"
#include "nedelements.h"

namespace omnetpp {
namespace nedxml {

static const char *gatetype_vals[] = {"", "input", "output", "inout"};
static int gatetype_nums[] = {GATETYPE_NONE, GATETYPE_INPUT, GATETYPE_OUTPUT, GATETYPE_INOUT};
static const int gatetype_n = 4;

static const char *partype_vals[] = {"", "double", "int", "string", "bool", "xml"};
static int partype_nums[] = {PARTYPE_NONE, PARTYPE_DOUBLE, PARTYPE_INT, PARTYPE_STRING, PARTYPE_BOOL, PARTYPE_XML};
static const int partype_n = 6;

static const char *littype_vals[] = {"double", "quantity", "int", "string", "bool", "spec"};
static int littype_nums[] = {LIT_DOUBLE, LIT_QUANTITY, LIT_INT, LIT_STRING, LIT_BOOL, LIT_SPEC};
static const int littype_n = 6;

static const char *subgate_vals[] = {"", "i", "o"};
static int subgate_nums[] = {SUBGATE_NONE, SUBGATE_I, SUBGATE_O};
static const int subgate_n = 3;

FilesElement::FilesElement()
{
    applyDefaults();
}

FilesElement::FilesElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int FilesElement::getNumAttributes() const
{
    return 0;
}

const char *FilesElement::getAttributeName(int k) const
{
    switch (k) {
        default: return 0;
    }
}

const char *FilesElement::getAttribute(int k) const
{
    switch (k) {
        default: return 0;
    }
}

void FilesElement::setAttribute(int k, const char *val)
{
    switch (k) {
        default: ;
    }
}

const char *FilesElement::getAttributeDefault(int k) const
{
    switch (k) {
        default: return 0;
    }
}

FilesElement *FilesElement::dup() const
{
    FilesElement *element = new FilesElement();
    return element;
}

FilesElement *FilesElement::getNextFilesSibling() const
{
    return static_cast<FilesElement *>(getNextSiblingWithTag(NED_FILES));
}

NedFileElement *FilesElement::getFirstNedFileChild() const
{
    return static_cast<NedFileElement *>(getFirstChildWithTag(NED_NED_FILE));
}

NedFileElement::NedFileElement()
{
    applyDefaults();
}

NedFileElement::NedFileElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int NedFileElement::getNumAttributes() const
{
    return 2;
}

const char *NedFileElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_FILENAME: return "filename";
        case ATT_VERSION: return "version";
        default: return 0;
    }
}

const char *NedFileElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_FILENAME: return filename.c_str();
        case ATT_VERSION: return version.c_str();
        default: return 0;
    }
}

void NedFileElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_FILENAME: filename = val; break;
        case ATT_VERSION: version = val; break;
        default: ;
    }
}

const char *NedFileElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_FILENAME: return nullptr;
        case ATT_VERSION: return "2";
        default: return 0;
    }
}

NedFileElement *NedFileElement::dup() const
{
    NedFileElement *element = new NedFileElement();
    element->filename = this->filename;
    element->version = this->version;
    return element;
}

NedFileElement *NedFileElement::getNextNedFileSibling() const
{
    return static_cast<NedFileElement *>(getNextSiblingWithTag(NED_NED_FILE));
}

CommentElement *NedFileElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

PackageElement *NedFileElement::getFirstPackageChild() const
{
    return static_cast<PackageElement *>(getFirstChildWithTag(NED_PACKAGE));
}

ImportElement *NedFileElement::getFirstImportChild() const
{
    return static_cast<ImportElement *>(getFirstChildWithTag(NED_IMPORT));
}

PropertyDeclElement *NedFileElement::getFirstPropertyDeclChild() const
{
    return static_cast<PropertyDeclElement *>(getFirstChildWithTag(NED_PROPERTY_DECL));
}

PropertyElement *NedFileElement::getFirstPropertyChild() const
{
    return static_cast<PropertyElement *>(getFirstChildWithTag(NED_PROPERTY));
}

SimpleModuleElement *NedFileElement::getFirstSimpleModuleChild() const
{
    return static_cast<SimpleModuleElement *>(getFirstChildWithTag(NED_SIMPLE_MODULE));
}

CompoundModuleElement *NedFileElement::getFirstCompoundModuleChild() const
{
    return static_cast<CompoundModuleElement *>(getFirstChildWithTag(NED_COMPOUND_MODULE));
}

ModuleInterfaceElement *NedFileElement::getFirstModuleInterfaceChild() const
{
    return static_cast<ModuleInterfaceElement *>(getFirstChildWithTag(NED_MODULE_INTERFACE));
}

ChannelElement *NedFileElement::getFirstChannelChild() const
{
    return static_cast<ChannelElement *>(getFirstChildWithTag(NED_CHANNEL));
}

ChannelInterfaceElement *NedFileElement::getFirstChannelInterfaceChild() const
{
    return static_cast<ChannelInterfaceElement *>(getFirstChildWithTag(NED_CHANNEL_INTERFACE));
}

CommentElement::CommentElement()
{
    applyDefaults();
}

CommentElement::CommentElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int CommentElement::getNumAttributes() const
{
    return 2;
}

const char *CommentElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_LOCID: return "locid";
        case ATT_CONTENT: return "content";
        default: return 0;
    }
}

const char *CommentElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_LOCID: return locid.c_str();
        case ATT_CONTENT: return content.c_str();
        default: return 0;
    }
}

void CommentElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_LOCID: locid = val; break;
        case ATT_CONTENT: content = val; break;
        default: ;
    }
}

const char *CommentElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_LOCID: return nullptr;
        case ATT_CONTENT: return "";
        default: return 0;
    }
}

CommentElement *CommentElement::dup() const
{
    CommentElement *element = new CommentElement();
    element->locid = this->locid;
    element->content = this->content;
    return element;
}

CommentElement *CommentElement::getNextCommentSibling() const
{
    return static_cast<CommentElement *>(getNextSiblingWithTag(NED_COMMENT));
}

PackageElement::PackageElement()
{
    applyDefaults();
}

PackageElement::PackageElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int PackageElement::getNumAttributes() const
{
    return 1;
}

const char *PackageElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_NAME: return "name";
        default: return 0;
    }
}

const char *PackageElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_NAME: return name.c_str();
        default: return 0;
    }
}

void PackageElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_NAME: name = val; break;
        default: ;
    }
}

const char *PackageElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_NAME: return nullptr;
        default: return 0;
    }
}

PackageElement *PackageElement::dup() const
{
    PackageElement *element = new PackageElement();
    element->name = this->name;
    return element;
}

PackageElement *PackageElement::getNextPackageSibling() const
{
    return static_cast<PackageElement *>(getNextSiblingWithTag(NED_PACKAGE));
}

CommentElement *PackageElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

ImportElement::ImportElement()
{
    applyDefaults();
}

ImportElement::ImportElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int ImportElement::getNumAttributes() const
{
    return 1;
}

const char *ImportElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_IMPORT_SPEC: return "import-spec";
        default: return 0;
    }
}

const char *ImportElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_IMPORT_SPEC: return importSpec.c_str();
        default: return 0;
    }
}

void ImportElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_IMPORT_SPEC: importSpec = val; break;
        default: ;
    }
}

const char *ImportElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_IMPORT_SPEC: return nullptr;
        default: return 0;
    }
}

ImportElement *ImportElement::dup() const
{
    ImportElement *element = new ImportElement();
    element->importSpec = this->importSpec;
    return element;
}

ImportElement *ImportElement::getNextImportSibling() const
{
    return static_cast<ImportElement *>(getNextSiblingWithTag(NED_IMPORT));
}

CommentElement *ImportElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

PropertyDeclElement::PropertyDeclElement()
{
    isArray = false;
    applyDefaults();
}

PropertyDeclElement::PropertyDeclElement(ASTNode *parent) : ASTNode(parent)
{
    isArray = false;
    applyDefaults();
}

int PropertyDeclElement::getNumAttributes() const
{
    return 2;
}

const char *PropertyDeclElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_NAME: return "name";
        case ATT_IS_ARRAY: return "is-array";
        default: return 0;
    }
}

const char *PropertyDeclElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_NAME: return name.c_str();
        case ATT_IS_ARRAY: return boolToString(isArray);
        default: return 0;
    }
}

void PropertyDeclElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_NAME: name = val; break;
        case ATT_IS_ARRAY: isArray = stringToBool(val); break;
        default: ;
    }
}

const char *PropertyDeclElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_NAME: return nullptr;
        case ATT_IS_ARRAY: return "false";
        default: return 0;
    }
}

PropertyDeclElement *PropertyDeclElement::dup() const
{
    PropertyDeclElement *element = new PropertyDeclElement();
    element->name = this->name;
    element->isArray = this->isArray;
    return element;
}

PropertyDeclElement *PropertyDeclElement::getNextPropertyDeclSibling() const
{
    return static_cast<PropertyDeclElement *>(getNextSiblingWithTag(NED_PROPERTY_DECL));
}

CommentElement *PropertyDeclElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

PropertyKeyElement *PropertyDeclElement::getFirstPropertyKeyChild() const
{
    return static_cast<PropertyKeyElement *>(getFirstChildWithTag(NED_PROPERTY_KEY));
}

PropertyElement *PropertyDeclElement::getFirstPropertyChild() const
{
    return static_cast<PropertyElement *>(getFirstChildWithTag(NED_PROPERTY));
}

ExtendsElement::ExtendsElement()
{
    applyDefaults();
}

ExtendsElement::ExtendsElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int ExtendsElement::getNumAttributes() const
{
    return 1;
}

const char *ExtendsElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_NAME: return "name";
        default: return 0;
    }
}

const char *ExtendsElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_NAME: return name.c_str();
        default: return 0;
    }
}

void ExtendsElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_NAME: name = val; break;
        default: ;
    }
}

const char *ExtendsElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_NAME: return nullptr;
        default: return 0;
    }
}

ExtendsElement *ExtendsElement::dup() const
{
    ExtendsElement *element = new ExtendsElement();
    element->name = this->name;
    return element;
}

ExtendsElement *ExtendsElement::getNextExtendsSibling() const
{
    return static_cast<ExtendsElement *>(getNextSiblingWithTag(NED_EXTENDS));
}

CommentElement *ExtendsElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

InterfaceNameElement::InterfaceNameElement()
{
    applyDefaults();
}

InterfaceNameElement::InterfaceNameElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int InterfaceNameElement::getNumAttributes() const
{
    return 1;
}

const char *InterfaceNameElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_NAME: return "name";
        default: return 0;
    }
}

const char *InterfaceNameElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_NAME: return name.c_str();
        default: return 0;
    }
}

void InterfaceNameElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_NAME: name = val; break;
        default: ;
    }
}

const char *InterfaceNameElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_NAME: return nullptr;
        default: return 0;
    }
}

InterfaceNameElement *InterfaceNameElement::dup() const
{
    InterfaceNameElement *element = new InterfaceNameElement();
    element->name = this->name;
    return element;
}

InterfaceNameElement *InterfaceNameElement::getNextInterfaceNameSibling() const
{
    return static_cast<InterfaceNameElement *>(getNextSiblingWithTag(NED_INTERFACE_NAME));
}

CommentElement *InterfaceNameElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

SimpleModuleElement::SimpleModuleElement()
{
    applyDefaults();
}

SimpleModuleElement::SimpleModuleElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int SimpleModuleElement::getNumAttributes() const
{
    return 1;
}

const char *SimpleModuleElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_NAME: return "name";
        default: return 0;
    }
}

const char *SimpleModuleElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_NAME: return name.c_str();
        default: return 0;
    }
}

void SimpleModuleElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_NAME: name = val; break;
        default: ;
    }
}

const char *SimpleModuleElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_NAME: return nullptr;
        default: return 0;
    }
}

SimpleModuleElement *SimpleModuleElement::dup() const
{
    SimpleModuleElement *element = new SimpleModuleElement();
    element->name = this->name;
    return element;
}

SimpleModuleElement *SimpleModuleElement::getNextSimpleModuleSibling() const
{
    return static_cast<SimpleModuleElement *>(getNextSiblingWithTag(NED_SIMPLE_MODULE));
}

CommentElement *SimpleModuleElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

ExtendsElement *SimpleModuleElement::getFirstExtendsChild() const
{
    return static_cast<ExtendsElement *>(getFirstChildWithTag(NED_EXTENDS));
}

InterfaceNameElement *SimpleModuleElement::getFirstInterfaceNameChild() const
{
    return static_cast<InterfaceNameElement *>(getFirstChildWithTag(NED_INTERFACE_NAME));
}

ParametersElement *SimpleModuleElement::getFirstParametersChild() const
{
    return static_cast<ParametersElement *>(getFirstChildWithTag(NED_PARAMETERS));
}

GatesElement *SimpleModuleElement::getFirstGatesChild() const
{
    return static_cast<GatesElement *>(getFirstChildWithTag(NED_GATES));
}

ModuleInterfaceElement::ModuleInterfaceElement()
{
    applyDefaults();
}

ModuleInterfaceElement::ModuleInterfaceElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int ModuleInterfaceElement::getNumAttributes() const
{
    return 1;
}

const char *ModuleInterfaceElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_NAME: return "name";
        default: return 0;
    }
}

const char *ModuleInterfaceElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_NAME: return name.c_str();
        default: return 0;
    }
}

void ModuleInterfaceElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_NAME: name = val; break;
        default: ;
    }
}

const char *ModuleInterfaceElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_NAME: return nullptr;
        default: return 0;
    }
}

ModuleInterfaceElement *ModuleInterfaceElement::dup() const
{
    ModuleInterfaceElement *element = new ModuleInterfaceElement();
    element->name = this->name;
    return element;
}

ModuleInterfaceElement *ModuleInterfaceElement::getNextModuleInterfaceSibling() const
{
    return static_cast<ModuleInterfaceElement *>(getNextSiblingWithTag(NED_MODULE_INTERFACE));
}

CommentElement *ModuleInterfaceElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

ExtendsElement *ModuleInterfaceElement::getFirstExtendsChild() const
{
    return static_cast<ExtendsElement *>(getFirstChildWithTag(NED_EXTENDS));
}

ParametersElement *ModuleInterfaceElement::getFirstParametersChild() const
{
    return static_cast<ParametersElement *>(getFirstChildWithTag(NED_PARAMETERS));
}

GatesElement *ModuleInterfaceElement::getFirstGatesChild() const
{
    return static_cast<GatesElement *>(getFirstChildWithTag(NED_GATES));
}

CompoundModuleElement::CompoundModuleElement()
{
    applyDefaults();
}

CompoundModuleElement::CompoundModuleElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int CompoundModuleElement::getNumAttributes() const
{
    return 1;
}

const char *CompoundModuleElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_NAME: return "name";
        default: return 0;
    }
}

const char *CompoundModuleElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_NAME: return name.c_str();
        default: return 0;
    }
}

void CompoundModuleElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_NAME: name = val; break;
        default: ;
    }
}

const char *CompoundModuleElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_NAME: return nullptr;
        default: return 0;
    }
}

CompoundModuleElement *CompoundModuleElement::dup() const
{
    CompoundModuleElement *element = new CompoundModuleElement();
    element->name = this->name;
    return element;
}

CompoundModuleElement *CompoundModuleElement::getNextCompoundModuleSibling() const
{
    return static_cast<CompoundModuleElement *>(getNextSiblingWithTag(NED_COMPOUND_MODULE));
}

CommentElement *CompoundModuleElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

ExtendsElement *CompoundModuleElement::getFirstExtendsChild() const
{
    return static_cast<ExtendsElement *>(getFirstChildWithTag(NED_EXTENDS));
}

InterfaceNameElement *CompoundModuleElement::getFirstInterfaceNameChild() const
{
    return static_cast<InterfaceNameElement *>(getFirstChildWithTag(NED_INTERFACE_NAME));
}

ParametersElement *CompoundModuleElement::getFirstParametersChild() const
{
    return static_cast<ParametersElement *>(getFirstChildWithTag(NED_PARAMETERS));
}

GatesElement *CompoundModuleElement::getFirstGatesChild() const
{
    return static_cast<GatesElement *>(getFirstChildWithTag(NED_GATES));
}

TypesElement *CompoundModuleElement::getFirstTypesChild() const
{
    return static_cast<TypesElement *>(getFirstChildWithTag(NED_TYPES));
}

SubmodulesElement *CompoundModuleElement::getFirstSubmodulesChild() const
{
    return static_cast<SubmodulesElement *>(getFirstChildWithTag(NED_SUBMODULES));
}

ConnectionsElement *CompoundModuleElement::getFirstConnectionsChild() const
{
    return static_cast<ConnectionsElement *>(getFirstChildWithTag(NED_CONNECTIONS));
}

ChannelInterfaceElement::ChannelInterfaceElement()
{
    applyDefaults();
}

ChannelInterfaceElement::ChannelInterfaceElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int ChannelInterfaceElement::getNumAttributes() const
{
    return 1;
}

const char *ChannelInterfaceElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_NAME: return "name";
        default: return 0;
    }
}

const char *ChannelInterfaceElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_NAME: return name.c_str();
        default: return 0;
    }
}

void ChannelInterfaceElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_NAME: name = val; break;
        default: ;
    }
}

const char *ChannelInterfaceElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_NAME: return nullptr;
        default: return 0;
    }
}

ChannelInterfaceElement *ChannelInterfaceElement::dup() const
{
    ChannelInterfaceElement *element = new ChannelInterfaceElement();
    element->name = this->name;
    return element;
}

ChannelInterfaceElement *ChannelInterfaceElement::getNextChannelInterfaceSibling() const
{
    return static_cast<ChannelInterfaceElement *>(getNextSiblingWithTag(NED_CHANNEL_INTERFACE));
}

CommentElement *ChannelInterfaceElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

ExtendsElement *ChannelInterfaceElement::getFirstExtendsChild() const
{
    return static_cast<ExtendsElement *>(getFirstChildWithTag(NED_EXTENDS));
}

ParametersElement *ChannelInterfaceElement::getFirstParametersChild() const
{
    return static_cast<ParametersElement *>(getFirstChildWithTag(NED_PARAMETERS));
}

ChannelElement::ChannelElement()
{
    applyDefaults();
}

ChannelElement::ChannelElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int ChannelElement::getNumAttributes() const
{
    return 1;
}

const char *ChannelElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_NAME: return "name";
        default: return 0;
    }
}

const char *ChannelElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_NAME: return name.c_str();
        default: return 0;
    }
}

void ChannelElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_NAME: name = val; break;
        default: ;
    }
}

const char *ChannelElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_NAME: return nullptr;
        default: return 0;
    }
}

ChannelElement *ChannelElement::dup() const
{
    ChannelElement *element = new ChannelElement();
    element->name = this->name;
    return element;
}

ChannelElement *ChannelElement::getNextChannelSibling() const
{
    return static_cast<ChannelElement *>(getNextSiblingWithTag(NED_CHANNEL));
}

CommentElement *ChannelElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

ExtendsElement *ChannelElement::getFirstExtendsChild() const
{
    return static_cast<ExtendsElement *>(getFirstChildWithTag(NED_EXTENDS));
}

InterfaceNameElement *ChannelElement::getFirstInterfaceNameChild() const
{
    return static_cast<InterfaceNameElement *>(getFirstChildWithTag(NED_INTERFACE_NAME));
}

ParametersElement *ChannelElement::getFirstParametersChild() const
{
    return static_cast<ParametersElement *>(getFirstChildWithTag(NED_PARAMETERS));
}

ParametersElement::ParametersElement()
{
    isImplicit = false;
    applyDefaults();
}

ParametersElement::ParametersElement(ASTNode *parent) : ASTNode(parent)
{
    isImplicit = false;
    applyDefaults();
}

int ParametersElement::getNumAttributes() const
{
    return 1;
}

const char *ParametersElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_IS_IMPLICIT: return "is-implicit";
        default: return 0;
    }
}

const char *ParametersElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_IS_IMPLICIT: return boolToString(isImplicit);
        default: return 0;
    }
}

void ParametersElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_IS_IMPLICIT: isImplicit = stringToBool(val); break;
        default: ;
    }
}

const char *ParametersElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_IS_IMPLICIT: return "false";
        default: return 0;
    }
}

ParametersElement *ParametersElement::dup() const
{
    ParametersElement *element = new ParametersElement();
    element->isImplicit = this->isImplicit;
    return element;
}

ParametersElement *ParametersElement::getNextParametersSibling() const
{
    return static_cast<ParametersElement *>(getNextSiblingWithTag(NED_PARAMETERS));
}

CommentElement *ParametersElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

PropertyElement *ParametersElement::getFirstPropertyChild() const
{
    return static_cast<PropertyElement *>(getFirstChildWithTag(NED_PROPERTY));
}

ParamElement *ParametersElement::getFirstParamChild() const
{
    return static_cast<ParamElement *>(getFirstChildWithTag(NED_PARAM));
}

void ParamElement::setType(int val)
{
    validateEnum(val, partype_vals, partype_nums, partype_n);
    type = val;
}

ParamElement::ParamElement()
{
    type = 0;
    isVolatile = false;
    isPattern = false;
    isDefault = false;
    applyDefaults();
}

ParamElement::ParamElement(ASTNode *parent) : ASTNode(parent)
{
    type = 0;
    isVolatile = false;
    isPattern = false;
    isDefault = false;
    applyDefaults();
}

int ParamElement::getNumAttributes() const
{
    return 6;
}

const char *ParamElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_TYPE: return "type";
        case ATT_IS_VOLATILE: return "is-volatile";
        case ATT_NAME: return "name";
        case ATT_VALUE: return "value";
        case ATT_IS_PATTERN: return "is-pattern";
        case ATT_IS_DEFAULT: return "is-default";
        default: return 0;
    }
}

const char *ParamElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_TYPE: return enumToString(type, partype_vals, partype_nums, partype_n);
        case ATT_IS_VOLATILE: return boolToString(isVolatile);
        case ATT_NAME: return name.c_str();
        case ATT_VALUE: return value.c_str();
        case ATT_IS_PATTERN: return boolToString(isPattern);
        case ATT_IS_DEFAULT: return boolToString(isDefault);
        default: return 0;
    }
}

void ParamElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_TYPE: type = stringToEnum(val, partype_vals, partype_nums, partype_n); break;
        case ATT_IS_VOLATILE: isVolatile = stringToBool(val); break;
        case ATT_NAME: name = val; break;
        case ATT_VALUE: value = val; break;
        case ATT_IS_PATTERN: isPattern = stringToBool(val); break;
        case ATT_IS_DEFAULT: isDefault = stringToBool(val); break;
        default: ;
    }
}

const char *ParamElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_TYPE: return "";
        case ATT_IS_VOLATILE: return "false";
        case ATT_NAME: return nullptr;
        case ATT_VALUE: return "";
        case ATT_IS_PATTERN: return "false";
        case ATT_IS_DEFAULT: return "false";
        default: return 0;
    }
}

ParamElement *ParamElement::dup() const
{
    ParamElement *element = new ParamElement();
    element->type = this->type;
    element->isVolatile = this->isVolatile;
    element->name = this->name;
    element->value = this->value;
    element->isPattern = this->isPattern;
    element->isDefault = this->isDefault;
    return element;
}

ParamElement *ParamElement::getNextParamSibling() const
{
    return static_cast<ParamElement *>(getNextSiblingWithTag(NED_PARAM));
}

CommentElement *ParamElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

ExpressionElement *ParamElement::getFirstExpressionChild() const
{
    return static_cast<ExpressionElement *>(getFirstChildWithTag(NED_EXPRESSION));
}

PropertyElement *ParamElement::getFirstPropertyChild() const
{
    return static_cast<PropertyElement *>(getFirstChildWithTag(NED_PROPERTY));
}

PropertyElement::PropertyElement()
{
    isImplicit = false;
    applyDefaults();
}

PropertyElement::PropertyElement(ASTNode *parent) : ASTNode(parent)
{
    isImplicit = false;
    applyDefaults();
}

int PropertyElement::getNumAttributes() const
{
    return 3;
}

const char *PropertyElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_IS_IMPLICIT: return "is-implicit";
        case ATT_NAME: return "name";
        case ATT_INDEX: return "index";
        default: return 0;
    }
}

const char *PropertyElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_IS_IMPLICIT: return boolToString(isImplicit);
        case ATT_NAME: return name.c_str();
        case ATT_INDEX: return index.c_str();
        default: return 0;
    }
}

void PropertyElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_IS_IMPLICIT: isImplicit = stringToBool(val); break;
        case ATT_NAME: name = val; break;
        case ATT_INDEX: index = val; break;
        default: ;
    }
}

const char *PropertyElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_IS_IMPLICIT: return "false";
        case ATT_NAME: return nullptr;
        case ATT_INDEX: return "";
        default: return 0;
    }
}

PropertyElement *PropertyElement::dup() const
{
    PropertyElement *element = new PropertyElement();
    element->isImplicit = this->isImplicit;
    element->name = this->name;
    element->index = this->index;
    return element;
}

PropertyElement *PropertyElement::getNextPropertySibling() const
{
    return static_cast<PropertyElement *>(getNextSiblingWithTag(NED_PROPERTY));
}

CommentElement *PropertyElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

PropertyKeyElement *PropertyElement::getFirstPropertyKeyChild() const
{
    return static_cast<PropertyKeyElement *>(getFirstChildWithTag(NED_PROPERTY_KEY));
}

PropertyKeyElement::PropertyKeyElement()
{
    applyDefaults();
}

PropertyKeyElement::PropertyKeyElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int PropertyKeyElement::getNumAttributes() const
{
    return 1;
}

const char *PropertyKeyElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_NAME: return "name";
        default: return 0;
    }
}

const char *PropertyKeyElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_NAME: return name.c_str();
        default: return 0;
    }
}

void PropertyKeyElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_NAME: name = val; break;
        default: ;
    }
}

const char *PropertyKeyElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_NAME: return "";
        default: return 0;
    }
}

PropertyKeyElement *PropertyKeyElement::dup() const
{
    PropertyKeyElement *element = new PropertyKeyElement();
    element->name = this->name;
    return element;
}

PropertyKeyElement *PropertyKeyElement::getNextPropertyKeySibling() const
{
    return static_cast<PropertyKeyElement *>(getNextSiblingWithTag(NED_PROPERTY_KEY));
}

CommentElement *PropertyKeyElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

LiteralElement *PropertyKeyElement::getFirstLiteralChild() const
{
    return static_cast<LiteralElement *>(getFirstChildWithTag(NED_LITERAL));
}

GatesElement::GatesElement()
{
    applyDefaults();
}

GatesElement::GatesElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int GatesElement::getNumAttributes() const
{
    return 0;
}

const char *GatesElement::getAttributeName(int k) const
{
    switch (k) {
        default: return 0;
    }
}

const char *GatesElement::getAttribute(int k) const
{
    switch (k) {
        default: return 0;
    }
}

void GatesElement::setAttribute(int k, const char *val)
{
    switch (k) {
        default: ;
    }
}

const char *GatesElement::getAttributeDefault(int k) const
{
    switch (k) {
        default: return 0;
    }
}

GatesElement *GatesElement::dup() const
{
    GatesElement *element = new GatesElement();
    return element;
}

GatesElement *GatesElement::getNextGatesSibling() const
{
    return static_cast<GatesElement *>(getNextSiblingWithTag(NED_GATES));
}

CommentElement *GatesElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

GateElement *GatesElement::getFirstGateChild() const
{
    return static_cast<GateElement *>(getFirstChildWithTag(NED_GATE));
}

void GateElement::setType(int val)
{
    validateEnum(val, gatetype_vals, gatetype_nums, gatetype_n);
    type = val;
}

GateElement::GateElement()
{
    type = 0;
    isVector = false;
    applyDefaults();
}

GateElement::GateElement(ASTNode *parent) : ASTNode(parent)
{
    type = 0;
    isVector = false;
    applyDefaults();
}

int GateElement::getNumAttributes() const
{
    return 4;
}

const char *GateElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_NAME: return "name";
        case ATT_TYPE: return "type";
        case ATT_IS_VECTOR: return "is-vector";
        case ATT_VECTOR_SIZE: return "vector-size";
        default: return 0;
    }
}

const char *GateElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_NAME: return name.c_str();
        case ATT_TYPE: return enumToString(type, gatetype_vals, gatetype_nums, gatetype_n);
        case ATT_IS_VECTOR: return boolToString(isVector);
        case ATT_VECTOR_SIZE: return vectorSize.c_str();
        default: return 0;
    }
}

void GateElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_NAME: name = val; break;
        case ATT_TYPE: type = stringToEnum(val, gatetype_vals, gatetype_nums, gatetype_n); break;
        case ATT_IS_VECTOR: isVector = stringToBool(val); break;
        case ATT_VECTOR_SIZE: vectorSize = val; break;
        default: ;
    }
}

const char *GateElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_NAME: return nullptr;
        case ATT_TYPE: return "";
        case ATT_IS_VECTOR: return "false";
        case ATT_VECTOR_SIZE: return "";
        default: return 0;
    }
}

GateElement *GateElement::dup() const
{
    GateElement *element = new GateElement();
    element->name = this->name;
    element->type = this->type;
    element->isVector = this->isVector;
    element->vectorSize = this->vectorSize;
    return element;
}

GateElement *GateElement::getNextGateSibling() const
{
    return static_cast<GateElement *>(getNextSiblingWithTag(NED_GATE));
}

CommentElement *GateElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

ExpressionElement *GateElement::getFirstExpressionChild() const
{
    return static_cast<ExpressionElement *>(getFirstChildWithTag(NED_EXPRESSION));
}

PropertyElement *GateElement::getFirstPropertyChild() const
{
    return static_cast<PropertyElement *>(getFirstChildWithTag(NED_PROPERTY));
}

TypesElement::TypesElement()
{
    applyDefaults();
}

TypesElement::TypesElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int TypesElement::getNumAttributes() const
{
    return 0;
}

const char *TypesElement::getAttributeName(int k) const
{
    switch (k) {
        default: return 0;
    }
}

const char *TypesElement::getAttribute(int k) const
{
    switch (k) {
        default: return 0;
    }
}

void TypesElement::setAttribute(int k, const char *val)
{
    switch (k) {
        default: ;
    }
}

const char *TypesElement::getAttributeDefault(int k) const
{
    switch (k) {
        default: return 0;
    }
}

TypesElement *TypesElement::dup() const
{
    TypesElement *element = new TypesElement();
    return element;
}

TypesElement *TypesElement::getNextTypesSibling() const
{
    return static_cast<TypesElement *>(getNextSiblingWithTag(NED_TYPES));
}

CommentElement *TypesElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

ChannelElement *TypesElement::getFirstChannelChild() const
{
    return static_cast<ChannelElement *>(getFirstChildWithTag(NED_CHANNEL));
}

ChannelInterfaceElement *TypesElement::getFirstChannelInterfaceChild() const
{
    return static_cast<ChannelInterfaceElement *>(getFirstChildWithTag(NED_CHANNEL_INTERFACE));
}

SimpleModuleElement *TypesElement::getFirstSimpleModuleChild() const
{
    return static_cast<SimpleModuleElement *>(getFirstChildWithTag(NED_SIMPLE_MODULE));
}

CompoundModuleElement *TypesElement::getFirstCompoundModuleChild() const
{
    return static_cast<CompoundModuleElement *>(getFirstChildWithTag(NED_COMPOUND_MODULE));
}

ModuleInterfaceElement *TypesElement::getFirstModuleInterfaceChild() const
{
    return static_cast<ModuleInterfaceElement *>(getFirstChildWithTag(NED_MODULE_INTERFACE));
}

SubmodulesElement::SubmodulesElement()
{
    applyDefaults();
}

SubmodulesElement::SubmodulesElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int SubmodulesElement::getNumAttributes() const
{
    return 0;
}

const char *SubmodulesElement::getAttributeName(int k) const
{
    switch (k) {
        default: return 0;
    }
}

const char *SubmodulesElement::getAttribute(int k) const
{
    switch (k) {
        default: return 0;
    }
}

void SubmodulesElement::setAttribute(int k, const char *val)
{
    switch (k) {
        default: ;
    }
}

const char *SubmodulesElement::getAttributeDefault(int k) const
{
    switch (k) {
        default: return 0;
    }
}

SubmodulesElement *SubmodulesElement::dup() const
{
    SubmodulesElement *element = new SubmodulesElement();
    return element;
}

SubmodulesElement *SubmodulesElement::getNextSubmodulesSibling() const
{
    return static_cast<SubmodulesElement *>(getNextSiblingWithTag(NED_SUBMODULES));
}

CommentElement *SubmodulesElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

SubmoduleElement *SubmodulesElement::getFirstSubmoduleChild() const
{
    return static_cast<SubmoduleElement *>(getFirstChildWithTag(NED_SUBMODULE));
}

SubmoduleElement::SubmoduleElement()
{
    isDefault = false;
    applyDefaults();
}

SubmoduleElement::SubmoduleElement(ASTNode *parent) : ASTNode(parent)
{
    isDefault = false;
    applyDefaults();
}

int SubmoduleElement::getNumAttributes() const
{
    return 6;
}

const char *SubmoduleElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_NAME: return "name";
        case ATT_TYPE: return "type";
        case ATT_LIKE_TYPE: return "like-type";
        case ATT_LIKE_EXPR: return "like-expr";
        case ATT_IS_DEFAULT: return "is-default";
        case ATT_VECTOR_SIZE: return "vector-size";
        default: return 0;
    }
}

const char *SubmoduleElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_NAME: return name.c_str();
        case ATT_TYPE: return type.c_str();
        case ATT_LIKE_TYPE: return likeType.c_str();
        case ATT_LIKE_EXPR: return likeExpr.c_str();
        case ATT_IS_DEFAULT: return boolToString(isDefault);
        case ATT_VECTOR_SIZE: return vectorSize.c_str();
        default: return 0;
    }
}

void SubmoduleElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_NAME: name = val; break;
        case ATT_TYPE: type = val; break;
        case ATT_LIKE_TYPE: likeType = val; break;
        case ATT_LIKE_EXPR: likeExpr = val; break;
        case ATT_IS_DEFAULT: isDefault = stringToBool(val); break;
        case ATT_VECTOR_SIZE: vectorSize = val; break;
        default: ;
    }
}

const char *SubmoduleElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_NAME: return nullptr;
        case ATT_TYPE: return "";
        case ATT_LIKE_TYPE: return "";
        case ATT_LIKE_EXPR: return "";
        case ATT_IS_DEFAULT: return "false";
        case ATT_VECTOR_SIZE: return "";
        default: return 0;
    }
}

SubmoduleElement *SubmoduleElement::dup() const
{
    SubmoduleElement *element = new SubmoduleElement();
    element->name = this->name;
    element->type = this->type;
    element->likeType = this->likeType;
    element->likeExpr = this->likeExpr;
    element->isDefault = this->isDefault;
    element->vectorSize = this->vectorSize;
    return element;
}

SubmoduleElement *SubmoduleElement::getNextSubmoduleSibling() const
{
    return static_cast<SubmoduleElement *>(getNextSiblingWithTag(NED_SUBMODULE));
}

CommentElement *SubmoduleElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

ExpressionElement *SubmoduleElement::getFirstExpressionChild() const
{
    return static_cast<ExpressionElement *>(getFirstChildWithTag(NED_EXPRESSION));
}

ConditionElement *SubmoduleElement::getFirstConditionChild() const
{
    return static_cast<ConditionElement *>(getFirstChildWithTag(NED_CONDITION));
}

ParametersElement *SubmoduleElement::getFirstParametersChild() const
{
    return static_cast<ParametersElement *>(getFirstChildWithTag(NED_PARAMETERS));
}

GatesElement *SubmoduleElement::getFirstGatesChild() const
{
    return static_cast<GatesElement *>(getFirstChildWithTag(NED_GATES));
}

ConnectionsElement::ConnectionsElement()
{
    allowUnconnected = false;
    applyDefaults();
}

ConnectionsElement::ConnectionsElement(ASTNode *parent) : ASTNode(parent)
{
    allowUnconnected = false;
    applyDefaults();
}

int ConnectionsElement::getNumAttributes() const
{
    return 1;
}

const char *ConnectionsElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_ALLOW_UNCONNECTED: return "allow-unconnected";
        default: return 0;
    }
}

const char *ConnectionsElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_ALLOW_UNCONNECTED: return boolToString(allowUnconnected);
        default: return 0;
    }
}

void ConnectionsElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_ALLOW_UNCONNECTED: allowUnconnected = stringToBool(val); break;
        default: ;
    }
}

const char *ConnectionsElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_ALLOW_UNCONNECTED: return "false";
        default: return 0;
    }
}

ConnectionsElement *ConnectionsElement::dup() const
{
    ConnectionsElement *element = new ConnectionsElement();
    element->allowUnconnected = this->allowUnconnected;
    return element;
}

ConnectionsElement *ConnectionsElement::getNextConnectionsSibling() const
{
    return static_cast<ConnectionsElement *>(getNextSiblingWithTag(NED_CONNECTIONS));
}

CommentElement *ConnectionsElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

ConnectionElement *ConnectionsElement::getFirstConnectionChild() const
{
    return static_cast<ConnectionElement *>(getFirstChildWithTag(NED_CONNECTION));
}

ConnectionGroupElement *ConnectionsElement::getFirstConnectionGroupChild() const
{
    return static_cast<ConnectionGroupElement *>(getFirstChildWithTag(NED_CONNECTION_GROUP));
}

void ConnectionElement::setSrcGateSubg(int val)
{
    validateEnum(val, subgate_vals, subgate_nums, subgate_n);
    srcGateSubg = val;
}

void ConnectionElement::setDestGateSubg(int val)
{
    validateEnum(val, subgate_vals, subgate_nums, subgate_n);
    destGateSubg = val;
}

ConnectionElement::ConnectionElement()
{
    srcGatePlusplus = false;
    srcGateSubg = 0;
    destGatePlusplus = false;
    destGateSubg = 0;
    isDefault = false;
    isBidirectional = false;
    isForwardArrow = false;
    applyDefaults();
}

ConnectionElement::ConnectionElement(ASTNode *parent) : ASTNode(parent)
{
    srcGatePlusplus = false;
    srcGateSubg = 0;
    destGatePlusplus = false;
    destGateSubg = 0;
    isDefault = false;
    isBidirectional = false;
    isForwardArrow = false;
    applyDefaults();
}

int ConnectionElement::getNumAttributes() const
{
    return 19;
}

const char *ConnectionElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_SRC_MODULE: return "src-module";
        case ATT_SRC_MODULE_INDEX: return "src-module-index";
        case ATT_SRC_GATE: return "src-gate";
        case ATT_SRC_GATE_PLUSPLUS: return "src-gate-plusplus";
        case ATT_SRC_GATE_INDEX: return "src-gate-index";
        case ATT_SRC_GATE_SUBG: return "src-gate-subg";
        case ATT_DEST_MODULE: return "dest-module";
        case ATT_DEST_MODULE_INDEX: return "dest-module-index";
        case ATT_DEST_GATE: return "dest-gate";
        case ATT_DEST_GATE_PLUSPLUS: return "dest-gate-plusplus";
        case ATT_DEST_GATE_INDEX: return "dest-gate-index";
        case ATT_DEST_GATE_SUBG: return "dest-gate-subg";
        case ATT_NAME: return "name";
        case ATT_TYPE: return "type";
        case ATT_LIKE_TYPE: return "like-type";
        case ATT_LIKE_EXPR: return "like-expr";
        case ATT_IS_DEFAULT: return "is-default";
        case ATT_IS_BIDIRECTIONAL: return "is-bidirectional";
        case ATT_IS_FORWARD_ARROW: return "is-forward-arrow";
        default: return 0;
    }
}

const char *ConnectionElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_SRC_MODULE: return srcModule.c_str();
        case ATT_SRC_MODULE_INDEX: return srcModuleIndex.c_str();
        case ATT_SRC_GATE: return srcGate.c_str();
        case ATT_SRC_GATE_PLUSPLUS: return boolToString(srcGatePlusplus);
        case ATT_SRC_GATE_INDEX: return srcGateIndex.c_str();
        case ATT_SRC_GATE_SUBG: return enumToString(srcGateSubg, subgate_vals, subgate_nums, subgate_n);
        case ATT_DEST_MODULE: return destModule.c_str();
        case ATT_DEST_MODULE_INDEX: return destModuleIndex.c_str();
        case ATT_DEST_GATE: return destGate.c_str();
        case ATT_DEST_GATE_PLUSPLUS: return boolToString(destGatePlusplus);
        case ATT_DEST_GATE_INDEX: return destGateIndex.c_str();
        case ATT_DEST_GATE_SUBG: return enumToString(destGateSubg, subgate_vals, subgate_nums, subgate_n);
        case ATT_NAME: return name.c_str();
        case ATT_TYPE: return type.c_str();
        case ATT_LIKE_TYPE: return likeType.c_str();
        case ATT_LIKE_EXPR: return likeExpr.c_str();
        case ATT_IS_DEFAULT: return boolToString(isDefault);
        case ATT_IS_BIDIRECTIONAL: return boolToString(isBidirectional);
        case ATT_IS_FORWARD_ARROW: return boolToString(isForwardArrow);
        default: return 0;
    }
}

void ConnectionElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_SRC_MODULE: srcModule = val; break;
        case ATT_SRC_MODULE_INDEX: srcModuleIndex = val; break;
        case ATT_SRC_GATE: srcGate = val; break;
        case ATT_SRC_GATE_PLUSPLUS: srcGatePlusplus = stringToBool(val); break;
        case ATT_SRC_GATE_INDEX: srcGateIndex = val; break;
        case ATT_SRC_GATE_SUBG: srcGateSubg = stringToEnum(val, subgate_vals, subgate_nums, subgate_n); break;
        case ATT_DEST_MODULE: destModule = val; break;
        case ATT_DEST_MODULE_INDEX: destModuleIndex = val; break;
        case ATT_DEST_GATE: destGate = val; break;
        case ATT_DEST_GATE_PLUSPLUS: destGatePlusplus = stringToBool(val); break;
        case ATT_DEST_GATE_INDEX: destGateIndex = val; break;
        case ATT_DEST_GATE_SUBG: destGateSubg = stringToEnum(val, subgate_vals, subgate_nums, subgate_n); break;
        case ATT_NAME: name = val; break;
        case ATT_TYPE: type = val; break;
        case ATT_LIKE_TYPE: likeType = val; break;
        case ATT_LIKE_EXPR: likeExpr = val; break;
        case ATT_IS_DEFAULT: isDefault = stringToBool(val); break;
        case ATT_IS_BIDIRECTIONAL: isBidirectional = stringToBool(val); break;
        case ATT_IS_FORWARD_ARROW: isForwardArrow = stringToBool(val); break;
        default: ;
    }
}

const char *ConnectionElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_SRC_MODULE: return "";
        case ATT_SRC_MODULE_INDEX: return "";
        case ATT_SRC_GATE: return nullptr;
        case ATT_SRC_GATE_PLUSPLUS: return "false";
        case ATT_SRC_GATE_INDEX: return "";
        case ATT_SRC_GATE_SUBG: return "";
        case ATT_DEST_MODULE: return "";
        case ATT_DEST_MODULE_INDEX: return "";
        case ATT_DEST_GATE: return nullptr;
        case ATT_DEST_GATE_PLUSPLUS: return "false";
        case ATT_DEST_GATE_INDEX: return "";
        case ATT_DEST_GATE_SUBG: return "";
        case ATT_NAME: return "";
        case ATT_TYPE: return "";
        case ATT_LIKE_TYPE: return "";
        case ATT_LIKE_EXPR: return "";
        case ATT_IS_DEFAULT: return "false";
        case ATT_IS_BIDIRECTIONAL: return "false";
        case ATT_IS_FORWARD_ARROW: return "true";
        default: return 0;
    }
}

ConnectionElement *ConnectionElement::dup() const
{
    ConnectionElement *element = new ConnectionElement();
    element->srcModule = this->srcModule;
    element->srcModuleIndex = this->srcModuleIndex;
    element->srcGate = this->srcGate;
    element->srcGatePlusplus = this->srcGatePlusplus;
    element->srcGateIndex = this->srcGateIndex;
    element->srcGateSubg = this->srcGateSubg;
    element->destModule = this->destModule;
    element->destModuleIndex = this->destModuleIndex;
    element->destGate = this->destGate;
    element->destGatePlusplus = this->destGatePlusplus;
    element->destGateIndex = this->destGateIndex;
    element->destGateSubg = this->destGateSubg;
    element->name = this->name;
    element->type = this->type;
    element->likeType = this->likeType;
    element->likeExpr = this->likeExpr;
    element->isDefault = this->isDefault;
    element->isBidirectional = this->isBidirectional;
    element->isForwardArrow = this->isForwardArrow;
    return element;
}

ConnectionElement *ConnectionElement::getNextConnectionSibling() const
{
    return static_cast<ConnectionElement *>(getNextSiblingWithTag(NED_CONNECTION));
}

CommentElement *ConnectionElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

ExpressionElement *ConnectionElement::getFirstExpressionChild() const
{
    return static_cast<ExpressionElement *>(getFirstChildWithTag(NED_EXPRESSION));
}

ParametersElement *ConnectionElement::getFirstParametersChild() const
{
    return static_cast<ParametersElement *>(getFirstChildWithTag(NED_PARAMETERS));
}

LoopElement *ConnectionElement::getFirstLoopChild() const
{
    return static_cast<LoopElement *>(getFirstChildWithTag(NED_LOOP));
}

ConditionElement *ConnectionElement::getFirstConditionChild() const
{
    return static_cast<ConditionElement *>(getFirstChildWithTag(NED_CONDITION));
}

ConnectionGroupElement::ConnectionGroupElement()
{
    applyDefaults();
}

ConnectionGroupElement::ConnectionGroupElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int ConnectionGroupElement::getNumAttributes() const
{
    return 0;
}

const char *ConnectionGroupElement::getAttributeName(int k) const
{
    switch (k) {
        default: return 0;
    }
}

const char *ConnectionGroupElement::getAttribute(int k) const
{
    switch (k) {
        default: return 0;
    }
}

void ConnectionGroupElement::setAttribute(int k, const char *val)
{
    switch (k) {
        default: ;
    }
}

const char *ConnectionGroupElement::getAttributeDefault(int k) const
{
    switch (k) {
        default: return 0;
    }
}

ConnectionGroupElement *ConnectionGroupElement::dup() const
{
    ConnectionGroupElement *element = new ConnectionGroupElement();
    return element;
}

ConnectionGroupElement *ConnectionGroupElement::getNextConnectionGroupSibling() const
{
    return static_cast<ConnectionGroupElement *>(getNextSiblingWithTag(NED_CONNECTION_GROUP));
}

CommentElement *ConnectionGroupElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

LoopElement *ConnectionGroupElement::getFirstLoopChild() const
{
    return static_cast<LoopElement *>(getFirstChildWithTag(NED_LOOP));
}

ConditionElement *ConnectionGroupElement::getFirstConditionChild() const
{
    return static_cast<ConditionElement *>(getFirstChildWithTag(NED_CONDITION));
}

ConnectionElement *ConnectionGroupElement::getFirstConnectionChild() const
{
    return static_cast<ConnectionElement *>(getFirstChildWithTag(NED_CONNECTION));
}

LoopElement::LoopElement()
{
    applyDefaults();
}

LoopElement::LoopElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int LoopElement::getNumAttributes() const
{
    return 3;
}

const char *LoopElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_PARAM_NAME: return "param-name";
        case ATT_FROM_VALUE: return "from-value";
        case ATT_TO_VALUE: return "to-value";
        default: return 0;
    }
}

const char *LoopElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_PARAM_NAME: return paramName.c_str();
        case ATT_FROM_VALUE: return fromValue.c_str();
        case ATT_TO_VALUE: return toValue.c_str();
        default: return 0;
    }
}

void LoopElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_PARAM_NAME: paramName = val; break;
        case ATT_FROM_VALUE: fromValue = val; break;
        case ATT_TO_VALUE: toValue = val; break;
        default: ;
    }
}

const char *LoopElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_PARAM_NAME: return nullptr;
        case ATT_FROM_VALUE: return "";
        case ATT_TO_VALUE: return "";
        default: return 0;
    }
}

LoopElement *LoopElement::dup() const
{
    LoopElement *element = new LoopElement();
    element->paramName = this->paramName;
    element->fromValue = this->fromValue;
    element->toValue = this->toValue;
    return element;
}

LoopElement *LoopElement::getNextLoopSibling() const
{
    return static_cast<LoopElement *>(getNextSiblingWithTag(NED_LOOP));
}

CommentElement *LoopElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

ExpressionElement *LoopElement::getFirstExpressionChild() const
{
    return static_cast<ExpressionElement *>(getFirstChildWithTag(NED_EXPRESSION));
}

ConditionElement::ConditionElement()
{
    applyDefaults();
}

ConditionElement::ConditionElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int ConditionElement::getNumAttributes() const
{
    return 1;
}

const char *ConditionElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_CONDITION: return "condition";
        default: return 0;
    }
}

const char *ConditionElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_CONDITION: return condition.c_str();
        default: return 0;
    }
}

void ConditionElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_CONDITION: condition = val; break;
        default: ;
    }
}

const char *ConditionElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_CONDITION: return "";
        default: return 0;
    }
}

ConditionElement *ConditionElement::dup() const
{
    ConditionElement *element = new ConditionElement();
    element->condition = this->condition;
    return element;
}

ConditionElement *ConditionElement::getNextConditionSibling() const
{
    return static_cast<ConditionElement *>(getNextSiblingWithTag(NED_CONDITION));
}

CommentElement *ConditionElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

ExpressionElement *ConditionElement::getFirstExpressionChild() const
{
    return static_cast<ExpressionElement *>(getFirstChildWithTag(NED_EXPRESSION));
}

ExpressionElement::ExpressionElement()
{
    applyDefaults();
}

ExpressionElement::ExpressionElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int ExpressionElement::getNumAttributes() const
{
    return 1;
}

const char *ExpressionElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_TARGET: return "target";
        default: return 0;
    }
}

const char *ExpressionElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_TARGET: return target.c_str();
        default: return 0;
    }
}

void ExpressionElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_TARGET: target = val; break;
        default: ;
    }
}

const char *ExpressionElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_TARGET: return "";
        default: return 0;
    }
}

ExpressionElement *ExpressionElement::dup() const
{
    ExpressionElement *element = new ExpressionElement();
    element->target = this->target;
    return element;
}

ExpressionElement *ExpressionElement::getNextExpressionSibling() const
{
    return static_cast<ExpressionElement *>(getNextSiblingWithTag(NED_EXPRESSION));
}

CommentElement *ExpressionElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

OperatorElement *ExpressionElement::getFirstOperatorChild() const
{
    return static_cast<OperatorElement *>(getFirstChildWithTag(NED_OPERATOR));
}

FunctionElement *ExpressionElement::getFirstFunctionChild() const
{
    return static_cast<FunctionElement *>(getFirstChildWithTag(NED_FUNCTION));
}

IdentElement *ExpressionElement::getFirstIdentChild() const
{
    return static_cast<IdentElement *>(getFirstChildWithTag(NED_IDENT));
}

LiteralElement *ExpressionElement::getFirstLiteralChild() const
{
    return static_cast<LiteralElement *>(getFirstChildWithTag(NED_LITERAL));
}

OperatorElement::OperatorElement()
{
    applyDefaults();
}

OperatorElement::OperatorElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int OperatorElement::getNumAttributes() const
{
    return 1;
}

const char *OperatorElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_NAME: return "name";
        default: return 0;
    }
}

const char *OperatorElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_NAME: return name.c_str();
        default: return 0;
    }
}

void OperatorElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_NAME: name = val; break;
        default: ;
    }
}

const char *OperatorElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_NAME: return nullptr;
        default: return 0;
    }
}

OperatorElement *OperatorElement::dup() const
{
    OperatorElement *element = new OperatorElement();
    element->name = this->name;
    return element;
}

OperatorElement *OperatorElement::getNextOperatorSibling() const
{
    return static_cast<OperatorElement *>(getNextSiblingWithTag(NED_OPERATOR));
}

CommentElement *OperatorElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

OperatorElement *OperatorElement::getFirstOperatorChild() const
{
    return static_cast<OperatorElement *>(getFirstChildWithTag(NED_OPERATOR));
}

FunctionElement *OperatorElement::getFirstFunctionChild() const
{
    return static_cast<FunctionElement *>(getFirstChildWithTag(NED_FUNCTION));
}

IdentElement *OperatorElement::getFirstIdentChild() const
{
    return static_cast<IdentElement *>(getFirstChildWithTag(NED_IDENT));
}

LiteralElement *OperatorElement::getFirstLiteralChild() const
{
    return static_cast<LiteralElement *>(getFirstChildWithTag(NED_LITERAL));
}

FunctionElement::FunctionElement()
{
    applyDefaults();
}

FunctionElement::FunctionElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int FunctionElement::getNumAttributes() const
{
    return 1;
}

const char *FunctionElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_NAME: return "name";
        default: return 0;
    }
}

const char *FunctionElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_NAME: return name.c_str();
        default: return 0;
    }
}

void FunctionElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_NAME: name = val; break;
        default: ;
    }
}

const char *FunctionElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_NAME: return nullptr;
        default: return 0;
    }
}

FunctionElement *FunctionElement::dup() const
{
    FunctionElement *element = new FunctionElement();
    element->name = this->name;
    return element;
}

FunctionElement *FunctionElement::getNextFunctionSibling() const
{
    return static_cast<FunctionElement *>(getNextSiblingWithTag(NED_FUNCTION));
}

CommentElement *FunctionElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

OperatorElement *FunctionElement::getFirstOperatorChild() const
{
    return static_cast<OperatorElement *>(getFirstChildWithTag(NED_OPERATOR));
}

FunctionElement *FunctionElement::getFirstFunctionChild() const
{
    return static_cast<FunctionElement *>(getFirstChildWithTag(NED_FUNCTION));
}

IdentElement *FunctionElement::getFirstIdentChild() const
{
    return static_cast<IdentElement *>(getFirstChildWithTag(NED_IDENT));
}

LiteralElement *FunctionElement::getFirstLiteralChild() const
{
    return static_cast<LiteralElement *>(getFirstChildWithTag(NED_LITERAL));
}

IdentElement::IdentElement()
{
    applyDefaults();
}

IdentElement::IdentElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int IdentElement::getNumAttributes() const
{
    return 2;
}

const char *IdentElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_MODULE: return "module";
        case ATT_NAME: return "name";
        default: return 0;
    }
}

const char *IdentElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_MODULE: return module.c_str();
        case ATT_NAME: return name.c_str();
        default: return 0;
    }
}

void IdentElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_MODULE: module = val; break;
        case ATT_NAME: name = val; break;
        default: ;
    }
}

const char *IdentElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_MODULE: return "";
        case ATT_NAME: return nullptr;
        default: return 0;
    }
}

IdentElement *IdentElement::dup() const
{
    IdentElement *element = new IdentElement();
    element->module = this->module;
    element->name = this->name;
    return element;
}

IdentElement *IdentElement::getNextIdentSibling() const
{
    return static_cast<IdentElement *>(getNextSiblingWithTag(NED_IDENT));
}

CommentElement *IdentElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

OperatorElement *IdentElement::getFirstOperatorChild() const
{
    return static_cast<OperatorElement *>(getFirstChildWithTag(NED_OPERATOR));
}

FunctionElement *IdentElement::getFirstFunctionChild() const
{
    return static_cast<FunctionElement *>(getFirstChildWithTag(NED_FUNCTION));
}

IdentElement *IdentElement::getFirstIdentChild() const
{
    return static_cast<IdentElement *>(getFirstChildWithTag(NED_IDENT));
}

LiteralElement *IdentElement::getFirstLiteralChild() const
{
    return static_cast<LiteralElement *>(getFirstChildWithTag(NED_LITERAL));
}

void LiteralElement::setType(int val)
{
    validateEnum(val, littype_vals, littype_nums, littype_n);
    type = val;
}

LiteralElement::LiteralElement()
{
    type = 0;
    applyDefaults();
}

LiteralElement::LiteralElement(ASTNode *parent) : ASTNode(parent)
{
    type = 0;
    applyDefaults();
}

int LiteralElement::getNumAttributes() const
{
    return 3;
}

const char *LiteralElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_TYPE: return "type";
        case ATT_TEXT: return "text";
        case ATT_VALUE: return "value";
        default: return 0;
    }
}

const char *LiteralElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_TYPE: return enumToString(type, littype_vals, littype_nums, littype_n);
        case ATT_TEXT: return text.c_str();
        case ATT_VALUE: return value.c_str();
        default: return 0;
    }
}

void LiteralElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_TYPE: type = stringToEnum(val, littype_vals, littype_nums, littype_n); break;
        case ATT_TEXT: text = val; break;
        case ATT_VALUE: value = val; break;
        default: ;
    }
}

const char *LiteralElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_TYPE: return nullptr;
        case ATT_TEXT: return "";
        case ATT_VALUE: return "";
        default: return 0;
    }
}

LiteralElement *LiteralElement::dup() const
{
    LiteralElement *element = new LiteralElement();
    element->type = this->type;
    element->text = this->text;
    element->value = this->value;
    return element;
}

LiteralElement *LiteralElement::getNextLiteralSibling() const
{
    return static_cast<LiteralElement *>(getNextSiblingWithTag(NED_LITERAL));
}

CommentElement *LiteralElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(NED_COMMENT));
}

UnknownElement::UnknownElement()
{
    applyDefaults();
}

UnknownElement::UnknownElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int UnknownElement::getNumAttributes() const
{
    return 1;
}

const char *UnknownElement::getAttributeName(int k) const
{
    switch (k) {
        case ATT_ELEMENT: return "element";
        default: return 0;
    }
}

const char *UnknownElement::getAttribute(int k) const
{
    switch (k) {
        case ATT_ELEMENT: return element.c_str();
        default: return 0;
    }
}

void UnknownElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case ATT_ELEMENT: element = val; break;
        default: ;
    }
}

const char *UnknownElement::getAttributeDefault(int k) const
{
    switch (k) {
        case ATT_ELEMENT: return nullptr;
        default: return 0;
    }
}

UnknownElement *UnknownElement::dup() const
{
    UnknownElement *element = new UnknownElement();
    element->element = this->element;
    return element;
}

UnknownElement *UnknownElement::getNextUnknownSibling() const
{
    return static_cast<UnknownElement *>(getNextSiblingWithTag(NED_UNKNOWN));
}

ASTNode *NedAstNodeFactory::createElementWithTag(const char *tagname)
{
    if (tagname[0]=='f' && !strcmp(tagname,"files"))  return new FilesElement();
    if (tagname[0]=='n' && !strcmp(tagname,"ned-file"))  return new NedFileElement();
    if (tagname[0]=='c' && !strcmp(tagname,"comment"))  return new CommentElement();
    if (tagname[0]=='p' && !strcmp(tagname,"package"))  return new PackageElement();
    if (tagname[0]=='i' && !strcmp(tagname,"import"))  return new ImportElement();
    if (tagname[0]=='p' && !strcmp(tagname,"property-decl"))  return new PropertyDeclElement();
    if (tagname[0]=='e' && !strcmp(tagname,"extends"))  return new ExtendsElement();
    if (tagname[0]=='i' && !strcmp(tagname,"interface-name"))  return new InterfaceNameElement();
    if (tagname[0]=='s' && !strcmp(tagname,"simple-module"))  return new SimpleModuleElement();
    if (tagname[0]=='m' && !strcmp(tagname,"module-interface"))  return new ModuleInterfaceElement();
    if (tagname[0]=='c' && !strcmp(tagname,"compound-module"))  return new CompoundModuleElement();
    if (tagname[0]=='c' && !strcmp(tagname,"channel-interface"))  return new ChannelInterfaceElement();
    if (tagname[0]=='c' && !strcmp(tagname,"channel"))  return new ChannelElement();
    if (tagname[0]=='p' && !strcmp(tagname,"parameters"))  return new ParametersElement();
    if (tagname[0]=='p' && !strcmp(tagname,"param"))  return new ParamElement();
    if (tagname[0]=='p' && !strcmp(tagname,"property"))  return new PropertyElement();
    if (tagname[0]=='p' && !strcmp(tagname,"property-key"))  return new PropertyKeyElement();
    if (tagname[0]=='g' && !strcmp(tagname,"gates"))  return new GatesElement();
    if (tagname[0]=='g' && !strcmp(tagname,"gate"))  return new GateElement();
    if (tagname[0]=='t' && !strcmp(tagname,"types"))  return new TypesElement();
    if (tagname[0]=='s' && !strcmp(tagname,"submodules"))  return new SubmodulesElement();
    if (tagname[0]=='s' && !strcmp(tagname,"submodule"))  return new SubmoduleElement();
    if (tagname[0]=='c' && !strcmp(tagname,"connections"))  return new ConnectionsElement();
    if (tagname[0]=='c' && !strcmp(tagname,"connection"))  return new ConnectionElement();
    if (tagname[0]=='c' && !strcmp(tagname,"connection-group"))  return new ConnectionGroupElement();
    if (tagname[0]=='l' && !strcmp(tagname,"loop"))  return new LoopElement();
    if (tagname[0]=='c' && !strcmp(tagname,"condition"))  return new ConditionElement();
    if (tagname[0]=='e' && !strcmp(tagname,"expression"))  return new ExpressionElement();
    if (tagname[0]=='o' && !strcmp(tagname,"operator"))  return new OperatorElement();
    if (tagname[0]=='f' && !strcmp(tagname,"function"))  return new FunctionElement();
    if (tagname[0]=='i' && !strcmp(tagname,"ident"))  return new IdentElement();
    if (tagname[0]=='l' && !strcmp(tagname,"literal"))  return new LiteralElement();
    if (tagname[0]=='u' && !strcmp(tagname,"unknown"))  return new UnknownElement();
    throw NedException("unknown tag '%s', cannot create object to represent it", tagname);
}

ASTNode *NedAstNodeFactory::createElementWithTag(int tagcode)
{
    switch (tagcode) {
        case NED_FILES: return new FilesElement();
        case NED_NED_FILE: return new NedFileElement();
        case NED_COMMENT: return new CommentElement();
        case NED_PACKAGE: return new PackageElement();
        case NED_IMPORT: return new ImportElement();
        case NED_PROPERTY_DECL: return new PropertyDeclElement();
        case NED_EXTENDS: return new ExtendsElement();
        case NED_INTERFACE_NAME: return new InterfaceNameElement();
        case NED_SIMPLE_MODULE: return new SimpleModuleElement();
        case NED_MODULE_INTERFACE: return new ModuleInterfaceElement();
        case NED_COMPOUND_MODULE: return new CompoundModuleElement();
        case NED_CHANNEL_INTERFACE: return new ChannelInterfaceElement();
        case NED_CHANNEL: return new ChannelElement();
        case NED_PARAMETERS: return new ParametersElement();
        case NED_PARAM: return new ParamElement();
        case NED_PROPERTY: return new PropertyElement();
        case NED_PROPERTY_KEY: return new PropertyKeyElement();
        case NED_GATES: return new GatesElement();
        case NED_GATE: return new GateElement();
        case NED_TYPES: return new TypesElement();
        case NED_SUBMODULES: return new SubmodulesElement();
        case NED_SUBMODULE: return new SubmoduleElement();
        case NED_CONNECTIONS: return new ConnectionsElement();
        case NED_CONNECTION: return new ConnectionElement();
        case NED_CONNECTION_GROUP: return new ConnectionGroupElement();
        case NED_LOOP: return new LoopElement();
        case NED_CONDITION: return new ConditionElement();
        case NED_EXPRESSION: return new ExpressionElement();
        case NED_OPERATOR: return new OperatorElement();
        case NED_FUNCTION: return new FunctionElement();
        case NED_IDENT: return new IdentElement();
        case NED_LITERAL: return new LiteralElement();
        case NED_UNKNOWN: return new UnknownElement();
    }
    throw NedException("unknown tag code %d, cannot create object to represent it", tagcode);
}

} // namespace nedxml
} // namespace omnetpp

