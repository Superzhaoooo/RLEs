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


#ifndef __OMNETPP_NEDXML_MSGELEMENTS_H
#define __OMNETPP_NEDXML_MSGELEMENTS_H

#include "astnode.h"

#include "nedelements.h"
namespace omnetpp {
namespace nedxml {

class FilesElement;
class MsgFileElement;
class CommentElement;
class ImportElement;
class PropertyElement;
class PropertyKeyElement;
class LiteralElement;
class NamespaceElement;
class CplusplusElement;
class StructDeclElement;
class ClassDeclElement;
class MessageDeclElement;
class PacketDeclElement;
class EnumDeclElement;
class EnumElement;
class EnumFieldElement;
class MessageElement;
class PacketElement;
class ClassElement;
class StructElement;
class FieldElement;
class UnknownElement;


/**
 * Tag codes
 *
 * @ingroup Data
 */
enum MsgTagCode {
    dummy = 100,
    MSG_MSG_FILE,
    MSG_NAMESPACE,
    MSG_CPLUSPLUS,
    MSG_STRUCT_DECL,
    MSG_CLASS_DECL,
    MSG_MESSAGE_DECL,
    MSG_PACKET_DECL,
    MSG_ENUM_DECL,
    MSG_ENUM,
    MSG_ENUM_FIELD,
    MSG_MESSAGE,
    MSG_PACKET,
    MSG_CLASS,
    MSG_STRUCT,
    MSG_FIELD,
    MSG_UNKNOWN = NED_UNKNOWN,
    MSG_PROPERTY = NED_PROPERTY,
    MSG_IMPORT = NED_IMPORT,
    MSG_PROPERTY_KEY = NED_PROPERTY_KEY,
    MSG_LITERAL = NED_LITERAL,
    MSG_FILES = NED_FILES,
    MSG_COMMENT = NED_COMMENT,
};

/**
 * @brief GENERATED CLASS. Represents the \<msg-file\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT msg-file (comment*, (namespace|property|cplusplus|import|
 *                     struct-decl|class-decl|message-decl|packet-decl|enum-decl|
 *                     struct|class|message|packet|enum)*)\>
 * \<!ATTLIST msg-file
 *      filename            CDATA     \#IMPLIED
 *      version             CDATA     "2"\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API MsgFileElement : public ASTNode
{
  public:
    enum { ATT_FILENAME, ATT_VERSION, };
  private:
    std::string filename;
    std::string version;
  public:
    /** @name Constructors, destructor */
    //@{
    MsgFileElement();
    MsgFileElement(ASTNode *parent);
    virtual ~MsgFileElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "msg-file";}
    virtual int getTagCode() const override {return MSG_MSG_FILE;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual MsgFileElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getFilename() const  {return filename.c_str();}
    void setFilename(const char * val)  {filename = val;}
    const char * getVersion() const  {return version.c_str();}
    void setVersion(const char * val)  {version = val;}

    virtual MsgFileElement *getNextMsgFileSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual NamespaceElement *getFirstNamespaceChild() const;
    virtual PropertyElement *getFirstPropertyChild() const;
    virtual CplusplusElement *getFirstCplusplusChild() const;
    virtual ImportElement *getFirstImportChild() const;
    virtual StructDeclElement *getFirstStructDeclChild() const;
    virtual ClassDeclElement *getFirstClassDeclChild() const;
    virtual MessageDeclElement *getFirstMessageDeclChild() const;
    virtual PacketDeclElement *getFirstPacketDeclChild() const;
    virtual EnumDeclElement *getFirstEnumDeclChild() const;
    virtual StructElement *getFirstStructChild() const;
    virtual ClassElement *getFirstClassChild() const;
    virtual MessageElement *getFirstMessageChild() const;
    virtual PacketElement *getFirstPacketChild() const;
    virtual EnumElement *getFirstEnumChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<namespace\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT namespace (comment*)\>
 * \<!ATTLIST namespace
 *      name                CDATA     \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API NamespaceElement : public ASTNode
{
  public:
    enum { ATT_NAME, };
  private:
    std::string name;
  public:
    /** @name Constructors, destructor */
    //@{
    NamespaceElement();
    NamespaceElement(ASTNode *parent);
    virtual ~NamespaceElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "namespace";}
    virtual int getTagCode() const override {return MSG_NAMESPACE;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual NamespaceElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}

    virtual NamespaceElement *getNextNamespaceSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<cplusplus\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT cplusplus (comment*)\>
 * \<!ATTLIST cplusplus
 *      target              CDATA     \#IMPLIED
 *      body                CDATA     \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API CplusplusElement : public ASTNode
{
  public:
    enum { ATT_TARGET, ATT_BODY, };
  private:
    std::string target;
    std::string body;
  public:
    /** @name Constructors, destructor */
    //@{
    CplusplusElement();
    CplusplusElement(ASTNode *parent);
    virtual ~CplusplusElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "cplusplus";}
    virtual int getTagCode() const override {return MSG_CPLUSPLUS;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual CplusplusElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getTarget() const  {return target.c_str();}
    void setTarget(const char * val)  {target = val;}
    const char * getBody() const  {return body.c_str();}
    void setBody(const char * val)  {body = val;}

    virtual CplusplusElement *getNextCplusplusSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<struct-decl\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT struct-decl (comment*)\>
 * \<!ATTLIST struct-decl
 *      name                CDATA     \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API StructDeclElement : public ASTNode
{
  public:
    enum { ATT_NAME, };
  private:
    std::string name;
  public:
    /** @name Constructors, destructor */
    //@{
    StructDeclElement();
    StructDeclElement(ASTNode *parent);
    virtual ~StructDeclElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "struct-decl";}
    virtual int getTagCode() const override {return MSG_STRUCT_DECL;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual StructDeclElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}

    virtual StructDeclElement *getNextStructDeclSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<class-decl\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT class-decl (comment*)\>
 * \<!ATTLIST class-decl
 *      name                CDATA     \#REQUIRED
 *      is-cobject      (true|false)  "false"
 *      extends-name        CDATA     \#IMPLIED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API ClassDeclElement : public ASTNode
{
  public:
    enum { ATT_NAME, ATT_IS_COBJECT, ATT_EXTENDS_NAME, };
  private:
    std::string name;
    bool isCobject;
    std::string extendsName;
  public:
    /** @name Constructors, destructor */
    //@{
    ClassDeclElement();
    ClassDeclElement(ASTNode *parent);
    virtual ~ClassDeclElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "class-decl";}
    virtual int getTagCode() const override {return MSG_CLASS_DECL;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual ClassDeclElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}
    bool getIsCobject() const  {return isCobject;}
    void setIsCobject(bool val)  {isCobject = val;}
    const char * getExtendsName() const  {return extendsName.c_str();}
    void setExtendsName(const char * val)  {extendsName = val;}

    virtual ClassDeclElement *getNextClassDeclSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<message-decl\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT message-decl (comment*)\>
 * \<!ATTLIST message-decl
 *      name                CDATA     \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API MessageDeclElement : public ASTNode
{
  public:
    enum { ATT_NAME, };
  private:
    std::string name;
  public:
    /** @name Constructors, destructor */
    //@{
    MessageDeclElement();
    MessageDeclElement(ASTNode *parent);
    virtual ~MessageDeclElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "message-decl";}
    virtual int getTagCode() const override {return MSG_MESSAGE_DECL;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual MessageDeclElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}

    virtual MessageDeclElement *getNextMessageDeclSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<packet-decl\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT packet-decl (comment*)\>
 * \<!ATTLIST packet-decl
 *      name                CDATA     \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API PacketDeclElement : public ASTNode
{
  public:
    enum { ATT_NAME, };
  private:
    std::string name;
  public:
    /** @name Constructors, destructor */
    //@{
    PacketDeclElement();
    PacketDeclElement(ASTNode *parent);
    virtual ~PacketDeclElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "packet-decl";}
    virtual int getTagCode() const override {return MSG_PACKET_DECL;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual PacketDeclElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}

    virtual PacketDeclElement *getNextPacketDeclSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<enum-decl\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT enum-decl (comment*)\>
 * \<!ATTLIST enum-decl
 *      name                CDATA     \#REQUIRED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API EnumDeclElement : public ASTNode
{
  public:
    enum { ATT_NAME, };
  private:
    std::string name;
  public:
    /** @name Constructors, destructor */
    //@{
    EnumDeclElement();
    EnumDeclElement(ASTNode *parent);
    virtual ~EnumDeclElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "enum-decl";}
    virtual int getTagCode() const override {return MSG_ENUM_DECL;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual EnumDeclElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}

    virtual EnumDeclElement *getNextEnumDeclSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<enum\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT enum (comment*, enum-field*)\>
 * \<!ATTLIST enum
 *      name                CDATA     \#REQUIRED
 *      extends-name        CDATA     \#IMPLIED
 *      source-code         CDATA     \#IMPLIED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API EnumElement : public ASTNode
{
  public:
    enum { ATT_NAME, ATT_EXTENDS_NAME, ATT_SOURCE_CODE, };
  private:
    std::string name;
    std::string extendsName;
    std::string sourceCode;
  public:
    /** @name Constructors, destructor */
    //@{
    EnumElement();
    EnumElement(ASTNode *parent);
    virtual ~EnumElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "enum";}
    virtual int getTagCode() const override {return MSG_ENUM;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual EnumElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}
    const char * getExtendsName() const  {return extendsName.c_str();}
    void setExtendsName(const char * val)  {extendsName = val;}
    const char * getSourceCode() const  {return sourceCode.c_str();}
    void setSourceCode(const char * val)  {sourceCode = val;}

    virtual EnumElement *getNextEnumSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual EnumFieldElement *getFirstEnumFieldChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<enum-field\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT enum-field (comment*)\>
 * \<!ATTLIST enum-field
 *      name                NMTOKEN   \#REQUIRED
 *      value               CDATA     \#IMPLIED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API EnumFieldElement : public ASTNode
{
  public:
    enum { ATT_NAME, ATT_VALUE, };
  private:
    std::string name;
    std::string value;
  public:
    /** @name Constructors, destructor */
    //@{
    EnumFieldElement();
    EnumFieldElement(ASTNode *parent);
    virtual ~EnumFieldElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "enum-field";}
    virtual int getTagCode() const override {return MSG_ENUM_FIELD;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual EnumFieldElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}
    const char * getValue() const  {return value.c_str();}
    void setValue(const char * val)  {value = val;}

    virtual EnumFieldElement *getNextEnumFieldSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<message\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT message (comment*, (property|field)*)\>
 * \<!ATTLIST message
 *      name                CDATA     \#REQUIRED
 *      extends-name        CDATA     \#IMPLIED
 *      source-code         CDATA     \#IMPLIED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API MessageElement : public ASTNode
{
  public:
    enum { ATT_NAME, ATT_EXTENDS_NAME, ATT_SOURCE_CODE, };
  private:
    std::string name;
    std::string extendsName;
    std::string sourceCode;
  public:
    /** @name Constructors, destructor */
    //@{
    MessageElement();
    MessageElement(ASTNode *parent);
    virtual ~MessageElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "message";}
    virtual int getTagCode() const override {return MSG_MESSAGE;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual MessageElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}
    const char * getExtendsName() const  {return extendsName.c_str();}
    void setExtendsName(const char * val)  {extendsName = val;}
    const char * getSourceCode() const  {return sourceCode.c_str();}
    void setSourceCode(const char * val)  {sourceCode = val;}

    virtual MessageElement *getNextMessageSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual PropertyElement *getFirstPropertyChild() const;
    virtual FieldElement *getFirstFieldChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<packet\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT packet (comment*, (property|field)*)\>
 * \<!ATTLIST packet
 *      name                CDATA     \#REQUIRED
 *      extends-name        CDATA     \#IMPLIED
 *      source-code         CDATA     \#IMPLIED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API PacketElement : public ASTNode
{
  public:
    enum { ATT_NAME, ATT_EXTENDS_NAME, ATT_SOURCE_CODE, };
  private:
    std::string name;
    std::string extendsName;
    std::string sourceCode;
  public:
    /** @name Constructors, destructor */
    //@{
    PacketElement();
    PacketElement(ASTNode *parent);
    virtual ~PacketElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "packet";}
    virtual int getTagCode() const override {return MSG_PACKET;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual PacketElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}
    const char * getExtendsName() const  {return extendsName.c_str();}
    void setExtendsName(const char * val)  {extendsName = val;}
    const char * getSourceCode() const  {return sourceCode.c_str();}
    void setSourceCode(const char * val)  {sourceCode = val;}

    virtual PacketElement *getNextPacketSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual PropertyElement *getFirstPropertyChild() const;
    virtual FieldElement *getFirstFieldChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<class\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT class (comment*, (property|field)*)\>
 * \<!ATTLIST class
 *      name                CDATA     \#REQUIRED
 *      extends-name        CDATA     \#IMPLIED
 *      source-code         CDATA     \#IMPLIED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API ClassElement : public ASTNode
{
  public:
    enum { ATT_NAME, ATT_EXTENDS_NAME, ATT_SOURCE_CODE, };
  private:
    std::string name;
    std::string extendsName;
    std::string sourceCode;
  public:
    /** @name Constructors, destructor */
    //@{
    ClassElement();
    ClassElement(ASTNode *parent);
    virtual ~ClassElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "class";}
    virtual int getTagCode() const override {return MSG_CLASS;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual ClassElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}
    const char * getExtendsName() const  {return extendsName.c_str();}
    void setExtendsName(const char * val)  {extendsName = val;}
    const char * getSourceCode() const  {return sourceCode.c_str();}
    void setSourceCode(const char * val)  {sourceCode = val;}

    virtual ClassElement *getNextClassSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual PropertyElement *getFirstPropertyChild() const;
    virtual FieldElement *getFirstFieldChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<struct\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT struct (comment*, (property|field)*)\>
 * \<!ATTLIST struct
 *      name                CDATA     \#REQUIRED
 *      extends-name        CDATA     \#IMPLIED
 *      source-code         CDATA     \#IMPLIED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API StructElement : public ASTNode
{
  public:
    enum { ATT_NAME, ATT_EXTENDS_NAME, ATT_SOURCE_CODE, };
  private:
    std::string name;
    std::string extendsName;
    std::string sourceCode;
  public:
    /** @name Constructors, destructor */
    //@{
    StructElement();
    StructElement(ASTNode *parent);
    virtual ~StructElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "struct";}
    virtual int getTagCode() const override {return MSG_STRUCT;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual StructElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}
    const char * getExtendsName() const  {return extendsName.c_str();}
    void setExtendsName(const char * val)  {extendsName = val;}
    const char * getSourceCode() const  {return sourceCode.c_str();}
    void setSourceCode(const char * val)  {sourceCode = val;}

    virtual StructElement *getNextStructSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual PropertyElement *getFirstPropertyChild() const;
    virtual FieldElement *getFirstFieldChild() const;
    //@}
};

/**
 * @brief GENERATED CLASS. Represents the \<field\> XML element in memory.
 *
 * DTD declaration:
 * <pre>
 * \<!ELEMENT field (comment*, property*)\>
 * \<!ATTLIST field
 *      name                NMTOKEN   \#REQUIRED
 *      data-type           CDATA     \#IMPLIED
 *      is-abstract     (true|false)  "false"
 *      is-const        (true|false)  "false"
 *      is-pointer      (true|false)  "false"
 *      is-vector       (true|false)  "false"
 *      vector-size         CDATA     \#IMPLIED
 *      default-value       CDATA     \#IMPLIED\>
 * </pre>
 *
 * @ingroup Data
 */
class NEDXML_API FieldElement : public ASTNode
{
  public:
    enum { ATT_NAME, ATT_DATA_TYPE, ATT_IS_ABSTRACT, ATT_IS_CONST, ATT_IS_POINTER, ATT_IS_VECTOR, ATT_VECTOR_SIZE, ATT_DEFAULT_VALUE, };
  private:
    std::string name;
    std::string dataType;
    bool isAbstract;
    bool isConst;
    bool isPointer;
    bool isVector;
    std::string vectorSize;
    std::string defaultValue;
  public:
    /** @name Constructors, destructor */
    //@{
    FieldElement();
    FieldElement(ASTNode *parent);
    virtual ~FieldElement() {}
    //@}

    /** @name Redefined ASTNode methods, incl. generic access to attributes */
    //@{
    virtual const char *getTagName() const override {return "field";}
    virtual int getTagCode() const override {return MSG_FIELD;}
    virtual int getNumAttributes() const override;
    virtual const char *getAttributeName(int k) const override;
    virtual const char *getAttribute(int k) const override;
    virtual const char *getAttribute(const char *name) const override {return ASTNode::getAttribute(name);} // needed because of a C++ language quirk
    virtual void setAttribute(int k, const char *val) override;
    virtual void setAttribute(const char *name, const char *val) override {ASTNode::setAttribute(name, val);} // ditto
    virtual const char *getAttributeDefault(int k) const override;
    virtual FieldElement *dup() const override;
    //@}

    /** @name Typed access to attributes, children and siblings */
    //@{
    const char * getName() const  {return name.c_str();}
    void setName(const char * val)  {name = val;}
    const char * getDataType() const  {return dataType.c_str();}
    void setDataType(const char * val)  {dataType = val;}
    bool getIsAbstract() const  {return isAbstract;}
    void setIsAbstract(bool val)  {isAbstract = val;}
    bool getIsConst() const  {return isConst;}
    void setIsConst(bool val)  {isConst = val;}
    bool getIsPointer() const  {return isPointer;}
    void setIsPointer(bool val)  {isPointer = val;}
    bool getIsVector() const  {return isVector;}
    void setIsVector(bool val)  {isVector = val;}
    const char * getVectorSize() const  {return vectorSize.c_str();}
    void setVectorSize(const char * val)  {vectorSize = val;}
    const char * getDefaultValue() const  {return defaultValue.c_str();}
    void setDefaultValue(const char * val)  {defaultValue = val;}

    virtual FieldElement *getNextFieldSibling() const;
    virtual CommentElement *getFirstCommentChild() const;
    virtual PropertyElement *getFirstPropertyChild() const;
    //@}
};

/**
 *  GENERATED CLASS. Factory for MSG ASTNode subclasses.
 *
 * @ingroup Data
 */
class NEDXML_API MsgAstNodeFactory : public ASTNodeFactory
{
  public:
    virtual ASTNode *createElementWithTag(const char *tagname);
    virtual ASTNode *createElementWithTag(int tagcode);
};

} // namespace nedxml
} // namespace omnetpp

#endif

