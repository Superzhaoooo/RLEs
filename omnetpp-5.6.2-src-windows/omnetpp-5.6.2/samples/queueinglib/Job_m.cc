//
// Generated file, do not edit! Created by nedtool 5.6 from Job.msg.
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
#include "Job_m.h"

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

namespace queueing {

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

Job_Base::Job_Base(const char *name, short kind) : ::omnetpp::cMessage(name, kind)
{
}

Job_Base::Job_Base(const Job_Base& other) : ::omnetpp::cMessage(other)
{
    copy(other);
}

Job_Base::~Job_Base()
{
}

Job_Base& Job_Base::operator=(const Job_Base& other)
{
    if (this == &other) return *this;
    ::omnetpp::cMessage::operator=(other);
    copy(other);
    return *this;
}

void Job_Base::copy(const Job_Base& other)
{
    this->priority = other.priority;
    this->totalQueueingTime = other.totalQueueingTime;
    this->totalServiceTime = other.totalServiceTime;
    this->totalDelayTime = other.totalDelayTime;
    this->queueCount = other.queueCount;
    this->delayCount = other.delayCount;
    this->generation = other.generation;
}

void Job_Base::parsimPack(omnetpp::cCommBuffer *b) const
{
    ::omnetpp::cMessage::parsimPack(b);
    doParsimPacking(b,this->priority);
    doParsimPacking(b,this->totalQueueingTime);
    doParsimPacking(b,this->totalServiceTime);
    doParsimPacking(b,this->totalDelayTime);
    doParsimPacking(b,this->queueCount);
    doParsimPacking(b,this->delayCount);
    doParsimPacking(b,this->generation);
}

void Job_Base::parsimUnpack(omnetpp::cCommBuffer *b)
{
    ::omnetpp::cMessage::parsimUnpack(b);
    doParsimUnpacking(b,this->priority);
    doParsimUnpacking(b,this->totalQueueingTime);
    doParsimUnpacking(b,this->totalServiceTime);
    doParsimUnpacking(b,this->totalDelayTime);
    doParsimUnpacking(b,this->queueCount);
    doParsimUnpacking(b,this->delayCount);
    doParsimUnpacking(b,this->generation);
}

int Job_Base::getPriority() const
{
    return this->priority;
}

void Job_Base::setPriority(int priority)
{
    this->priority = priority;
}

omnetpp::simtime_t Job_Base::getTotalQueueingTime() const
{
    return this->totalQueueingTime;
}

void Job_Base::setTotalQueueingTime(omnetpp::simtime_t totalQueueingTime)
{
    this->totalQueueingTime = totalQueueingTime;
}

omnetpp::simtime_t Job_Base::getTotalServiceTime() const
{
    return this->totalServiceTime;
}

void Job_Base::setTotalServiceTime(omnetpp::simtime_t totalServiceTime)
{
    this->totalServiceTime = totalServiceTime;
}

omnetpp::simtime_t Job_Base::getTotalDelayTime() const
{
    return this->totalDelayTime;
}

void Job_Base::setTotalDelayTime(omnetpp::simtime_t totalDelayTime)
{
    this->totalDelayTime = totalDelayTime;
}

int Job_Base::getQueueCount() const
{
    return this->queueCount;
}

void Job_Base::setQueueCount(int queueCount)
{
    this->queueCount = queueCount;
}

int Job_Base::getDelayCount() const
{
    return this->delayCount;
}

void Job_Base::setDelayCount(int delayCount)
{
    this->delayCount = delayCount;
}

int Job_Base::getGeneration() const
{
    return this->generation;
}

void Job_Base::setGeneration(int generation)
{
    this->generation = generation;
}

class JobDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertynames;
    enum FieldConstants {
        FIELD_priority,
        FIELD_totalQueueingTime,
        FIELD_totalServiceTime,
        FIELD_totalDelayTime,
        FIELD_queueCount,
        FIELD_delayCount,
        FIELD_generation,
    };
  public:
    JobDescriptor();
    virtual ~JobDescriptor();

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

Register_ClassDescriptor(JobDescriptor)

JobDescriptor::JobDescriptor() : omnetpp::cClassDescriptor("queueing::Job", "omnetpp::cMessage")
{
    propertynames = nullptr;
}

JobDescriptor::~JobDescriptor()
{
    delete[] propertynames;
}

bool JobDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<Job_Base *>(obj)!=nullptr;
}

