//
// Generated file, do not edit! Created by nedtool 5.6 from osg.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wshadow"
#  pragma clang diagnostic ignored "-Wconversion"
#  pragma clang diagnostic ignored "-Wunused-parameter"
#  pragma clang diagnostic ignored "-Wc++98-compat"
#  pragma clang diagnostic ignored "-Wunreachable-code-break"
#  pragma clang diagnostic ignored "-Wold-style-cast"
#elif defined(__GNUC__)
#  pragma GCC diagnostic ignored "-Wshadow"
#  pragma GCC diagnostic ignored "-Wconversion"
#  pragma GCC diagnostic ignored "-Wunused-parameter"
#  pragma GCC diagnostic ignored "-Wold-style-cast"
#  pragma GCC diagnostic ignored "-Wsuggest-attribute=noreturn"
#  pragma GCC diagnostic ignored "-Wfloat-conversion"
#endif

#include <iostream>
#include <sstream>
#include <memory>
#include "osg_m.h"

namespace omnetpp {

// Template pack/unpack rules. They are declared *after* a1l type-specific pack functions for multiple reasons.
// They are in the omnetpp namespace, to allow them to be found by argument-dependent lookup via the cCommBuffer argument

// Packing/unpacking an std::vector
template<typename T, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::vector<T,A>& v)
{
    int n = v.size();
    doParsimPacking(buffer, n);
    for (int i = 0; i < n; i++)
        doParsimPacking(buffer, v[i]);
}

template<typename T, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::vector<T,A>& v)
{
    int n;
    doParsimUnpacking(buffer, n);
    v.resize(n);
    for (int i = 0; i < n; i++)
        doParsimUnpacking(buffer, v[i]);
}

// Packing/unpacking an std::list
template<typename T, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::list<T,A>& l)
{
    doParsimPacking(buffer, (int)l.size());
    for (typename std::list<T,A>::const_iterator it = l.begin(); it != l.end(); ++it)
        doParsimPacking(buffer, (T&)*it);
}

template<typename T, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::list<T,A>& l)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i = 0; i < n; i++) {
        l.push_back(T());
        doParsimUnpacking(buffer, l.back());
    }
}

// Packing/unpacking an std::set
template<typename T, typename Tr, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::set<T,Tr,A>& s)
{
    doParsimPacking(buffer, (int)s.size());
    for (typename std::set<T,Tr,A>::const_iterator it = s.begin(); it != s.end(); ++it)
        doParsimPacking(buffer, *it);
}

template<typename T, typename Tr, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::set<T,Tr,A>& s)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i = 0; i < n; i++) {
        T x;
        doParsimUnpacking(buffer, x);
        s.insert(x);
    }
}

// Packing/unpacking an std::map
template<typename K, typename V, typename Tr, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::map<K,V,Tr,A>& m)
{
    doParsimPacking(buffer, (int)m.size());
    for (typename std::map<K,V,Tr,A>::const_iterator it = m.begin(); it != m.end(); ++it) {
        doParsimPacking(buffer, it->first);
        doParsimPacking(buffer, it->second);
    }
}

template<typename K, typename V, typename Tr, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::map<K,V,Tr,A>& m)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i = 0; i < n; i++) {
        K k; V v;
        doParsimUnpacking(buffer, k);
        doParsimUnpacking(buffer, v);
        m[k] = v;
    }
}

// Default pack/unpack function for arrays
template<typename T>
void doParsimArrayPacking(omnetpp::cCommBuffer *b, const T *t, int n)
{
    for (int i = 0; i < n; i++)
        doParsimPacking(b, t[i]);
}

template<typename T>
void doParsimArrayUnpacking(omnetpp::cCommBuffer *b, T *t, int n)
{
    for (int i = 0; i < n; i++)
        doParsimUnpacking(b, t[i]);
}

// Default rule to prevent compiler from choosing base class' doParsimPacking() function
template<typename T>
void doParsimPacking(omnetpp::cCommBuffer *, const T& t)
{
    throw omnetpp::cRuntimeError("Parsim error: No doParsimPacking() function for type %s", omnetpp::opp_typename(typeid(t)));
}

template<typename T>
void doParsimUnpacking(omnetpp::cCommBuffer *, T& t)
{
    throw omnetpp::cRuntimeError("Parsim error: No doParsimUnpacking() function for type %s", omnetpp::opp_typename(typeid(t)));
}

}  // namespace omnetpp

namespace {
template <class T> inline
typename std::enable_if<std::is_polymorphic<T>::value && std::is_base_of<omnetpp::cObject,T>::value, void *>::type
toVoidPtr(T* t)
{
    return (void *)(static_cast<const omnetpp::cObject *>(t));
}

template <class T> inline
typename std::enable_if<std::is_polymorphic<T>::value && !std::is_base_of<omnetpp::cObject,T>::value, void *>::type
toVoidPtr(T* t)
{
    return (void *)dynamic_cast<const void *>(t);
}

template <class T> inline
typename std::enable_if<!std::is_polymorphic<T>::value, void *>::type
toVoidPtr(T* t)
{
    return (void *)static_cast<const void *>(t);
}

}

namespace omnetpp {

// forward
template<typename T, typename A>
std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec);

// Template rule to generate operator<< for shared_ptr<T>
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const std::shared_ptr<T>& t) { return out << t.get(); }

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// operator<< for std::vector<T>
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');

    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

