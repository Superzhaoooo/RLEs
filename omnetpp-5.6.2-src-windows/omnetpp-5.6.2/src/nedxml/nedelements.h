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


#ifndef __OMNETPP_NEDXML_NEDELEMENTS_H
#define __OMNETPP_NEDXML_NEDELEMENTS_H

#include "astnode.h"

namespace omnetpp {
namespace nedxml {

class FilesElement;
class NedFileElement;
class CommentElement;
class PackageElement;
class ImportElement;
class PropertyDeclElement;
class ExtendsElement;
class InterfaceNameElement;
class SimpleModuleElement;
class ModuleInterfaceElement;
class CompoundModuleElement;
class ChannelInterfaceElement;
class ChannelElement;
class ParametersElement;
class ParamElement;
class PropertyElement;
class PropertyKeyElement;
class GatesElement;
class GateElement;
class TypesElement;
class SubmodulesElement;
class SubmoduleElement;
class ConnectionsElement;
class ConnectionElement;
class ConnectionGroupElement;
class LoopElement;
class ConditionElement;
class ExpressionElement;
class OperatorElement;
class FunctionElement;
class IdentElement;
class LiteralElement;
class UnknownElement;


/**
 * Tag codes
 *
 * @ingroup Data
 */
enum NedTagCode {
    NED_NULL = 0,  // 0 is reserved
    NED_FILES,
    NED_NED_FILE,
    NED_COMMENT,
    NED_PACKAGE,
    NED_IMPORT,
    NED_PROPERTY_DECL,
    NED_EXTENDS,
    NED_INTERFACE_NAME,
    NED_SIMPLE_MODULE,
    NED_MODULE_INTERFACE,
    NED_COMPOUND_MODULE,
    NED_CHANNEL_INTERFACE,
    NED_CHANNEL,
    NED_PARAMETERS,
    NED_PARAM,
    NED_PROPERTY,
    NED_PROPERTY_KEY,
    NED_GATES,
    NED_GATE,
    NED_TYPES,
    NED_SUBMODULES,
    NED_SUBMODULE,
    NED_CONNECTIONS,
    NED_CONNECTION,
    NED_CONNECTION_GROUP,
    NED_LOOP,
    NED_CONDITION,
    NED_EXPRESSION,
    NED_OPERATOR,
    NED_FUNCTION,
    NED_IDENT,
    NED_LITERAL,
    NED_UNKNOWN,
};

// Note: zero *must* be a valid value for all enums, because that gets set in the ctor if there's not default
enum {GATETYPE_NONE, GATETYPE_INPUT, GATETYPE_OUTPUT, GATETYPE_INOUT};
enum {PARTYPE_NONE, PARTYPE_DOUBLE, PARTYPE_INT, PARTYPE_STRING, PARTYPE_BOOL, PARTYPE_XML};
enum {LIT_DOUBLE, LIT_QUANTITY, LIT_INT, LIT_STRING, LIT_BOOL, LIT_SPEC};
enum {SUBGATE_NONE, SUBGATE_I, SUBGATE_O};

/**
 * @brief GENERATED CLASS. Represents the \<files\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT files (ned-file*)\>
 *
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API FilesElement : public ASTNode
{
  private:
  public:
    /** @name Constructors, destructor */
    //@{
    FilesElement();
    FilesElement(ASTNode *parent);
    virtual ~FilesElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "files";}
    virtual int getTagCode() const override {return NED_FILES;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual FilesElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{

    virtual FilesElement *getNextFilesSibling() const;
    virtual NedFileElement *getFirstNedFileChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<ned-file\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT ned-file (comment*, (package|import|property-decl|property|
 *                     simple-module|compound-module|module-interface|
 *                     channel|channel-interface)*)\>
 * \<!ATTLIST ned-file
 *      filename           CDATA     \#REQUIRED
 *      version            CDATA     "2"\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API NedFileElement : public ASTNode
{
  public:
    enum { ATT_FILENAME, ATT_VERSION, };
  private:
    std::string filename;
    std::string version;
  public:
    /** @name Constructors, destructor */
    //@{
    NedFileElement();
    NedFileElement(ASTNode *parent);
    virtual ~NedFileElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "ned-file";}
    virtual int getTagCode() const override {return NED_NED_FILE;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual NedFileElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getFilename() const  {return filename.c_str();}
    void setFilename(const char * val)  {filename = val;}
    const char * getVersion() const  {return version.c_str();}
    void setVersion(const char * val)  {version = val;}

    virtual NedFileElement *getNextNedFileSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual PackageElement *getFirstPackageChild() const;
    virtual ImportElement *getFirstImportChild() const;
    virtual PropertyDeclElement *getFirstPropertyDeclChild() const;
    virtual PropertyElement *getFirstPropertyChild() const;
    virtual SimpleModuleElement *getFirstSimpleModuleChild() const;
    virtual CompoundModuleElement *getFirstCompoundModuleChild() const;
    virtual ModuleInterfaceElement *getFirstModuleInterfaceChild() const;
    virtual ChannelElement *getFirstChannelChild() const;
    virtual ChannelInterfaceElement *getFirstChannelInterfaceChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<comment\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT comment EMPTY\>
 * \<!ATTLIST comment
 *      locid              NMTOKEN   \#REQUIRED
 *      content            CDATA     \#IMPLIED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API CommentElement : public ASTNode
{
  public:
    enum { ATT_LOCID, ATT_CONTENT, };
  private:
    std::string locid;
    std::string content;
  public:
    /** @name Constructors, destructor */
    //@{
    CommentElement();
    CommentElement(ASTNode *parent);
    virtual ~CommentElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "comment";}
    virtual int getTagCode() const override {return NED_COMMENT;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual CommentElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getLocid() const  {return locid.c_str();}
    void setLocid(const char * val)  {locid = val;}
    const char * getContent() const  {return content.c_str();}
    void setContent(const char * val)  {content = val;}

    virtual CommentElement *getNextCommentSibling() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<package\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT package (comment*)\>
 * \<!ATTLIST package
 *      name               CDATA     \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API PackageElement : public ASTNode
{
  public:
    enum { ATT_NAME, };
  private:
    std::string name;
  public:
    /** @name Constructors, destructor */
    //@{
    PackageElement();
    PackageElement(ASTNode *parent);
    virtual ~PackageElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "package";}
    virtual int getTagCode() const override {return NED_PACKAGE;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual PackageElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}

    virtual PackageElement *getNextPackageSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<import\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT import (comment*)\>
 * \<!ATTLIST import
 *      import-spec        CDATA     \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API ImportElement : public ASTNode
{
  public:
    enum { ATT_IMPORT_SPEC, };
  private:
    std::string importSpec;
  public:
    /** @name Constructors, destructor */
    //@{
    ImportElement();
    ImportElement(ASTNode *parent);
    virtual ~ImportElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "import";}
    virtual int getTagCode() const override {return NED_IMPORT;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual ImportElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getImportSpec() const  {return importSpec.c_str();}
    void setImportSpec(const char * val)  {importSpec = val;}

    virtual ImportElement *getNextImportSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<property-decl\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT property-decl (comment*, property-key*, property*)\>
 * \<!ATTLIST property-decl
 *      name               CDATA     \#REQUIRED
 *      is-array           (true|false) "false"\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API PropertyDeclElement : public ASTNode
{
  public:
    enum { ATT_NAME, ATT_IS_ARRAY, };
  private:
    std::string name;
    bool isArray;
  public:
    /** @name Constructors, destructor */
    //@{
    PropertyDeclElement();
    PropertyDeclElement(ASTNode *parent);
    virtual ~PropertyDeclElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "property-decl";}
    virtual int getTagCode() const override {return NED_PROPERTY_DECL;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual PropertyDeclElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}
    bool getIsArray() const  {return isArray;}
    void setIsArray(bool val)  {isArray = val;}

    virtual PropertyDeclElement *getNextPropertyDeclSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual PropertyKeyElement *getFirstPropertyKeyChild() const;
    virtual PropertyElement *getFirstPropertyChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<extends\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT extends (comment*)\>
 * \<!ATTLIST extends
 *      name               CDATA     \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API ExtendsElement : public ASTNode
{
  public:
    enum { ATT_NAME, };
  private:
    std::string name;
  public:
    /** @name Constructors, destructor */
    //@{
    ExtendsElement();
    ExtendsElement(ASTNode *parent);
    virtual ~ExtendsElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "extends";}
    virtual int getTagCode() const override {return NED_EXTENDS;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual ExtendsElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}

    virtual ExtendsElement *getNextExtendsSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<interface-name\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT interface-name (comment*)\>
 * \<!ATTLIST interface-name
 *      name               CDATA     \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API InterfaceNameElement : public ASTNode
{
  public:
    enum { ATT_NAME, };
  private:
    std::string name;
  public:
    /** @name Constructors, destructor */
    //@{
    InterfaceNameElement();
    InterfaceNameElement(ASTNode *parent);
    virtual ~InterfaceNameElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "interface-name";}
    virtual int getTagCode() const override {return NED_INTERFACE_NAME;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual InterfaceNameElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}

    virtual InterfaceNameElement *getNextInterfaceNameSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<simple-module\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT simple-module (comment*, extends?, interface-name*, parameters?, gates?)\>
 * \<!ATTLIST simple-module
 *      name               NMTOKEN   \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API SimpleModuleElement : public ASTNode
{
  public:
    enum { ATT_NAME, };
  private:
    std::string name;
  public:
    /** @name Constructors, destructor */
    //@{
    SimpleModuleElement();
    SimpleModuleElement(ASTNode *parent);
    virtual ~SimpleModuleElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "simple-module";}
    virtual int getTagCode() const override {return NED_SIMPLE_MODULE;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual SimpleModuleElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}

    virtual SimpleModuleElement *getNextSimpleModuleSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual ExtendsElement *getFirstExtendsChild() const;
    virtual InterfaceNameElement *getFirstInterfaceNameChild() const;
    virtual ParametersElement *getFirstParametersChild() const;
    virtual GatesElement *getFirstGatesChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<module-interface\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT module-interface (comment*, extends*, parameters?, gates?)\>
 * \<!ATTLIST module-interface
 *      name               NMTOKEN   \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API ModuleInterfaceElement : public ASTNode
{
  public:
    enum { ATT_NAME, };
  private:
    std::string name;
  public:
    /** @name Constructors, destructor */
    //@{
    ModuleInterfaceElement();
    ModuleInterfaceElement(ASTNode *parent);
    virtual ~ModuleInterfaceElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "module-interface";}
    virtual int getTagCode() const override {return NED_MODULE_INTERFACE;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual ModuleInterfaceElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}

    virtual ModuleInterfaceElement *getNextModuleInterfaceSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual ExtendsElement *getFirstExtendsChild() const;
    virtual ParametersElement *getFirstParametersChild() const;
    virtual GatesElement *getFirstGatesChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<compound-module\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT compound-module (comment*, extends?, interface-name*,
 *                            parameters?, gates?, types?, submodules?, connections?)\>
 * \<!ATTLIST compound-module
 *      name               NMTOKEN   \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API CompoundModuleElement : public ASTNode
{
  public:
    enum { ATT_NAME, };
  private:
    std::string name;
  public:
    /** @name Constructors, destructor */
    //@{
    CompoundModuleElement();
    CompoundModuleElement(ASTNode *parent);
    virtual ~CompoundModuleElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "compound-module";}
    virtual int getTagCode() const override {return NED_COMPOUND_MODULE;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual CompoundModuleElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}

    virtual CompoundModuleElement *getNextCompoundModuleSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual ExtendsElement *getFirstExtendsChild() const;
    virtual InterfaceNameElement *getFirstInterfaceNameChild() const;
    virtual ParametersElement *getFirstParametersChild() const;
    virtual GatesElement *getFirstGatesChild() const;
    virtual TypesElement *getFirstTypesChild() const;
    virtual SubmodulesElement *getFirstSubmodulesChild() const;
    virtual ConnectionsElement *getFirstConnectionsChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<channel-interface\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT channel-interface (comment*, extends*, parameters?)\>
 * \<!ATTLIST channel-interface
 *      name                NMTOKEN   \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API ChannelInterfaceElement : public ASTNode
{
  public:
    enum { ATT_NAME, };
  private:
    std::string name;
  public:
    /** @name Constructors, destructor */
    //@{
    ChannelInterfaceElement();
    ChannelInterfaceElement(ASTNode *parent);
    virtual ~ChannelInterfaceElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "channel-interface";}
    virtual int getTagCode() const override {return NED_CHANNEL_INTERFACE;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual ChannelInterfaceElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}

    virtual ChannelInterfaceElement *getNextChannelInterfaceSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual ExtendsElement *getFirstExtendsChild() const;
    virtual ParametersElement *getFirstParametersChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<channel\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT channel (comment*, extends?, interface-name*, parameters?)\>
 * \<!ATTLIST channel
 *      name                NMTOKEN   \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API ChannelElement : public ASTNode
{
  public:
    enum { ATT_NAME, };
  private:
    std::string name;
  public:
    /** @name Constructors, destructor */
    //@{
    ChannelElement();
    ChannelElement(ASTNode *parent);
    virtual ~ChannelElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "channel";}
    virtual int getTagCode() const override {return NED_CHANNEL;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual ChannelElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}

    virtual ChannelElement *getNextChannelSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual ExtendsElement *getFirstExtendsChild() const;
    virtual InterfaceNameElement *getFirstInterfaceNameChild() const;
    virtual ParametersElement *getFirstParametersChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<parameters\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT parameters (comment*, (property|param)*)\>
 * \<!ATTLIST parameters
 *     is-implicit         (true|false)  "false"\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API ParametersElement : public ASTNode
{
  public:
    enum { ATT_IS_IMPLICIT, };
  private:
    bool isImplicit;
  public:
    /** @name Constructors, destructor */
    //@{
    ParametersElement();
    ParametersElement(ASTNode *parent);
    virtual ~ParametersElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "parameters";}
    virtual int getTagCode() const override {return NED_PARAMETERS;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual ParametersElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    bool getIsImplicit() const  {return isImplicit;}
    void setIsImplicit(bool val)  {isImplicit = val;}

    virtual ParametersElement *getNextParametersSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual PropertyElement *getFirstPropertyChild() const;
    virtual ParamElement *getFirstParamChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<param\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT param (comment*, expression?, property*)\>
 * \<!ATTLIST param
 *      type               (double|int|string|bool|xml) \#IMPLIED
 *      is-volatile        (true|false)  "false"
 *      name               CDATA     \#REQUIRED
 *      value              CDATA     \#IMPLIED
 *      is-pattern         (true|false)  "false"
 *      is-default         (true|false)  "false"\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API ParamElement : public ASTNode
{
  public:
    enum { ATT_TYPE, ATT_IS_VOLATILE, ATT_NAME, ATT_VALUE, ATT_IS_PATTERN, ATT_IS_DEFAULT, };
  private:
    int type;
    bool isVolatile;
    std::string name;
    std::string value;
    bool isPattern;
    bool isDefault;
  public:
    /** @name Constructors, destructor */
    //@{
    ParamElement();
    ParamElement(ASTNode *parent);
    virtual ~ParamElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "param";}
    virtual int getTagCode() const override {return NED_PARAM;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual ParamElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    int getType() const  {return type;}
    void setType(int val);
    bool getIsVolatile() const  {return isVolatile;}
    void setIsVolatile(bool val)  {isVolatile = val;}
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}
    const char * getValue() const  {return value.c_str();}
    void setValue(const char * val)  {value = val;}
    bool getIsPattern() const  {return isPattern;}
    void setIsPattern(bool val)  {isPattern = val;}
    bool getIsDefault() const  {return isDefault;}
    void setIsDefault(bool val)  {isDefault = val;}

    virtual ParamElement *getNextParamSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual ExpressionElement *getFirstExpressionChild() const;
    virtual PropertyElement *getFirstPropertyChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<property\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT property (comment*, property-key*)\>
 * \<!ATTLIST property
 *      is-implicit        (true|false) "false"
 *      name               CDATA     \#REQUIRED
 *      index              CDATA     \#IMPLIED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API PropertyElement : public ASTNode
{
  public:
    enum { ATT_IS_IMPLICIT, ATT_NAME, ATT_INDEX, };
  private:
    bool isImplicit;
    std::string name;
    std::string index;
  public:
    /** @name Constructors, destructor */
    //@{
    PropertyElement();
    PropertyElement(ASTNode *parent);
    virtual ~PropertyElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "property";}
    virtual int getTagCode() const override {return NED_PROPERTY;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual PropertyElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    bool getIsImplicit() const  {return isImplicit;}
    void setIsImplicit(bool val)  {isImplicit = val;}
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}
    const char * getIndex() const  {return index.c_str();}
    void setIndex(const char * val)  {index = val;}

    virtual PropertyElement *getNextPropertySibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual PropertyKeyElement *getFirstPropertyKeyChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<property-key\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT property-key (comment*, literal*)\>
 * \<!ATTLIST property-key
 *      name               CDATA     \#IMPLIED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API PropertyKeyElement : public ASTNode
{
  public:
    enum { ATT_NAME, };
  private:
    std::string name;
  public:
    /** @name Constructors, destructor */
    //@{
    PropertyKeyElement();
    PropertyKeyElement(ASTNode *parent);
    virtual ~PropertyKeyElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "property-key";}
    virtual int getTagCode() const override {return NED_PROPERTY_KEY;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual PropertyKeyElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}

    virtual PropertyKeyElement *getNextPropertyKeySibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual LiteralElement *getFirstLiteralChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<gates\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT gates (comment*, gate*)\>
 *
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API GatesElement : public ASTNode
{
  private:
  public:
    /** @name Constructors, destructor */
    //@{
    GatesElement();
    GatesElement(ASTNode *parent);
    virtual ~GatesElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "gates";}
    virtual int getTagCode() const override {return NED_GATES;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual GatesElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{

    virtual GatesElement *getNextGatesSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual GateElement *getFirstGateChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<gate\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT gate (comment*, expression?, property*)\>
 * \<!ATTLIST gate
 *      name               NMTOKEN   \#REQUIRED
 *      type               (input|output|inout) \#IMPLIED
 *      is-vector          (true|false) "false"
 *      vector-size        CDATA     \#IMPLIED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API GateElement : public ASTNode
{
  public:
    enum { ATT_NAME, ATT_TYPE, ATT_IS_VECTOR, ATT_VECTOR_SIZE, };
  private:
    std::string name;
    int type;
    bool isVector;
    std::string vectorSize;
  public:
    /** @name Constructors, destructor */
    //@{
    GateElement();
    GateElement(ASTNode *parent);
    virtual ~GateElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "gate";}
    virtual int getTagCode() const override {return NED_GATE;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual GateElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}
    int getType() const  {return type;}
    void setType(int val);
    bool getIsVector() const  {return isVector;}
    void setIsVector(bool val)  {isVector = val;}
    const char * getVectorSize() const  {return vectorSize.c_str();}
    void setVectorSize(const char * val)  {vectorSize = val;}

    virtual GateElement *getNextGateSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual ExpressionElement *getFirstExpressionChild() const;
    virtual PropertyElement *getFirstPropertyChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<types\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT types (comment*, (channel|channel-interface|simple-module|
 *                                compound-module|module-interface)*)\>
 *
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API TypesElement : public ASTNode
{
  private:
  public:
    /** @name Constructors, destructor */
    //@{
    TypesElement();
    TypesElement(ASTNode *parent);
    virtual ~TypesElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "types";}
    virtual int getTagCode() const override {return NED_TYPES;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual TypesElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{

    virtual TypesElement *getNextTypesSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual ChannelElement *getFirstChannelChild() const;
    virtual ChannelInterfaceElement *getFirstChannelInterfaceChild() const;
    virtual SimpleModuleElement *getFirstSimpleModuleChild() const;
    virtual CompoundModuleElement *getFirstCompoundModuleChild() const;
    virtual ModuleInterfaceElement *getFirstModuleInterfaceChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<submodules\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT submodules (comment*, submodule*)\>
 *
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API SubmodulesElement : public ASTNode
{
  private:
  public:
    /** @name Constructors, destructor */
    //@{
    SubmodulesElement();
    SubmodulesElement(ASTNode *parent);
    virtual ~SubmodulesElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "submodules";}
    virtual int getTagCode() const override {return NED_SUBMODULES;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual SubmodulesElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{

    virtual SubmodulesElement *getNextSubmodulesSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual SubmoduleElement *getFirstSubmoduleChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<submodule\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT submodule (comment*, expression*, condition?, parameters?, gates?)\>
 * \<!ATTLIST submodule
 *      name               NMTOKEN   \#REQUIRED
 *      type               CDATA     \#IMPLIED
 *      like-type          CDATA     \#IMPLIED
 *      like-expr          CDATA     \#IMPLIED
 *      is-default         (true|false) "false"
 *      vector-size        CDATA     \#IMPLIED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API SubmoduleElement : public ASTNode
{
  public:
    enum { ATT_NAME, ATT_TYPE, ATT_LIKE_TYPE, ATT_LIKE_EXPR, ATT_IS_DEFAULT, ATT_VECTOR_SIZE, };
  private:
    std::string name;
    std::string type;
    std::string likeType;
    std::string likeExpr;
    bool isDefault;
    std::string vectorSize;
  public:
    /** @name Constructors, destructor */
    //@{
    SubmoduleElement();
    SubmoduleElement(ASTNode *parent);
    virtual ~SubmoduleElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "submodule";}
    virtual int getTagCode() const override {return NED_SUBMODULE;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual SubmoduleElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}
    const char * getType() const  {return type.c_str();}
    void setType(const char * val)  {type = val;}
    const char * getLikeType() const  {return likeType.c_str();}
    void setLikeType(const char * val)  {likeType = val;}
    const char * getLikeExpr() const  {return likeExpr.c_str();}
    void setLikeExpr(const char * val)  {likeExpr = val;}
    bool getIsDefault() const  {return isDefault;}
    void setIsDefault(bool val)  {isDefault = val;}
    const char * getVectorSize() const  {return vectorSize.c_str();}
    void setVectorSize(const char * val)  {vectorSize = val;}

    virtual SubmoduleElement *getNextSubmoduleSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual ExpressionElement *getFirstExpressionChild() const;
    virtual ConditionElement *getFirstConditionChild() const;
    virtual ParametersElement *getFirstParametersChild() const;
    virtual GatesElement *getFirstGatesChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<connections\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT connections (comment*, (connection|connection-group)*)\>
 * \<!ATTLIST connections
 *      allow-unconnected (true|false) "false"\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API ConnectionsElement : public ASTNode
{
  public:
    enum { ATT_ALLOW_UNCONNECTED, };
  private:
    bool allowUnconnected;
  public:
    /** @name Constructors, destructor */
    //@{
    ConnectionsElement();
    ConnectionsElement(ASTNode *parent);
    virtual ~ConnectionsElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "connections";}
    virtual int getTagCode() const override {return NED_CONNECTIONS;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual ConnectionsElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    bool getAllowUnconnected() const  {return allowUnconnected;}
    void setAllowUnconnected(bool val)  {allowUnconnected = val;}

    virtual ConnectionsElement *getNextConnectionsSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual ConnectionElement *getFirstConnectionChild() const;
    virtual ConnectionGroupElement *getFirstConnectionGroupChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<connection\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT connection (comment*, expression*, parameters?, (loop|condition)*)\>
 * \<!ATTLIST connection
 *      src-module          NMTOKEN   \#IMPLIED
 *      src-module-index    CDATA     \#IMPLIED
 *      src-gate            NMTOKEN   \#REQUIRED
 *      src-gate-plusplus  (true|false) "false"
 *      src-gate-index      CDATA     \#IMPLIED
 *      src-gate-subg       (i|o)     \#IMPLIED
 *      dest-module         NMTOKEN   \#IMPLIED
 *      dest-module-index   CDATA     \#IMPLIED
 *      dest-gate           NMTOKEN   \#REQUIRED
 *      dest-gate-plusplus (true|false) "false"
 *      dest-gate-index     CDATA     \#IMPLIED
 *      dest-gate-subg      (i|o)     \#IMPLIED
 *      name                NMTOKEN   \#IMPLIED
 *      type                CDATA     \#IMPLIED
 *      like-type           CDATA     \#IMPLIED
 *      like-expr           CDATA     \#IMPLIED
 *      is-default         (true|false) "false"
 *      is-bidirectional   (true|false) "false"
 *      is-forward-arrow   (true|false) "true"\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API ConnectionElement : public ASTNode
{
  public:
    enum { ATT_SRC_MODULE, ATT_SRC_MODULE_INDEX, ATT_SRC_GATE, ATT_SRC_GATE_PLUSPLUS, ATT_SRC_GATE_INDEX, ATT_SRC_GATE_SUBG, ATT_DEST_MODULE, ATT_DEST_MODULE_INDEX, ATT_DEST_GATE, ATT_DEST_GATE_PLUSPLUS, ATT_DEST_GATE_INDEX, ATT_DEST_GATE_SUBG, ATT_NAME, ATT_TYPE, ATT_LIKE_TYPE, ATT_LIKE_EXPR, ATT_IS_DEFAULT, ATT_IS_BIDIRECTIONAL, ATT_IS_FORWARD_ARROW, };
  private:
    std::string srcModule;
    std::string srcModuleIndex;
    std::string srcGate;
    bool srcGatePlusplus;
    std::string srcGateIndex;
    int srcGateSubg;
    std::string destModule;
    std::string destModuleIndex;
    std::string destGate;
    bool destGatePlusplus;
    std::string destGateIndex;
    int destGateSubg;
    std::string name;
    std::string type;
    std::string likeType;
    std::string likeExpr;
    bool isDefault;
    bool isBidirectional;
    bool isForwardArrow;
  public:
    /** @name Constructors, destructor */
    //@{
    ConnectionElement();
    ConnectionElement(ASTNode *parent);
    virtual ~ConnectionElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "connection";}
    virtual int getTagCode() const override {return NED_CONNECTION;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual ConnectionElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getSrcModule() const  {return srcModule.c_str();}
    void setSrcModule(const char * val)  {srcModule = val;}
    const char * getSrcModuleIndex() const  {return srcModuleIndex.c_str();}
    void setSrcModuleIndex(const char * val)  {srcModuleIndex = val;}
    const char * getSrcGate() const  {return srcGate.c_str();}
    void setSrcGate(const char * val)  {srcGate = val;}
    bool getSrcGatePlusplus() const  {return srcGatePlusplus;}
    void setSrcGatePlusplus(bool val)  {srcGatePlusplus = val;}
    const char * getSrcGateIndex() const  {return srcGateIndex.c_str();}
    void setSrcGateIndex(const char * val)  {srcGateIndex = val;}
    int getSrcGateSubg() const  {return srcGateSubg;}
    void setSrcGateSubg(int val);
    const char * getDestModule() const  {return destModule.c_str();}
    void setDestModule(const char * val)  {destModule = val;}
    const char * getDestModuleIndex() const  {return destModuleIndex.c_str();}
    void setDestModuleIndex(const char * val)  {destModuleIndex = val;}
    const char * getDestGate() const  {return destGate.c_str();}
    void setDestGate(const char * val)  {destGate = val;}
    bool getDestGatePlusplus() const  {return destGatePlusplus;}
    void setDestGatePlusplus(bool val)  {destGatePlusplus = val;}
    const char * getDestGateIndex() const  {return destGateIndex.c_str();}
    void setDestGateIndex(const char * val)  {destGateIndex = val;}
    int getDestGateSubg() const  {return destGateSubg;}
    void setDestGateSubg(int val);
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}
    const char * getType() const  {return type.c_str();}
    void setType(const char * val)  {type = val;}
    const char * getLikeType() const  {return likeType.c_str();}
    void setLikeType(const char * val)  {likeType = val;}
    const char * getLikeExpr() const  {return likeExpr.c_str();}
    void setLikeExpr(const char * val)  {likeExpr = val;}
    bool getIsDefault() const  {return isDefault;}
    void setIsDefault(bool val)  {isDefault = val;}
    bool getIsBidirectional() const  {return isBidirectional;}
    void setIsBidirectional(bool val)  {isBidirectional = val;}
    bool getIsForwardArrow() const  {return isForwardArrow;}
    void setIsForwardArrow(bool val)  {isForwardArrow = val;}

    virtual ConnectionElement *getNextConnectionSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual ExpressionElement *getFirstExpressionChild() const;
    virtual ParametersElement *getFirstParametersChild() const;
    virtual LoopElement *getFirstLoopChild() const;
    virtual ConditionElement *getFirstConditionChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<connection-group\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT connection-group (comment*, (loop|condition)*, connection*)\>
 *
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API ConnectionGroupElement : public ASTNode
{
  private:
  public:
    /** @name Constructors, destructor */
    //@{
    ConnectionGroupElement();
    ConnectionGroupElement(ASTNode *parent);
    virtual ~ConnectionGroupElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "connection-group";}
    virtual int getTagCode() const override {return NED_CONNECTION_GROUP;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual ConnectionGroupElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{

    virtual ConnectionGroupElement *getNextConnectionGroupSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual LoopElement *getFirstLoopChild() const;
    virtual ConditionElement *getFirstConditionChild() const;
    virtual ConnectionElement *getFirstConnectionChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<loop\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT loop (comment*, expression*)\>
 * \<!ATTLIST loop
 *      param-name          NMTOKEN   \#REQUIRED
 *      from-value          CDATA     \#IMPLIED
 *      to-value            CDATA     \#IMPLIED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API LoopElement : public ASTNode
{
  public:
    enum { ATT_PARAM_NAME, ATT_FROM_VALUE, ATT_TO_VALUE, };
  private:
    std::string paramName;
    std::string fromValue;
    std::string toValue;
  public:
    /** @name Constructors, destructor */
    //@{
    LoopElement();
    LoopElement(ASTNode *parent);
    virtual ~LoopElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "loop";}
    virtual int getTagCode() const override {return NED_LOOP;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual LoopElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getParamName() const  {return paramName.c_str();}
    void setParamName(const char * val)  {paramName = val;}
    const char * getFromValue() const  {return fromValue.c_str();}
    void setFromValue(const char * val)  {fromValue = val;}
    const char * getToValue() const  {return toValue.c_str();}
    void setToValue(const char * val)  {toValue = val;}

    virtual LoopElement *getNextLoopSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual ExpressionElement *getFirstExpressionChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<condition\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT condition (comment*, expression?)\>
 * \<!ATTLIST condition
 *      condition           CDATA     \#IMPLIED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API ConditionElement : public ASTNode
{
  public:
    enum { ATT_CONDITION, };
  private:
    std::string condition;
  public:
    /** @name Constructors, destructor */
    //@{
    ConditionElement();
    ConditionElement(ASTNode *parent);
    virtual ~ConditionElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "condition";}
    virtual int getTagCode() const override {return NED_CONDITION;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual ConditionElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getCondition() const  {return condition.c_str();}
    void setCondition(const char * val)  {condition = val;}

    virtual ConditionElement *getNextConditionSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual ExpressionElement *getFirstExpressionChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<expression\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT expression (comment*, (operator|function|ident|literal))\>
 * \<!ATTLIST expression
 *      target              CDATA     \#IMPLIED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API ExpressionElement : public ASTNode
{
  public:
    enum { ATT_TARGET, };
  private:
    std::string target;
  public:
    /** @name Constructors, destructor */
    //@{
    ExpressionElement();
    ExpressionElement(ASTNode *parent);
    virtual ~ExpressionElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "expression";}
    virtual int getTagCode() const override {return NED_EXPRESSION;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual ExpressionElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getTarget() const  {return target.c_str();}
    void setTarget(const char * val)  {target = val;}

    virtual ExpressionElement *getNextExpressionSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual OperatorElement *getFirstOperatorChild() const;
    virtual FunctionElement *getFirstFunctionChild() const;
    virtual IdentElement *getFirstIdentChild() const;
    virtual LiteralElement *getFirstLiteralChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<operator\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT operator (comment*, (operator|function|ident|literal)+)\>
 * \<!ATTLIST operator
 *      name                CDATA     \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API OperatorElement : public ASTNode
{
  public:
    enum { ATT_NAME, };
  private:
    std::string name;
  public:
    /** @name Constructors, destructor */
    //@{
    OperatorElement();
    OperatorElement(ASTNode *parent);
    virtual ~OperatorElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "operator";}
    virtual int getTagCode() const override {return NED_OPERATOR;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual OperatorElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}

    virtual OperatorElement *getNextOperatorSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual OperatorElement *getFirstOperatorChild() const;
    virtual FunctionElement *getFirstFunctionChild() const;
    virtual IdentElement *getFirstIdentChild() const;
    virtual LiteralElement *getFirstLiteralChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<function\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT function (comment*, (operator|function|ident|literal)*)\>
 * \<!ATTLIST function
 *      name                NMTOKEN   \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API FunctionElement : public ASTNode
{
  public:
    enum { ATT_NAME, };
  private:
    std::string name;
  public:
    /** @name Constructors, destructor */
    //@{
    FunctionElement();
    FunctionElement(ASTNode *parent);
    virtual ~FunctionElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "function";}
    virtual int getTagCode() const override {return NED_FUNCTION;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual FunctionElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}

    virtual FunctionElement *getNextFunctionSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual OperatorElement *getFirstOperatorChild() const;
    virtual FunctionElement *getFirstFunctionChild() const;
    virtual IdentElement *getFirstIdentChild() const;
    virtual LiteralElement *getFirstLiteralChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<ident\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT ident (comment*, (operator|function|ident|literal)?)\>
 * \<!ATTLIST ident
 *      module              CDATA     \#IMPLIED
 *      name                NMTOKEN   \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API IdentElement : public ASTNode
{
  public:
    enum { ATT_MODULE, ATT_NAME, };
  private:
    std::string module;
    std::string name;
  public:
    /** @name Constructors, destructor */
    //@{
    IdentElement();
    IdentElement(ASTNode *parent);
    virtual ~IdentElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "ident";}
    virtual int getTagCode() const override {return NED_IDENT;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual IdentElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getModule() const  {return module.c_str();}
    void setModule(const char * val)  {module = val;}
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}

    virtual IdentElement *getNextIdentSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual OperatorElement *getFirstOperatorChild() const;
    virtual FunctionElement *getFirstFunctionChild() const;
    virtual IdentElement *getFirstIdentChild() const;
    virtual LiteralElement *getFirstLiteralChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<literal\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT literal (comment*)\>
 * \<!ATTLIST literal
 *      type  (double|quantity|int|bool|string|spec)  \#REQUIRED
 *      text                CDATA     \#IMPLIED
 *      value               CDATA     \#IMPLIED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API LiteralElement : public ASTNode
{
  public:
    enum { ATT_TYPE, ATT_TEXT, ATT_VALUE, };
  private:
    int type;
    std::string text;
    std::string value;
  public:
    /** @name Constructors, destructor */
    //@{
    LiteralElement();
    LiteralElement(ASTNode *parent);
    virtual ~LiteralElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "literal";}
    virtual int getTagCode() const override {return NED_LITERAL;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual LiteralElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    int getType() const  {return type;}
    void setType(int val);
    const char * getText() const  {return text.c_str();}
    void setText(const char * val)  {text = val;}
    const char * getValue() const  {return value.c_str();}
    void setValue(const char * val)  {value = val;}

    virtual LiteralElement *getNextLiteralSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<unknown\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT unknown        ANY\>
 * \<!ATTLIST unknown
 *      element             CDATA     \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API UnknownElement : public ASTNode
{
  public:
    enum { ATT_ELEMENT, };
  private:
    std::string element;
  public:
    /** @name Constructors, destructor */
    //@{
    UnknownElement();
    UnknownElement(ASTNode *parent);
    virtual ~UnknownElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "unknown";}
    virtual int getTagCode() const override {return NED_UNKNOWN;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual UnknownElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getElement() const  {return element.c_str();}
    void setElement(const char * val)  {element = val;}

    virtual UnknownElement *getNextUnknownSibling() const;
    //@}
};

/**
 *  GENERATED CLASS. Factory for NED ASTNode subclasses.
 *
 * @ingroup Data
 */
class NEDXML_API NedAstNodeFactory : public ASTNodeFactory
{
  public:
    virtual ASTNode *createElementWithTag(const char *tagname);
    virtual ASTNode *createElementWithTag(int tagcode);
};

} // namespace nedxml
} // namespace omnetpp

#endif

