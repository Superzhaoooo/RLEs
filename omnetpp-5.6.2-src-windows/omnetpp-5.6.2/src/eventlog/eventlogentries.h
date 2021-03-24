//=========================================================================
//  EVENTLOGENTRIES.H - part of
//                  OMNeT++/OMNEST
//           Discrete System Simulation in C++
//
//  This is a generated file -- do not modify.
//
//=========================================================================

#ifndef __OMNETPP_EVENTLOG_EVENTLOGENTRIES_H
#define __OMNETPP_EVENTLOG_EVENTLOGENTRIES_H

#include <cstdio>
#include "eventlogdefs.h"
#include "eventlogentry.h"

namespace omnetpp {
namespace eventlog {

class Event;


class EVENTLOG_API SimulationBeginEntry : public EventLogTokenBasedEntry
{
   public:
      SimulationBeginEntry();
      SimulationBeginEntry(Event *event, int entryIndex);

   public:
      int version;
      const char * runId;
      int keyframeBlockSize;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 1; }
      virtual const char *getAsString() const override { return "SB"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "SimulationBeginEntry"; }
};

class EVENTLOG_API SimulationEndEntry : public EventLogTokenBasedEntry
{
   public:
      SimulationEndEntry();
      SimulationEndEntry(Event *event, int entryIndex);

   public:
      bool isError;
      int resultCode;
      const char * message;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 2; }
      virtual const char *getAsString() const override { return "SE"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "SimulationEndEntry"; }
};

class EVENTLOG_API BubbleEntry : public EventLogTokenBasedEntry
{
   public:
      BubbleEntry();
      BubbleEntry(Event *event, int entryIndex);

   public:
      int moduleId;
      const char * text;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 3; }
      virtual const char *getAsString() const override { return "BU"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "BubbleEntry"; }
};

class EVENTLOG_API ModuleMethodBeginEntry : public EventLogTokenBasedEntry
{
   public:
      ModuleMethodBeginEntry();
      ModuleMethodBeginEntry(Event *event, int entryIndex);

   public:
      int fromModuleId;
      int toModuleId;
      const char * method;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 4; }
      virtual const char *getAsString() const override { return "MB"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "ModuleMethodBeginEntry"; }
};

class EVENTLOG_API ModuleMethodEndEntry : public EventLogTokenBasedEntry
{
   public:
      ModuleMethodEndEntry();
      ModuleMethodEndEntry(Event *event, int entryIndex);

   public:

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 5; }
      virtual const char *getAsString() const override { return "ME"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "ModuleMethodEndEntry"; }
};

class EVENTLOG_API ModuleCreatedEntry : public EventLogTokenBasedEntry
{
   public:
      ModuleCreatedEntry();
      ModuleCreatedEntry(Event *event, int entryIndex);

   public:
      int moduleId;
      const char * moduleClassName;
      const char * nedTypeName;
      int parentModuleId;
      const char * fullName;
      bool compoundModule;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 6; }
      virtual const char *getAsString() const override { return "MC"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "ModuleCreatedEntry"; }
};

class EVENTLOG_API ModuleDeletedEntry : public EventLogTokenBasedEntry
{
   public:
      ModuleDeletedEntry();
      ModuleDeletedEntry(Event *event, int entryIndex);

   public:
      int moduleId;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 7; }
      virtual const char *getAsString() const override { return "MD"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "ModuleDeletedEntry"; }
};

class EVENTLOG_API GateCreatedEntry : public EventLogTokenBasedEntry
{
   public:
      GateCreatedEntry();
      GateCreatedEntry(Event *event, int entryIndex);

   public:
      int moduleId;
      int gateId;
      const char * name;
      int index;
      bool isOutput;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 8; }
      virtual const char *getAsString() const override { return "GC"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "GateCreatedEntry"; }
};

class EVENTLOG_API GateDeletedEntry : public EventLogTokenBasedEntry
{
   public:
      GateDeletedEntry();
      GateDeletedEntry(Event *event, int entryIndex);

   public:
      int moduleId;
      int gateId;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 9; }
      virtual const char *getAsString() const override { return "GD"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "GateDeletedEntry"; }
};

class EVENTLOG_API ConnectionCreatedEntry : public EventLogTokenBasedEntry
{
   public:
      ConnectionCreatedEntry();
      ConnectionCreatedEntry(Event *event, int entryIndex);

   public:
      int sourceModuleId;
      int sourceGateId;
      int destModuleId;
      int destGateId;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 10; }
      virtual const char *getAsString() const override { return "CC"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "ConnectionCreatedEntry"; }
};

class EVENTLOG_API ConnectionDeletedEntry : public EventLogTokenBasedEntry
{
   public:
      ConnectionDeletedEntry();
      ConnectionDeletedEntry(Event *event, int entryIndex);

   public:
      int sourceModuleId;
      int sourceGateId;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 11; }
      virtual const char *getAsString() const override { return "CD"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "ConnectionDeletedEntry"; }
};

class EVENTLOG_API ConnectionDisplayStringChangedEntry : public EventLogTokenBasedEntry
{
   public:
      ConnectionDisplayStringChangedEntry();
      ConnectionDisplayStringChangedEntry(Event *event, int entryIndex);