class cOsgCanvas__ViewpointDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertynames;
    enum FieldConstants {
        FIELD_valid,
        FIELD_eye,
        FIELD_center,
        FIELD_up,
    };
  public:
    cOsgCanvas__ViewpointDescriptor();
    virtual ~cOsgCanvas__ViewpointDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyname) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyname) const override;
    virtual int getFieldArraySize(void *object, int field) const override;

    virtual const char *getFieldDynamicTypeString(void *object, int field, int i) const override;
    virtual std::string getFieldValueAsString(void *object, int field, int i) const override;
    virtual bool setFieldValueAsString(void *object, int field, int i, const char *value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual void *getFieldStructValuePointer(void *object, int field, int i) const override;
};

Register_ClassDescriptor(cOsgCanvas__ViewpointDescriptor)

cOsgCanvas__ViewpointDescriptor::cOsgCanvas__ViewpointDescriptor() : omnetpp::cClassDescriptor(omnetpp::opp_typename(typeid(omnetpp::cOsgCanvas::Viewpoint)), "")
{
    propertynames = nullptr;
}

cOsgCanvas__ViewpointDescriptor::~cOsgCanvas__ViewpointDescriptor()
{
    delete[] propertynames;
}

bool cOsgCanvas__ViewpointDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<cOsgCanvas::Viewpoint *>(obj)!=nullptr;
}

const char **cOsgCanvas__ViewpointDescriptor::getPropertyNames() const
{
    if (!propertynames) {
        static const char *names[] = { "existingClass",  nullptr };
        omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
        const char **basenames = basedesc ? basedesc->getPropertyNames() : nullptr;
        propertynames = mergeLists(basenames, names);
    }
    return propertynames;
}

const char *cOsgCanvas__ViewpointDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname, "existingClass")) return "";
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : nullptr;
}

int cOsgCanvas__ViewpointDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount() : 4;
}

unsigned int cOsgCanvas__ViewpointDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeFlags(field);
        field -= basedesc->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,    // FIELD_valid
        0,    // FIELD_eye
        0,    // FIELD_center
        0,    // FIELD_up
    };
    return (field >= 0 && field < 4) ? fieldTypeFlags[field] : 0;
}

const char *cOsgCanvas__ViewpointDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldName(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldNames[] = {
        "valid",
        "eye",
        "center",
        "up",
    };
    return (field >= 0 && field < 4) ? fieldNames[field] : nullptr;
}

int cOsgCanvas__ViewpointDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount() : 0;
    if (fieldName[0] == 'v' && strcmp(fieldName, "valid") == 0) return base+0;
    if (fieldName[0] == 'e' && strcmp(fieldName, "eye") == 0) return base+1;
    if (fieldName[0] == 'c' && strcmp(fieldName, "center") == 0) return base+2;
    if (fieldName[0] == 'u' && strcmp(fieldName, "up") == 0) return base+3;
    return basedesc ? basedesc->findField(fieldName) : -1;
}

const char *cOsgCanvas__ViewpointDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeString(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "bool",    // FIELD_valid
        "omnetpp::cOsgCanvas::Vec3d",    // FIELD_eye
        "omnetpp::cOsgCanvas::Vec3d",    // FIELD_center
        "omnetpp::cOsgCanvas::Vec3d",    // FIELD_up
    };
    return (field >= 0 && field < 4) ? fieldTypeStrings[field] : nullptr;
}

const char **cOsgCanvas__ViewpointDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldPropertyNames(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case FIELD_valid: {
            static const char *names[] = { "editable",  nullptr };
            return names;
        }
        default: return nullptr;
    }
}

const char *cOsgCanvas__ViewpointDescriptor::getFieldProperty(int field, const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldProperty(field, propertyname);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case FIELD_valid:
            if (!strcmp(propertyname, "editable")) return "";
            return nullptr;
        default: return nullptr;
    }
}

int cOsgCanvas__ViewpointDescriptor::getFieldArraySize(void *object, int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldArraySize(object, field);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas::Viewpoint *pp = (cOsgCanvas::Viewpoint *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

const char *cOsgCanvas__ViewpointDescriptor::getFieldDynamicTypeString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldDynamicTypeString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas::Viewpoint *pp = (cOsgCanvas::Viewpoint *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string cOsgCanvas__ViewpointDescriptor::getFieldValueAsString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldValueAsString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas::Viewpoint *pp = (cOsgCanvas::Viewpoint *)object; (void)pp;
    switch (field) {
        case FIELD_valid: return bool2string(pp->valid);
        case FIELD_eye: return pp->eye.str();
        case FIELD_center: return pp->center.str();
        case FIELD_up: return pp->up.str();
        default: return "";
    }
}

bool cOsgCanvas__ViewpointDescriptor::setFieldValueAsString(void *object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->setFieldValueAsString(object,field,i,value);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas::Viewpoint *pp = (cOsgCanvas::Viewpoint *)object; (void)pp;
    switch (field) {
        case FIELD_valid: pp->valid = string2bool(value); return true;
        default: return false;
    }
}

const char *cOsgCanvas__ViewpointDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructName(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    };
}

void *cOsgCanvas__ViewpointDescriptor::getFieldStructValuePointer(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructValuePointer(object, field, i);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas::Viewpoint *pp = (cOsgCanvas::Viewpoint *)object; (void)pp;
    switch (field) {
        case FIELD_eye: return toVoidPtr(&pp->eye); break;
        case FIELD_center: return toVoidPtr(&pp->center); break;
        case FIELD_up: return toVoidPtr(&pp->up); break;
        default: return nullptr;
    }
}

class cOsgCanvas__EarthViewpointDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertynames;
    enum FieldConstants {
        FIELD_valid,
        FIELD_longitude,
        FIELD_latitude,
        FIELD_altitude,
        FIELD_heading,
        FIELD_pitch,
        FIELD_range,
    };
  public:
    cOsgCanvas__EarthViewpointDescriptor();
    virtual ~cOsgCanvas__EarthViewpointDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyname) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyname) const override;
    virtual int getFieldArraySize(void *object, int field) const override;

    virtual const char *getFieldDynamicTypeString(void *object, int field, int i) const override;
    virtual std::string getFieldValueAsString(void *object, int field, int i) const override;
    virtual bool setFieldValueAsString(void *object, int field, int i, const char *value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual void *getFieldStructValuePointer(void *object, int field, int i) const override;
};