const char **JobDescriptor::getPropertyNames() const
{
    if (!propertynames) {
        static const char *names[] = { "customize",  nullptr };
        omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
        const char **basenames = basedesc ? basedesc->getPropertyNames() : nullptr;
        propertynames = mergeLists(basenames, names);
    }
    return propertynames;
}

const char *JobDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname, "customize")) return "true";
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : nullptr;
}

int JobDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount() : 7;
}

unsigned int JobDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeFlags(field);
        field -= basedesc->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,    // FIELD_priority
        0,    // FIELD_totalQueueingTime
        0,    // FIELD_totalServiceTime
        0,    // FIELD_totalDelayTime
        FD_ISEDITABLE,    // FIELD_queueCount
        FD_ISEDITABLE,    // FIELD_delayCount
        FD_ISEDITABLE,    // FIELD_generation
    };
    return (field >= 0 && field < 7) ? fieldTypeFlags[field] : 0;
}

const char *JobDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldName(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldNames[] = {
        "priority",
        "totalQueueingTime",
        "totalServiceTime",
        "totalDelayTime",
        "queueCount",
        "delayCount",
        "generation",
    };
    return (field >= 0 && field < 7) ? fieldNames[field] : nullptr;
}

int JobDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount() : 0;
    if (fieldName[0] == 'p' && strcmp(fieldName, "priority") == 0) return base+0;
    if (fieldName[0] == 't' && strcmp(fieldName, "totalQueueingTime") == 0) return base+1;
    if (fieldName[0] == 't' && strcmp(fieldName, "totalServiceTime") == 0) return base+2;
    if (fieldName[0] == 't' && strcmp(fieldName, "totalDelayTime") == 0) return base+3;
    if (fieldName[0] == 'q' && strcmp(fieldName, "queueCount") == 0) return base+4;
    if (fieldName[0] == 'd' && strcmp(fieldName, "delayCount") == 0) return base+5;
    if (fieldName[0] == 'g' && strcmp(fieldName, "generation") == 0) return base+6;
    return basedesc ? basedesc->findField(fieldName) : -1;
}

const char *JobDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeString(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "int",    // FIELD_priority
        "omnetpp::simtime_t",    // FIELD_totalQueueingTime
        "omnetpp::simtime_t",    // FIELD_totalServiceTime
        "omnetpp::simtime_t",    // FIELD_totalDelayTime
        "int",    // FIELD_queueCount
        "int",    // FIELD_delayCount
        "int",    // FIELD_generation
    };
    return (field >= 0 && field < 7) ? fieldTypeStrings[field] : nullptr;
}

const char **JobDescriptor::getFieldPropertyNames(int field) const
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

const char *JobDescriptor::getFieldProperty(int field, const char *propertyname) const
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

int JobDescriptor::getFieldArraySize(void *object, int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldArraySize(object, field);
        field -= basedesc->getFieldCount();
    }
    Job_Base *pp = (Job_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

const char *JobDescriptor::getFieldDynamicTypeString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldDynamicTypeString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    Job_Base *pp = (Job_Base *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string JobDescriptor::getFieldValueAsString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldValueAsString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    Job_Base *pp = (Job_Base *)object; (void)pp;
    switch (field) {
        case FIELD_priority: return long2string(pp->getPriority());
        case FIELD_totalQueueingTime: return simtime2string(pp->getTotalQueueingTime());
        case FIELD_totalServiceTime: return simtime2string(pp->getTotalServiceTime());
        case FIELD_totalDelayTime: return simtime2string(pp->getTotalDelayTime());
        case FIELD_queueCount: return long2string(pp->getQueueCount());
        case FIELD_delayCount: return long2string(pp->getDelayCount());
        case FIELD_generation: return long2string(pp->getGeneration());
        default: return "";
    }
}

bool JobDescriptor::setFieldValueAsString(void *object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->setFieldValueAsString(object,field,i,value);
        field -= basedesc->getFieldCount();
    }
    Job_Base *pp = (Job_Base *)object; (void)pp;
    switch (field) {
        case FIELD_priority: pp->setPriority(string2long(value)); return true;
        case FIELD_queueCount: pp->setQueueCount(string2long(value)); return true;
        case FIELD_delayCount: pp->setDelayCount(string2long(value)); return true;
        case FIELD_generation: pp->setGeneration(string2long(value)); return true;
        default: return false;
    }
}

const char *JobDescriptor::getFieldStructName(int field) const
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

void *JobDescriptor::getFieldStructValuePointer(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructValuePointer(object, field, i);
        field -= basedesc->getFieldCount();
    }
    Job_Base *pp = (Job_Base *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

} // namespace queueing