   public:
      int sourceModuleId;
      int sourceGateId;
      const char * displayString;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 12; }
      virtual const char *getAsString() const override { return "CS"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "ConnectionDisplayStringChangedEntry"; }
};

class EVENTLOG_API ModuleDisplayStringChangedEntry : public EventLogTokenBasedEntry
{
   public:
      ModuleDisplayStringChangedEntry();
      ModuleDisplayStringChangedEntry(Event *event, int entryIndex);

   public:
      int moduleId;
      const char * displayString;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 13; }
      virtual const char *getAsString() const override { return "MS"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "ModuleDisplayStringChangedEntry"; }
};

class EVENTLOG_API EventEntry : public EventLogTokenBasedEntry
{
   public:
      EventEntry();
      EventEntry(Event *event, int entryIndex);

   public:
      eventnumber_t eventNumber;
      simtime_t simulationTime;
      int moduleId;
      eventnumber_t causeEventNumber;
      long messageId;
      const char * fingerprints;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 14; }
      virtual const char *getAsString() const override { return "E"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "EventEntry"; }
};

class EVENTLOG_API KeyframeEntry : public EventLogTokenBasedEntry
{
   public:
      KeyframeEntry();
      KeyframeEntry(Event *event, int entryIndex);

   public:
      int64_t previousKeyframeFileOffset;
      const char * consequenceLookaheadLimits;
      const char * simulationStateEntries;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 15; }
      virtual const char *getAsString() const override { return "KF"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "KeyframeEntry"; }
};

class EVENTLOG_API MessageEntry : public EventLogTokenBasedEntry
{
   public:
      MessageEntry();
      MessageEntry(Event *event, int entryIndex);

   public:
      long messageId;
      long messageTreeId;
      long messageEncapsulationId;
      long messageEncapsulationTreeId;
      const char * messageClassName;
      const char * messageName;
      short messageKind;
      short messagePriority;
      int64_t messageLength;
      bool hasBitError;
      const char * detail;
      eventnumber_t previousEventNumber;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 16; }
      virtual const char *getAsString() const override { return "abstract"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "MessageEntry"; }
};

class EVENTLOG_API CancelEventEntry : public MessageEntry
{
   public:
      CancelEventEntry();
      CancelEventEntry(Event *event, int entryIndex);

   public:

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 17; }
      virtual const char *getAsString() const override { return "CE"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "CancelEventEntry"; }
};

class EVENTLOG_API BeginSendEntry : public MessageEntry
{
   public:
      BeginSendEntry();
      BeginSendEntry(Event *event, int entryIndex);

   public:

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 18; }
      virtual const char *getAsString() const override { return "BS"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "BeginSendEntry"; }
};

class EVENTLOG_API EndSendEntry : public EventLogTokenBasedEntry
{
   public:
      EndSendEntry();
      EndSendEntry(Event *event, int entryIndex);

   public:
      simtime_t arrivalTime;
      bool isReceptionStart;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 19; }
      virtual const char *getAsString() const override { return "ES"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "EndSendEntry"; }
};

class EVENTLOG_API SendDirectEntry : public EventLogTokenBasedEntry
{
   public:
      SendDirectEntry();
      SendDirectEntry(Event *event, int entryIndex);

   public:
      int senderModuleId;
      int destModuleId;
      int destGateId;
      simtime_t propagationDelay;
      simtime_t transmissionDelay;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 20; }
      virtual const char *getAsString() const override { return "SD"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "SendDirectEntry"; }
};

class EVENTLOG_API SendHopEntry : public EventLogTokenBasedEntry
{
   public:
      SendHopEntry();
      SendHopEntry(Event *event, int entryIndex);

   public:
      int senderModuleId;
      int senderGateId;
      simtime_t propagationDelay;
      simtime_t transmissionDelay;
      bool discard;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 21; }
      virtual const char *getAsString() const override { return "SH"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "SendHopEntry"; }
};

class EVENTLOG_API CreateMessageEntry : public MessageEntry
{
   public:
      CreateMessageEntry();
      CreateMessageEntry(Event *event, int entryIndex);

   public:

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 22; }
      virtual const char *getAsString() const override { return "CM"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "CreateMessageEntry"; }
};

class EVENTLOG_API CloneMessageEntry : public MessageEntry
{
   public:
      CloneMessageEntry();
      CloneMessageEntry(Event *event, int entryIndex);

   public:
      long cloneId;

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 23; }
      virtual const char *getAsString() const override { return "CL"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "CloneMessageEntry"; }
};

class EVENTLOG_API DeleteMessageEntry : public MessageEntry
{
   public:
      DeleteMessageEntry();
      DeleteMessageEntry(Event *event, int entryIndex);

   public:

   public:
      virtual void parse(char **tokens, int numTokens) override;
      virtual void print(FILE *file) override;
      virtual int getClassIndex() override { return 24; }
      virtual const char *getAsString() const override { return "DM"; }
      virtual const std::vector<const char *> getAttributeNames() const override;
      virtual const char *getAsString(const char *attribute) const override; // BEWARE: Returns pointer into a static buffer which gets overwritten with each call!
      virtual const char *getClassName() override { return "DeleteMessageEntry"; }
};

} // namespace eventlog
} // namespace omnetpp

#endif