Register_ClassDescriptor(cOsgCanvas__EarthViewpointDescriptor)

cOsgCanvas__EarthViewpointDescriptor::cOsgCanvas__EarthViewpointDescriptor() : omnetpp::cClassDescriptor(omnetpp::opp_typename(typeid(omnetpp::cOsgCanvas::EarthViewpoint)), "")
{
    propertynames = nullptr;
}

cOsgCanvas__EarthViewpointDescriptor::~cOsgCanvas__EarthViewpointDescriptor()
{
    delete[] propertynames;
}

bool cOsgCanvas__EarthViewpointDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<cOsgCanvas::EarthViewpoint *>(obj)!=nullptr;
}

const char **cOsgCanvas__EarthViewpointDescriptor::getPropertyNames() const
{
    if (!propertynames) {
        static const char *names[] = { "existingClass",  nullptr };
        omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
        const char **basenames = basedesc ? basedesc->getPropertyNames() : nullptr;
        propertynames = mergeLists(basenames, names);
    }
    return propertynames;
}

const char *cOsgCanvas__EarthViewpointDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname, "existingClass")) return "";
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : nullptr;
}

int cOsgCanvas__EarthViewpointDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount() : 7;
}

unsigned int cOsgCanvas__EarthViewpointDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeFlags(field);
        field -= basedesc->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,    // FIELD_valid
        FD_ISEDITABLE,    // FIELD_longitude
        FD_ISEDITABLE,    // FIELD_latitude
        FD_ISEDITABLE,    // FIELD_altitude
        FD_ISEDITABLE,    // FIELD_heading
        FD_ISEDITABLE,    // FIELD_pitch
        FD_ISEDITABLE,    // FIELD_range
    };
    return (field >= 0 && field < 7) ? fieldTypeFlags[field] : 0;
}

const char *cOsgCanvas__EarthViewpointDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldName(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldNames[] = {
        "valid",
        "longitude",
        "latitude",
        "altitude",
        "heading",
        "pitch",
        "range",
    };
    return (field >= 0 && field < 7) ? fieldNames[field] : nullptr;
}

int cOsgCanvas__EarthViewpointDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount() : 0;
    if (fieldName[0] == 'v' && strcmp(fieldName, "valid") == 0) return base+0;
    if (fieldName[0] == 'l' && strcmp(fieldName, "longitude") == 0) return base+1;
    if (fieldName[0] == 'l' && strcmp(fieldName, "latitude") == 0) return base+2;
    if (fieldName[0] == 'a' && strcmp(fieldName, "altitude") == 0) return base+3;
    if (fieldName[0] == 'h' && strcmp(fieldName, "heading") == 0) return base+4;
    if (fieldName[0] == 'p' && strcmp(fieldName, "pitch") == 0) return base+5;
    if (fieldName[0] == 'r' && strcmp(fieldName, "range") == 0) return base+6;
    return basedesc ? basedesc->findField(fieldName) : -1;
}

const char *cOsgCanvas__EarthViewpointDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeString(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "bool",    // FIELD_valid
        "double",    // FIELD_longitude
        "double",    // FIELD_latitude
        "double",    // FIELD_altitude
        "double",    // FIELD_heading
        "double",    // FIELD_pitch
        "double",    // FIELD_range
    };
    return (field >= 0 && field < 7) ? fieldTypeStrings[field] : nullptr;
}

const char **cOsgCanvas__EarthViewpointDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldPropertyNames(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case FIELD_valid: {
            static const char *names[] = { "editable",  nullptr };
            return names;
        }
        case FIELD_longitude: {
            static const char *names[] = { "editable",  nullptr };
            return names;
        }
        case FIELD_latitude: {
            static const char *names[] = { "editable",  nullptr };
            return names;
        }
        case FIELD_altitude: {
            static const char *names[] = { "editable",  nullptr };
            return names;
        }
        case FIELD_heading: {
            static const char *names[] = { "editable",  nullptr };
            return names;
        }
        case FIELD_pitch: {
            static const char *names[] = { "editable",  nullptr };
            return names;
        }
        case FIELD_range: {
            static const char *names[] = { "editable",  nullptr };
            return names;
        }
        default: return nullptr;
    }
}

const char *cOsgCanvas__EarthViewpointDescriptor::getFieldProperty(int field, const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldProperty(field, propertyname);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case FIELD_valid:
            if (!strcmp(propertyname, "editable")) return "";
            return nullptr;
        case FIELD_longitude:
            if (!strcmp(propertyname, "editable")) return "";
            return nullptr;
        case FIELD_latitude:
            if (!strcmp(propertyname, "editable")) return "";
            return nullptr;
        case FIELD_altitude:
            if (!strcmp(propertyname, "editable")) return "";
            return nullptr;
        case FIELD_heading:
            if (!strcmp(propertyname, "editable")) return "";
            return nullptr;
        case FIELD_pitch:
            if (!strcmp(propertyname, "editable")) return "";
            return nullptr;
        case FIELD_range:
            if (!strcmp(propertyname, "editable")) return "";
            return nullptr;
        default: return nullptr;
    }
}

int cOsgCanvas__EarthViewpointDescriptor::getFieldArraySize(void *object, int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldArraySize(object, field);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas::EarthViewpoint *pp = (cOsgCanvas::EarthViewpoint *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

const char *cOsgCanvas__EarthViewpointDescriptor::getFieldDynamicTypeString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldDynamicTypeString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas::EarthViewpoint *pp = (cOsgCanvas::EarthViewpoint *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string cOsgCanvas__EarthViewpointDescriptor::getFieldValueAsString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldValueAsString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas::EarthViewpoint *pp = (cOsgCanvas::EarthViewpoint *)object; (void)pp;
    switch (field) {
        case FIELD_valid: return bool2string(pp->valid);
        case FIELD_longitude: return double2string(pp->longitude);
        case FIELD_latitude: return double2string(pp->latitude);
        case FIELD_altitude: return double2string(pp->altitude);
        case FIELD_heading: return double2string(pp->heading);
        case FIELD_pitch: return double2string(pp->pitch);
        case FIELD_range: return double2string(pp->range);
        default: return "";
    }
}

bool cOsgCanvas__EarthViewpointDescriptor::setFieldValueAsString(void *object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->setFieldValueAsString(object,field,i,value);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas::EarthViewpoint *pp = (cOsgCanvas::EarthViewpoint *)object; (void)pp;
    switch (field) {
        case FIELD_valid: pp->valid = string2bool(value); return true;
        case FIELD_longitude: pp->longitude = string2double(value); return true;
        case FIELD_latitude: pp->latitude = string2double(value); return true;
        case FIELD_altitude: pp->altitude = string2double(value); return true;
        case FIELD_heading: pp->heading = string2double(value); return true;
        case FIELD_pitch: pp->pitch = string2double(value); return true;
        case FIELD_range: pp->range = string2double(value); return true;
        default: return false;
    }
}

const char *cOsgCanvas__EarthViewpointDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructName(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    };
}

void *cOsgCanvas__EarthViewpointDescriptor::getFieldStructValuePointer(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructValuePointer(object, field, i);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas::EarthViewpoint *pp = (cOsgCanvas::EarthViewpoint *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

class cOsgCanvasDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertynames;
    enum FieldConstants {
        FIELD_scene,
        FIELD_viewerStyle,
        FIELD_clearColor,
        FIELD_cameraManipulatorType,
        FIELD_fieldOfViewAngle,
        FIELD_zNear,
        FIELD_zFar,
        FIELD_genericViewpoint,
        FIELD_earthViewpoint,
    };
  public:
    cOsgCanvasDescriptor();
    virtual ~cOsgCanvasDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyname) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyname) const override;
    virtual int getFieldArraySize(void *object, int field) const override;

    virtual const char *getFieldDynamicTypeString(void *object, int field, int i) const override;
    virtual std::string getFieldValueAsString(void *object, int field, int i) const override;
    virtual bool setFieldValueAsString(void *object, int field, int i, const char *value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual void *getFieldStructValuePointer(void *object, int field, int i) const override;
};

Register_ClassDescriptor(cOsgCanvasDescriptor)

cOsgCanvasDescriptor::cOsgCanvasDescriptor() : omnetpp::cClassDescriptor(omnetpp::opp_typename(typeid(omnetpp::cOsgCanvas)), "omnetpp::cOwnedObject")
{
    propertynames = nullptr;
}

cOsgCanvasDescriptor::~cOsgCanvasDescriptor()
{
    delete[] propertynames;
}

bool cOsgCanvasDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<cOsgCanvas *>(obj)!=nullptr;
}

const char **cOsgCanvasDescriptor::getPropertyNames() const
{
    if (!propertynames) {
        static const char *names[] = { "existingClass", "overwritePreviousDefinition",  nullptr };
        omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
        const char **basenames = basedesc ? basedesc->getPropertyNames() : nullptr;
        propertynames = mergeLists(basenames, names);
    }
    return propertynames;
}

const char *cOsgCanvasDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname, "existingClass")) return "";
    if (!strcmp(propertyname, "overwritePreviousDefinition")) return "";
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : nullptr;
}

int cOsgCanvasDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 9+basedesc->getFieldCount() : 9;
}

unsigned int cOsgCanvasDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeFlags(field);
        field -= basedesc->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND | FD_ISPOINTER,    // FIELD_scene
        FD_ISEDITABLE,    // FIELD_viewerStyle
        FD_ISEDITABLE,    // FIELD_clearColor
        FD_ISEDITABLE,    // FIELD_cameraManipulatorType
        FD_ISEDITABLE,    // FIELD_fieldOfViewAngle
        FD_ISEDITABLE,    // FIELD_zNear
        FD_ISEDITABLE,    // FIELD_zFar
        FD_ISCOMPOUND,    // FIELD_genericViewpoint
        FD_ISCOMPOUND,    // FIELD_earthViewpoint
    };
    return (field >= 0 && field < 9) ? fieldTypeFlags[field] : 0;
}

const char *cOsgCanvasDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldName(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldNames[] = {
        "scene",
        "viewerStyle",
        "clearColor",
        "cameraManipulatorType",
        "fieldOfViewAngle",
        "zNear",
        "zFar",
        "genericViewpoint",
        "earthViewpoint",
    };
    return (field >= 0 && field < 9) ? fieldNames[field] : nullptr;
}

int cOsgCanvasDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount() : 0;
    if (fieldName[0] == 's' && strcmp(fieldName, "scene") == 0) return base+0;
    if (fieldName[0] == 'v' && strcmp(fieldName, "viewerStyle") == 0) return base+1;
    if (fieldName[0] == 'c' && strcmp(fieldName, "clearColor") == 0) return base+2;
    if (fieldName[0] == 'c' && strcmp(fieldName, "cameraManipulatorType") == 0) return base+3;
    if (fieldName[0] == 'f' && strcmp(fieldName, "fieldOfViewAngle") == 0) return base+4;
    if (fieldName[0] == 'z' && strcmp(fieldName, "zNear") == 0) return base+5;
    if (fieldName[0] == 'z' && strcmp(fieldName, "zFar") == 0) return base+6;
    if (fieldName[0] == 'g' && strcmp(fieldName, "genericViewpoint") == 0) return base+7;
    if (fieldName[0] == 'e' && strcmp(fieldName, "earthViewpoint") == 0) return base+8;
    return basedesc ? basedesc->findField(fieldName) : -1;
}

const char *cOsgCanvasDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeString(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "osg::Node",    // FIELD_scene
        "int",    // FIELD_viewerStyle
        "omnetpp::cFigure::Color",    // FIELD_clearColor
        "int",    // FIELD_cameraManipulatorType
        "double",    // FIELD_fieldOfViewAngle
        "double",    // FIELD_zNear
        "double",    // FIELD_zFar
        "omnetpp::cOsgCanvas::Viewpoint",    // FIELD_genericViewpoint
        "omnetpp::cOsgCanvas::EarthViewpoint",    // FIELD_earthViewpoint
    };
    return (field >= 0 && field < 9) ? fieldTypeStrings[field] : nullptr;
}

const char **cOsgCanvasDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldPropertyNames(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case FIELD_viewerStyle: {
            static const char *names[] = { "editable", "enum", "group", "enum",  nullptr };
            return names;
        }
        case FIELD_clearColor: {
            static const char *names[] = { "editable", "group",  nullptr };
            return names;
        }
        case FIELD_cameraManipulatorType: {
            static const char *names[] = { "editable", "enum", "group", "enum",  nullptr };
            return names;
        }
        case FIELD_fieldOfViewAngle: {
            static const char *names[] = { "editable", "group",  nullptr };
            return names;
        }
        case FIELD_zNear: {
            static const char *names[] = { "editable", "group",  nullptr };
            return names;
        }
        case FIELD_zFar: {
            static const char *names[] = { "editable", "group",  nullptr };
            return names;
        }
        default: return nullptr;
    }
}

const char *cOsgCanvasDescriptor::getFieldProperty(int field, const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldProperty(field, propertyname);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case FIELD_viewerStyle:
            if (!strcmp(propertyname, "editable")) return "";
            if (!strcmp(propertyname, "enum")) return "omnetpp::cOsgCanvas::ViewerStyle";
            if (!strcmp(propertyname, "group")) return "viewer hints";
            if (!strcmp(propertyname, "enum")) return "omnetpp::cOsgCanvas::ViewerStyle";
            return nullptr;
        case FIELD_clearColor:
            if (!strcmp(propertyname, "editable")) return "";
            if (!strcmp(propertyname, "group")) return "viewer hints";
            return nullptr;
        case FIELD_cameraManipulatorType:
            if (!strcmp(propertyname, "editable")) return "";
            if (!strcmp(propertyname, "enum")) return "omnetpp::cOsgCanvas::CameraManipulatorType";
            if (!strcmp(propertyname, "group")) return "viewer hints";
            if (!strcmp(propertyname, "enum")) return "omnetpp::cOsgCanvas::CameraManipulatorType";
            return nullptr;
        case FIELD_fieldOfViewAngle:
            if (!strcmp(propertyname, "editable")) return "";
            if (!strcmp(propertyname, "group")) return "viewer hints";
            return nullptr;
        case FIELD_zNear:
            if (!strcmp(propertyname, "editable")) return "";
            if (!strcmp(propertyname, "group")) return "viewer hints";
            return nullptr;
        case FIELD_zFar:
            if (!strcmp(propertyname, "editable")) return "";
            if (!strcmp(propertyname, "group")) return "viewer hints";
            return nullptr;
        default: return nullptr;
    }
}

int cOsgCanvasDescriptor::getFieldArraySize(void *object, int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldArraySize(object, field);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas *pp = (cOsgCanvas *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

const char *cOsgCanvasDescriptor::getFieldDynamicTypeString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldDynamicTypeString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas *pp = (cOsgCanvas *)object; (void)pp;
    switch (field) {
        case FIELD_scene: { const osg::Node * value = pp->getScene(); return omnetpp::opp_typename(typeid(*value)); }
        default: return nullptr;
    }
}

std::string cOsgCanvasDescriptor::getFieldValueAsString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldValueAsString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas *pp = (cOsgCanvas *)object; (void)pp;
    switch (field) {
        case FIELD_scene: {std::stringstream out; out << pp->getScene(); return out.str();}
        case FIELD_viewerStyle: return enum2string(pp->getViewerStyle(), "omnetpp::cOsgCanvas::ViewerStyle");
        case FIELD_clearColor: return pp->getClearColor().str();
        case FIELD_cameraManipulatorType: return enum2string(pp->getCameraManipulatorType(), "omnetpp::cOsgCanvas::CameraManipulatorType");
        case FIELD_fieldOfViewAngle: return double2string(pp->getFieldOfViewAngle());
        case FIELD_zNear: return double2string(pp->getZNear());
        case FIELD_zFar: return double2string(pp->getZFar());
        case FIELD_genericViewpoint: {std::stringstream out; out << pp->getGenericViewpoint(); return out.str();}
        case FIELD_earthViewpoint: {std::stringstream out; out << pp->getEarthViewpoint(); return out.str();}
        default: return "";
    }
}

bool cOsgCanvasDescriptor::setFieldValueAsString(void *object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->setFieldValueAsString(object,field,i,value);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas *pp = (cOsgCanvas *)object; (void)pp;
    switch (field) {
        case FIELD_viewerStyle: pp->setViewerStyle((omnetpp::cOsgCanvas::ViewerStyle)string2enum(value, "omnetpp::cOsgCanvas::ViewerStyle")); return true;
        case FIELD_clearColor: pp->setClearColor(cFigure::parseColor(value)); return true;
        case FIELD_cameraManipulatorType: pp->setCameraManipulatorType((omnetpp::cOsgCanvas::CameraManipulatorType)string2enum(value, "omnetpp::cOsgCanvas::CameraManipulatorType")); return true;
        case FIELD_fieldOfViewAngle: pp->setFieldOfViewAngle(string2double(value)); return true;
        case FIELD_zNear: pp->setZNear(string2double(value)); return true;
        case FIELD_zFar: pp->setZFar(string2double(value)); return true;
        default: return false;
    }
}

const char *cOsgCanvasDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructName(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case FIELD_scene: return omnetpp::opp_typename(typeid(osg::Node));
        case FIELD_genericViewpoint: return omnetpp::opp_typename(typeid(cOsgCanvas::Viewpoint));
        case FIELD_earthViewpoint: return omnetpp::opp_typename(typeid(cOsgCanvas::EarthViewpoint));
        default: return nullptr;
    };
}

void *cOsgCanvasDescriptor::getFieldStructValuePointer(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructValuePointer(object, field, i);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas *pp = (cOsgCanvas *)object; (void)pp;
    switch (field) {
        case FIELD_scene: return toVoidPtr(pp->getScene()); break;
        case FIELD_clearColor: return toVoidPtr(&pp->getClearColor()); break;
        case FIELD_genericViewpoint: return toVoidPtr(&pp->getGenericViewpoint()); break;
        case FIELD_earthViewpoint: return toVoidPtr(&pp->getEarthViewpoint()); break;
        default: return nullptr;
    }
}

class cObjectOsgNodeDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertynames;
    enum FieldConstants {
        FIELD_object,
    };
  public:
    cObjectOsgNodeDescriptor();
    virtual ~cObjectOsgNodeDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyname) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyname) const override;
    virtual int getFieldArraySize(void *object, int field) const override;

    virtual const char *getFieldDynamicTypeString(void *object, int field, int i) const override;
    virtual std::string getFieldValueAsString(void *object, int field, int i) const override;
    virtual bool setFieldValueAsString(void *object, int field, int i, const char *value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual void *getFieldStructValuePointer(void *object, int field, int i) const override;
};

Register_ClassDescriptor(cObjectOsgNodeDescriptor)

cObjectOsgNodeDescriptor::cObjectOsgNodeDescriptor() : omnetpp::cClassDescriptor(omnetpp::opp_typename(typeid(omnetpp::cObjectOsgNode)), "osg::Group")
{
    propertynames = nullptr;
}

cObjectOsgNodeDescriptor::~cObjectOsgNodeDescriptor()
{
    delete[] propertynames;
}

bool cObjectOsgNodeDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<cObjectOsgNode *>(obj)!=nullptr;
}

const char **cObjectOsgNodeDescriptor::getPropertyNames() const
{
    if (!propertynames) {
        static const char *names[] = { "existingClass",  nullptr };
        omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
        const char **basenames = basedesc ? basedesc->getPropertyNames() : nullptr;
        propertynames = mergeLists(basenames, names);
    }
    return propertynames;
}

const char *cObjectOsgNodeDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname, "existingClass")) return "";
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : nullptr;
}

int cObjectOsgNodeDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount() : 1;
}

unsigned int cObjectOsgNodeDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeFlags(field);
        field -= basedesc->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCOBJECT,    // FIELD_object
    };
    return (field >= 0 && field < 1) ? fieldTypeFlags[field] : 0;
}

const char *cObjectOsgNodeDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldName(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldNames[] = {
        "object",
    };
    return (field >= 0 && field < 1) ? fieldNames[field] : nullptr;
}

int cObjectOsgNodeDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount() : 0;
    if (fieldName[0] == 'o' && strcmp(fieldName, "object") == 0) return base+0;
    return basedesc ? basedesc->findField(fieldName) : -1;
}

const char *cObjectOsgNodeDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeString(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "omnetpp::cObject",    // FIELD_object
    };
    return (field >= 0 && field < 1) ? fieldTypeStrings[field] : nullptr;
}

const char **cObjectOsgNodeDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldPropertyNames(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case FIELD_object: {
            static const char *names[] = { "getter", "toString",  nullptr };
            return names;
        }
        default: return nullptr;
    }
}

const char *cObjectOsgNodeDescriptor::getFieldProperty(int field, const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldProperty(field, propertyname);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case FIELD_object:
            if (!strcmp(propertyname, "getter")) return "const_cast<cObject*>($->getObject())";
            if (!strcmp(propertyname, "toString")) return "->str()";
            return nullptr;
        default: return nullptr;
    }
}

int cObjectOsgNodeDescriptor::getFieldArraySize(void *object, int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldArraySize(object, field);
        field -= basedesc->getFieldCount();
    }
    cObjectOsgNode *pp = (cObjectOsgNode *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

const char *cObjectOsgNodeDescriptor::getFieldDynamicTypeString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldDynamicTypeString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    cObjectOsgNode *pp = (cObjectOsgNode *)object; (void)pp;
    switch (field) {
        case FIELD_object: { const cObject * value = const_cast<cObject*>(pp->getObject()); return omnetpp::opp_typename(typeid(*value)); }
        default: return nullptr;
    }
}

std::string cObjectOsgNodeDescriptor::getFieldValueAsString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldValueAsString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    cObjectOsgNode *pp = (cObjectOsgNode *)object; (void)pp;
    switch (field) {
        case FIELD_object: return const_cast<cObject*>(pp->getObject())->str();
        default: return "";
    }
}

bool cObjectOsgNodeDescriptor::setFieldValueAsString(void *object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->setFieldValueAsString(object,field,i,value);
        field -= basedesc->getFieldCount();
    }
    cObjectOsgNode *pp = (cObjectOsgNode *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cObjectOsgNodeDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructName(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case FIELD_object: return omnetpp::opp_typename(typeid(cObject));
        default: return nullptr;
    };
}

void *cObjectOsgNodeDescriptor::getFieldStructValuePointer(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructValuePointer(object, field, i);
        field -= basedesc->getFieldCount();
    }
    cObjectOsgNode *pp = (cObjectOsgNode *)object; (void)pp;
    switch (field) {
        case FIELD_object: return toVoidPtr(const_cast<cObject*>(pp->getObject())); break;
        default: return nullptr;
    }
}

} // namespace omnetpp

namespace osg {

// forward
template<typename T, typename A>
std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec);

// Template rule to generate operator<< for shared_ptr<T>
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const std::shared_ptr<T>& t) { return out << t.get(); }

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// operator<< for std::vector<T>
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');

    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

class NodeDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertynames;
    enum FieldConstants {
        FIELD_descriptions,
        FIELD_children,
    };
  public:
    NodeDescriptor();
    virtual ~NodeDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyname) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyname) const override;
    virtual int getFieldArraySize(void *object, int field) const override;

    virtual const char *getFieldDynamicTypeString(void *object, int field, int i) const override;
    virtual std::string getFieldValueAsString(void *object, int field, int i) const override;
    virtual bool setFieldValueAsString(void *object, int field, int i, const char *value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual void *getFieldStructValuePointer(void *object, int field, int i) const override;
};

Register_ClassDescriptor(NodeDescriptor)

NodeDescriptor::NodeDescriptor() : omnetpp::cClassDescriptor(omnetpp::opp_typename(typeid(osg::Node)), "")
{
    propertynames = nullptr;
}

NodeDescriptor::~NodeDescriptor()
{
    delete[] propertynames;
}

bool NodeDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<Node *>(obj)!=nullptr;
}

const char **NodeDescriptor::getPropertyNames() const
{
    if (!propertynames) {
        static const char *names[] = { "existingClass", "descriptor",  nullptr };
        omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
        const char **basenames = basedesc ? basedesc->getPropertyNames() : nullptr;
        propertynames = mergeLists(basenames, names);
    }
    return propertynames;
}

const char *NodeDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname, "existingClass")) return "";
    if (!strcmp(propertyname, "descriptor")) return "readonly";
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : nullptr;
}

int NodeDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount() : 2;
}

unsigned int NodeDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeFlags(field);
        field -= basedesc->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY,    // FIELD_descriptions
        FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER,    // FIELD_children
    };
    return (field >= 0 && field < 2) ? fieldTypeFlags[field] : 0;
}

const char *NodeDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldName(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldNames[] = {
        "descriptions",
        "children",
    };
    return (field >= 0 && field < 2) ? fieldNames[field] : nullptr;
}

int NodeDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount() : 0;
    if (fieldName[0] == 'd' && strcmp(fieldName, "descriptions") == 0) return base+0;
    if (fieldName[0] == 'c' && strcmp(fieldName, "children") == 0) return base+1;
    return basedesc ? basedesc->findField(fieldName) : -1;
}

const char *NodeDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeString(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "string",    // FIELD_descriptions
        "osg::Node",    // FIELD_children
    };
    return (field >= 0 && field < 2) ? fieldTypeStrings[field] : nullptr;
}

const char **NodeDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldPropertyNames(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case FIELD_descriptions: {
            static const char *names[] = { "getter", "sizeGetter",  nullptr };
            return names;
        }
        case FIELD_children: {
            static const char *names[] = { "getter", "sizeGetter",  nullptr };
            return names;
        }
        default: return nullptr;
    }
}

const char *NodeDescriptor::getFieldProperty(int field, const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldProperty(field, propertyname);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case FIELD_descriptions:
            if (!strcmp(propertyname, "getter")) return "osgNode_getDescription($,i)";
            if (!strcmp(propertyname, "sizeGetter")) return "osgNode_getNumDescriptions($)";
            return nullptr;
        case FIELD_children:
            if (!strcmp(propertyname, "getter")) return "osgNode_getChild($,i)";
            if (!strcmp(propertyname, "sizeGetter")) return "osgNode_getNumChildren($)";
            return nullptr;
        default: return nullptr;
    }
}

int NodeDescriptor::getFieldArraySize(void *object, int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldArraySize(object, field);
        field -= basedesc->getFieldCount();
    }
    Node *pp = (Node *)object; (void)pp;
    switch (field) {
        case FIELD_descriptions: return osgNode_getNumDescriptions(pp);
        case FIELD_children: return osgNode_getNumChildren(pp);
        default: return 0;
    }
}

const char *NodeDescriptor::getFieldDynamicTypeString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldDynamicTypeString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    Node *pp = (Node *)object; (void)pp;
    switch (field) {
        case FIELD_children: { const Node * value = osgNode_getChild(pp,i); return omnetpp::opp_typename(typeid(*value)); }
        default: return nullptr;
    }
}

std::string NodeDescriptor::getFieldValueAsString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldValueAsString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    Node *pp = (Node *)object; (void)pp;
    switch (field) {
        case FIELD_descriptions: return oppstring2string(osgNode_getDescription(pp,i));
        case FIELD_children: {std::stringstream out; out << osgNode_getChild(pp,i); return out.str();}
        default: return "";
    }
}

bool NodeDescriptor::setFieldValueAsString(void *object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->setFieldValueAsString(object,field,i,value);
        field -= basedesc->getFieldCount();
    }
    Node *pp = (Node *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NodeDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructName(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case FIELD_children: return omnetpp::opp_typename(typeid(Node));
        default: return nullptr;
    };
}

void *NodeDescriptor::getFieldStructValuePointer(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructValuePointer(object, field, i);
        field -= basedesc->getFieldCount();
    }
    Node *pp = (Node *)object; (void)pp;
    switch (field) {
        case FIELD_children: return toVoidPtr(osgNode_getChild(pp,i)); break;
        default: return nullptr;
    }
}

class GroupDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertynames;
    enum FieldConstants {
    };
  public:
    GroupDescriptor();
    virtual ~GroupDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyname) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyname) const override;
    virtual int getFieldArraySize(void *object, int field) const override;

    virtual const char *getFieldDynamicTypeString(void *object, int field, int i) const override;
    virtual std::string getFieldValueAsString(void *object, int field, int i) const override;
    virtual bool setFieldValueAsString(void *object, int field, int i, const char *value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual void *getFieldStructValuePointer(void *object, int field, int i) const override;
};

Register_ClassDescriptor(GroupDescriptor)

GroupDescriptor::GroupDescriptor() : omnetpp::cClassDescriptor(omnetpp::opp_typename(typeid(osg::Group)), "osg::Node")
{
    propertynames = nullptr;
}

GroupDescriptor::~GroupDescriptor()
{
    delete[] propertynames;
}

bool GroupDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<Group *>(obj)!=nullptr;
}

const char **GroupDescriptor::getPropertyNames() const
{
    if (!propertynames) {
        static const char *names[] = { "existingClass",  nullptr };
        omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
        const char **basenames = basedesc ? basedesc->getPropertyNames() : nullptr;
        propertynames = mergeLists(basenames, names);
    }
    return propertynames;
}

const char *GroupDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname, "existingClass")) return "";
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : nullptr;
}

int GroupDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount() : 0;
}

unsigned int GroupDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeFlags(field);
        field -= basedesc->getFieldCount();
    }
    return 0;
}

const char *GroupDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldName(field);
        field -= basedesc->getFieldCount();
    }
    return nullptr;
}

int GroupDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(fieldName) : -1;
}

const char *GroupDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeString(field);
        field -= basedesc->getFieldCount();
    }
    return nullptr;
}

const char **GroupDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldPropertyNames(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

const char *GroupDescriptor::getFieldProperty(int field, const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldProperty(field, propertyname);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

int GroupDescriptor::getFieldArraySize(void *object, int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldArraySize(object, field);
        field -= basedesc->getFieldCount();
    }
    Group *pp = (Group *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

const char *GroupDescriptor::getFieldDynamicTypeString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldDynamicTypeString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    Group *pp = (Group *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string GroupDescriptor::getFieldValueAsString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldValueAsString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    Group *pp = (Group *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool GroupDescriptor::setFieldValueAsString(void *object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->setFieldValueAsString(object,field,i,value);
        field -= basedesc->getFieldCount();
    }
    Group *pp = (Group *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *GroupDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructName(field);
        field -= basedesc->getFieldCount();
    }
    return nullptr;
}

void *GroupDescriptor::getFieldStructValuePointer(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructValuePointer(object, field, i);
        field -= basedesc->getFieldCount();
    }
    Group *pp = (Group *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

} // namespace osg

