//=========================================================================
//  EVENTLOGENTRIES.CC - part of
//                  OMNeT++/OMNEST
//           Discrete System Simulation in C++
//
//  This is a generated file -- do not modify.
//
//=========================================================================

#include <cstdio>
#include "event.h"
#include "eventlogentries.h"
#include "common/stringutil.h"

namespace omnetpp {
namespace eventlog {

using namespace omnetpp::common;

SimulationBeginEntry::SimulationBeginEntry()
{
    this->event = nullptr;
    version = -1;
    runId = nullptr;
    keyframeBlockSize = -1;
}

SimulationBeginEntry::SimulationBeginEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
    version = -1;
    runId = nullptr;
    keyframeBlockSize = -1;
}

void SimulationBeginEntry::parse(char **tokens, int numTokens)
{
    version = getIntToken(tokens, numTokens, "v", true, version);
    runId = getStringToken(tokens, numTokens, "rid", true, runId);
    keyframeBlockSize = getIntToken(tokens, numTokens, "b", true, keyframeBlockSize);
}

void SimulationBeginEntry::print(FILE *fout)
{
    fprintf(fout, "SB");
    fprintf(fout, " v %d", version);
    fprintf(fout, " rid %s", QUOTE(runId));
    fprintf(fout, " b %d", keyframeBlockSize);
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> SimulationBeginEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    names.push_back("v");
    names.push_back("rid");
    names.push_back("b");
    return names;
}

const char *SimulationBeginEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "v"))
    {
        sprintf(buffer, "%d", version);
        return buffer;
    }
    else if (!strcmp(attribute, "rid"))
        return runId;
    else if (!strcmp(attribute, "b"))
    {
        sprintf(buffer, "%d", keyframeBlockSize);
        return buffer;
    }
    else
        return nullptr;
}

SimulationEndEntry::SimulationEndEntry()
{
    this->event = nullptr;
    isError = false;
    resultCode = -1;
    message = nullptr;
}

SimulationEndEntry::SimulationEndEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
    isError = false;
    resultCode = -1;
    message = nullptr;
}

void SimulationEndEntry::parse(char **tokens, int numTokens)
{
    isError = getBoolToken(tokens, numTokens, "e", true, isError);
    resultCode = getIntToken(tokens, numTokens, "c", true, resultCode);
    message = getStringToken(tokens, numTokens, "m", true, message);
}

void SimulationEndEntry::print(FILE *fout)
{
    fprintf(fout, "SE");
    fprintf(fout, " e %d", isError);
    fprintf(fout, " c %d", resultCode);
    fprintf(fout, " m %s", QUOTE(message));
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> SimulationEndEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    names.push_back("e");
    names.push_back("c");
    names.push_back("m");
    return names;
}

const char *SimulationEndEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "e"))
    {
        sprintf(buffer, "%d", isError);
        return buffer;
    }
    else if (!strcmp(attribute, "c"))
    {
        sprintf(buffer, "%d", resultCode);
        return buffer;
    }
    else if (!strcmp(attribute, "m"))
        return message;
    else
        return nullptr;
}

BubbleEntry::BubbleEntry()
{
    this->event = nullptr;
    moduleId = -1;
    text = nullptr;
}

BubbleEntry::BubbleEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
    moduleId = -1;
    text = nullptr;
}

void BubbleEntry::parse(char **tokens, int numTokens)
{
    moduleId = getIntToken(tokens, numTokens, "id", true, moduleId);
    text = getStringToken(tokens, numTokens, "txt", true, text);
}

void BubbleEntry::print(FILE *fout)
{
    fprintf(fout, "BU");
    fprintf(fout, " id %d", moduleId);
    fprintf(fout, " txt %s", QUOTE(text));
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> BubbleEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    names.push_back("id");
    names.push_back("txt");
    return names;
}

const char *BubbleEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "id"))
    {
        sprintf(buffer, "%d", moduleId);
        return buffer;
    }
    else if (!strcmp(attribute, "txt"))
        return text;
    else
        return nullptr;
}

ModuleMethodBeginEntry::ModuleMethodBeginEntry()
{
    this->event = nullptr;
    fromModuleId = -1;
    toModuleId = -1;
    method = nullptr;
}

ModuleMethodBeginEntry::ModuleMethodBeginEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
    fromModuleId = -1;
    toModuleId = -1;
    method = nullptr;
}

void ModuleMethodBeginEntry::parse(char **tokens, int numTokens)
{
    fromModuleId = getIntToken(tokens, numTokens, "sm", true, fromModuleId);
    toModuleId = getIntToken(tokens, numTokens, "tm", true, toModuleId);
    method = getStringToken(tokens, numTokens, "m", true, method);
}

void ModuleMethodBeginEntry::print(FILE *fout)
{
    fprintf(fout, "MB");
    fprintf(fout, " sm %d", fromModuleId);
    fprintf(fout, " tm %d", toModuleId);
    fprintf(fout, " m %s", QUOTE(method));
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> ModuleMethodBeginEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    names.push_back("sm");
    names.push_back("tm");
    names.push_back("m");
    return names;
}

const char *ModuleMethodBeginEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "sm"))
    {
        sprintf(buffer, "%d", fromModuleId);
        return buffer;
    }
    else if (!strcmp(attribute, "tm"))
    {
        sprintf(buffer, "%d", toModuleId);
        return buffer;
    }
    else if (!strcmp(attribute, "m"))
        return method;
    else
        return nullptr;
}

ModuleMethodEndEntry::ModuleMethodEndEntry()
{
    this->event = nullptr;
}

ModuleMethodEndEntry::ModuleMethodEndEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
}

void ModuleMethodEndEntry::parse(char **tokens, int numTokens)
{
}

void ModuleMethodEndEntry::print(FILE *fout)
{
    fprintf(fout, "ME");
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> ModuleMethodEndEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    return names;
}

const char *ModuleMethodEndEntry::getAsString(const char *attribute) const
{
    if (false);
    else
        return nullptr;
}

ModuleCreatedEntry::ModuleCreatedEntry()
{
    this->event = nullptr;
    moduleId = -1;
    moduleClassName = nullptr;
    nedTypeName = nullptr;
    parentModuleId = -1;
    fullName = nullptr;
    compoundModule = false;
}

ModuleCreatedEntry::ModuleCreatedEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
    moduleId = -1;
    moduleClassName = nullptr;
    nedTypeName = nullptr;
    parentModuleId = -1;
    fullName = nullptr;
    compoundModule = false;
}

void ModuleCreatedEntry::parse(char **tokens, int numTokens)
{
    moduleId = getIntToken(tokens, numTokens, "id", true, moduleId);
    moduleClassName = getStringToken(tokens, numTokens, "c", true, moduleClassName);
    nedTypeName = getStringToken(tokens, numTokens, "t", true, nedTypeName);
    parentModuleId = getIntToken(tokens, numTokens, "pid", false, parentModuleId);
    fullName = getStringToken(tokens, numTokens, "n", true, fullName);
    compoundModule = getBoolToken(tokens, numTokens, "cm", false, compoundModule);
}

void ModuleCreatedEntry::print(FILE *fout)
{
    fprintf(fout, "MC");
    fprintf(fout, " id %d", moduleId);
    fprintf(fout, " c %s", QUOTE(moduleClassName));
    fprintf(fout, " t %s", QUOTE(nedTypeName));
    if (parentModuleId != -1)
        fprintf(fout, " pid %d", parentModuleId);
    fprintf(fout, " n %s", QUOTE(fullName));
    if (compoundModule != false)
        fprintf(fout, " cm %d", compoundModule);
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> ModuleCreatedEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    names.push_back("id");
    names.push_back("c");
    names.push_back("t");
    names.push_back("pid");
    names.push_back("n");
    names.push_back("cm");
    return names;
}

const char *ModuleCreatedEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "id"))
    {
        sprintf(buffer, "%d", moduleId);
        return buffer;
    }
    else if (!strcmp(attribute, "c"))
        return moduleClassName;
    else if (!strcmp(attribute, "t"))
        return nedTypeName;
    else if (!strcmp(attribute, "pid"))
    {
        sprintf(buffer, "%d", parentModuleId);
        return buffer;
    }
    else if (!strcmp(attribute, "n"))
        return fullName;
    else if (!strcmp(attribute, "cm"))
    {
        sprintf(buffer, "%d", compoundModule);
        return buffer;
    }
    else
        return nullptr;
}

ModuleDeletedEntry::ModuleDeletedEntry()
{
    this->event = nullptr;
    moduleId = -1;
}

ModuleDeletedEntry::ModuleDeletedEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
    moduleId = -1;
}

void ModuleDeletedEntry::parse(char **tokens, int numTokens)
{
    moduleId = getIntToken(tokens, numTokens, "id", true, moduleId);
}

void ModuleDeletedEntry::print(FILE *fout)
{
    fprintf(fout, "MD");
    fprintf(fout, " id %d", moduleId);
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> ModuleDeletedEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    names.push_back("id");
    return names;
}

const char *ModuleDeletedEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "id"))
    {
        sprintf(buffer, "%d", moduleId);
        return buffer;
    }
    else
        return nullptr;
}

GateCreatedEntry::GateCreatedEntry()
{
    this->event = nullptr;
    moduleId = -1;
    gateId = -1;
    name = nullptr;
    index = -1;
    isOutput = false;
}

GateCreatedEntry::GateCreatedEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
    moduleId = -1;
    gateId = -1;
    name = nullptr;
    index = -1;
    isOutput = false;
}

void GateCreatedEntry::parse(char **tokens, int numTokens)
{
    moduleId = getIntToken(tokens, numTokens, "m", true, moduleId);
    gateId = getIntToken(tokens, numTokens, "g", true, gateId);
    name = getStringToken(tokens, numTokens, "n", true, name);
    index = getIntToken(tokens, numTokens, "i", false, index);
    isOutput = getBoolToken(tokens, numTokens, "o", true, isOutput);
}

void GateCreatedEntry::print(FILE *fout)
{
    fprintf(fout, "GC");
    fprintf(fout, " m %d", moduleId);
    fprintf(fout, " g %d", gateId);
    fprintf(fout, " n %s", QUOTE(name));
    if (index != -1)
        fprintf(fout, " i %d", index);
    fprintf(fout, " o %d", isOutput);
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> GateCreatedEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    names.push_back("m");
    names.push_back("g");
    names.push_back("n");
    names.push_back("i");
    names.push_back("o");
    return names;
}

const char *GateCreatedEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "m"))
    {
        sprintf(buffer, "%d", moduleId);
        return buffer;
    }
    else if (!strcmp(attribute, "g"))
    {
        sprintf(buffer, "%d", gateId);
        return buffer;
    }
    else if (!strcmp(attribute, "n"))
        return name;
    else if (!strcmp(attribute, "i"))
    {
        sprintf(buffer, "%d", index);
        return buffer;
    }
    else if (!strcmp(attribute, "o"))
    {
        sprintf(buffer, "%d", isOutput);
        return buffer;
    }
    else
        return nullptr;
}

GateDeletedEntry::GateDeletedEntry()
{
    this->event = nullptr;
    moduleId = -1;
    gateId = -1;
}

GateDeletedEntry::GateDeletedEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
    moduleId = -1;
    gateId = -1;
}

void GateDeletedEntry::parse(char **tokens, int numTokens)
{
    moduleId = getIntToken(tokens, numTokens, "m", true, moduleId);
    gateId = getIntToken(tokens, numTokens, "g", true, gateId);
}

void GateDeletedEntry::print(FILE *fout)
{
    fprintf(fout, "GD");
    fprintf(fout, " m %d", moduleId);
    fprintf(fout, " g %d", gateId);
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> GateDeletedEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    names.push_back("m");
    names.push_back("g");
    return names;
}

const char *GateDeletedEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "m"))
    {
        sprintf(buffer, "%d", moduleId);
        return buffer;
    }
    else if (!strcmp(attribute, "g"))
    {
        sprintf(buffer, "%d", gateId);
        return buffer;
    }
    else
        return nullptr;
}

ConnectionCreatedEntry::ConnectionCreatedEntry()
{
    this->event = nullptr;
    sourceModuleId = -1;
    sourceGateId = -1;
    destModuleId = -1;
    destGateId = -1;
}

ConnectionCreatedEntry::ConnectionCreatedEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
    sourceModuleId = -1;
    sourceGateId = -1;
    destModuleId = -1;
    destGateId = -1;
}

void ConnectionCreatedEntry::parse(char **tokens, int numTokens)
{
    sourceModuleId = getIntToken(tokens, numTokens, "sm", true, sourceModuleId);
    sourceGateId = getIntToken(tokens, numTokens, "sg", true, sourceGateId);
    destModuleId = getIntToken(tokens, numTokens, "dm", true, destModuleId);
    destGateId = getIntToken(tokens, numTokens, "dg", true, destGateId);
}

void ConnectionCreatedEntry::print(FILE *fout)
{
    fprintf(fout, "CC");
    fprintf(fout, " sm %d", sourceModuleId);
    fprintf(fout, " sg %d", sourceGateId);
    fprintf(fout, " dm %d", destModuleId);
    fprintf(fout, " dg %d", destGateId);
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> ConnectionCreatedEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    names.push_back("sm");
    names.push_back("sg");
    names.push_back("dm");
    names.push_back("dg");
    return names;
}

const char *ConnectionCreatedEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "sm"))
    {
        sprintf(buffer, "%d", sourceModuleId);
        return buffer;
    }
    else if (!strcmp(attribute, "sg"))
    {
        sprintf(buffer, "%d", sourceGateId);
        return buffer;
    }
    else if (!strcmp(attribute, "dm"))
    {
        sprintf(buffer, "%d", destModuleId);
        return buffer;
    }
    else if (!strcmp(attribute, "dg"))
    {
        sprintf(buffer, "%d", destGateId);
        return buffer;
    }
    else
        return nullptr;
}

ConnectionDeletedEntry::ConnectionDeletedEntry()
{
    this->event = nullptr;
    sourceModuleId = -1;
    sourceGateId = -1;
}

ConnectionDeletedEntry::ConnectionDeletedEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
    sourceModuleId = -1;
    sourceGateId = -1;
}

void ConnectionDeletedEntry::parse(char **tokens, int numTokens)
{
    sourceModuleId = getIntToken(tokens, numTokens, "sm", true, sourceModuleId);
    sourceGateId = getIntToken(tokens, numTokens, "sg", true, sourceGateId);
}

void ConnectionDeletedEntry::print(FILE *fout)
{
    fprintf(fout, "CD");
    fprintf(fout, " sm %d", sourceModuleId);
    fprintf(fout, " sg %d", sourceGateId);
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> ConnectionDeletedEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    names.push_back("sm");
    names.push_back("sg");
    return names;
}

const char *ConnectionDeletedEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "sm"))
    {
        sprintf(buffer, "%d", sourceModuleId);
        return buffer;
    }
    else if (!strcmp(attribute, "sg"))
    {
        sprintf(buffer, "%d", sourceGateId);
        return buffer;
    }
    else
        return nullptr;
}

ConnectionDisplayStringChangedEntry::ConnectionDisplayStringChangedEntry()
{
    this->event = nullptr;
    sourceModuleId = -1;
    sourceGateId = -1;
    displayString = nullptr;
}

ConnectionDisplayStringChangedEntry::ConnectionDisplayStringChangedEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
    sourceModuleId = -1;
    sourceGateId = -1;
    displayString = nullptr;
}

void ConnectionDisplayStringChangedEntry::parse(char **tokens, int numTokens)
{
    sourceModuleId = getIntToken(tokens, numTokens, "sm", true, sourceModuleId);
    sourceGateId = getIntToken(tokens, numTokens, "sg", true, sourceGateId);
    displayString = getStringToken(tokens, numTokens, "d", true, displayString);
}

void ConnectionDisplayStringChangedEntry::print(FILE *fout)
{
    fprintf(fout, "CS");
    fprintf(fout, " sm %d", sourceModuleId);
    fprintf(fout, " sg %d", sourceGateId);
    fprintf(fout, " d %s", QUOTE(displayString));
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> ConnectionDisplayStringChangedEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    names.push_back("sm");
    names.push_back("sg");
    names.push_back("d");
    return names;
}

const char *ConnectionDisplayStringChangedEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "sm"))
    {
        sprintf(buffer, "%d", sourceModuleId);
        return buffer;
    }
    else if (!strcmp(attribute, "sg"))
    {
        sprintf(buffer, "%d", sourceGateId);
        return buffer;
    }
    else if (!strcmp(attribute, "d"))
        return displayString;
    else
        return nullptr;
}

ModuleDisplayStringChangedEntry::ModuleDisplayStringChangedEntry()
{
    this->event = nullptr;
    moduleId = -1;
    displayString = nullptr;
}

ModuleDisplayStringChangedEntry::ModuleDisplayStringChangedEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
    moduleId = -1;
    displayString = nullptr;
}

void ModuleDisplayStringChangedEntry::parse(char **tokens, int numTokens)
{
    moduleId = getIntToken(tokens, numTokens, "id", true, moduleId);
    displayString = getStringToken(tokens, numTokens, "d", true, displayString);
}

void ModuleDisplayStringChangedEntry::print(FILE *fout)
{
    fprintf(fout, "MS");
    fprintf(fout, " id %d", moduleId);
    fprintf(fout, " d %s", QUOTE(displayString));
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> ModuleDisplayStringChangedEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    names.push_back("id");
    names.push_back("d");
    return names;
}

const char *ModuleDisplayStringChangedEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "id"))
    {
        sprintf(buffer, "%d", moduleId);
        return buffer;
    }
    else if (!strcmp(attribute, "d"))
        return displayString;
    else
        return nullptr;
}

EventEntry::EventEntry()
{
    this->event = nullptr;
    eventNumber = -1;
    simulationTime = simtime_nil;
    moduleId = -1;
    causeEventNumber = -1;
    messageId = -1;
    fingerprints = NULL;
}

EventEntry::EventEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
    eventNumber = -1;
    simulationTime = simtime_nil;
    moduleId = -1;
    causeEventNumber = -1;
    messageId = -1;
    fingerprints = NULL;
}

void EventEntry::parse(char **tokens, int numTokens)
{
    eventNumber = getEventNumberToken(tokens, numTokens, "#", true, eventNumber);
    simulationTime = getSimtimeToken(tokens, numTokens, "t", true, simulationTime);
    moduleId = getIntToken(tokens, numTokens, "m", true, moduleId);
    causeEventNumber = getEventNumberToken(tokens, numTokens, "ce", true, causeEventNumber);
    messageId = getLongToken(tokens, numTokens, "msg", true, messageId);
    fingerprints = getStringToken(tokens, numTokens, "f", false, fingerprints);
}

void EventEntry::print(FILE *fout)
{
    fprintf(fout, "E");
    fprintf(fout, " # %" EVENTNUMBER_PRINTF_FORMAT "", eventNumber);
    fprintf(fout, " t %s", simulationTime.str(buffer));
    fprintf(fout, " m %d", moduleId);
    fprintf(fout, " ce %" EVENTNUMBER_PRINTF_FORMAT "", causeEventNumber);
    fprintf(fout, " msg %ld", messageId);
    if (fingerprints)
        fprintf(fout, " f %s", QUOTE(fingerprints));
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> EventEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    names.push_back("#");
    names.push_back("t");
    names.push_back("m");
    names.push_back("ce");
    names.push_back("msg");
    names.push_back("f");
    return names;
}

const char *EventEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "#"))
    {
        sprintf(buffer, "%" EVENTNUMBER_PRINTF_FORMAT "", eventNumber);
        return buffer;
    }
    else if (!strcmp(attribute, "t"))
        return simulationTime.str(buffer);
    else if (!strcmp(attribute, "m"))
    {
        sprintf(buffer, "%d", moduleId);
        return buffer;
    }
    else if (!strcmp(attribute, "ce"))
    {
        sprintf(buffer, "%" EVENTNUMBER_PRINTF_FORMAT "", causeEventNumber);
        return buffer;
    }
    else if (!strcmp(attribute, "msg"))
    {
        sprintf(buffer, "%ld", messageId);
        return buffer;
    }
    else if (!strcmp(attribute, "f"))
        return fingerprints;
    else
        return nullptr;
}

KeyframeEntry::KeyframeEntry()
{
    this->event = nullptr;
    previousKeyframeFileOffset = -1;
    consequenceLookaheadLimits = nullptr;
    simulationStateEntries = nullptr;
}

KeyframeEntry::KeyframeEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
    previousKeyframeFileOffset = -1;
    consequenceLookaheadLimits = nullptr;
    simulationStateEntries = nullptr;
}

void KeyframeEntry::parse(char **tokens, int numTokens)
{
    previousKeyframeFileOffset = getInt64Token(tokens, numTokens, "p", true, previousKeyframeFileOffset);
    consequenceLookaheadLimits = getStringToken(tokens, numTokens, "c", true, consequenceLookaheadLimits);
    simulationStateEntries = getStringToken(tokens, numTokens, "s", true, simulationStateEntries);
}

void KeyframeEntry::print(FILE *fout)
{
    fprintf(fout, "KF");
    fprintf(fout, " p %" PRId64 "", previousKeyframeFileOffset);
    fprintf(fout, " c %s", QUOTE(consequenceLookaheadLimits));
    fprintf(fout, " s %s", QUOTE(simulationStateEntries));
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> KeyframeEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    names.push_back("p");
    names.push_back("c");
    names.push_back("s");
    return names;
}

const char *KeyframeEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "p"))
    {
        sprintf(buffer, "%" PRId64 "", previousKeyframeFileOffset);
        return buffer;
    }
    else if (!strcmp(attribute, "c"))
        return consequenceLookaheadLimits;
    else if (!strcmp(attribute, "s"))
        return simulationStateEntries;
    else
        return nullptr;
}

MessageEntry::MessageEntry()
{
    this->event = nullptr;
    messageId = -1;
    messageTreeId = -1;
    messageEncapsulationId = -1;
    messageEncapsulationTreeId = -1;
    messageClassName = nullptr;
    messageName = nullptr;
    messageKind = 0;
    messagePriority = 0;
    messageLength = 0;
    hasBitError = false;
    detail = NULL;
    previousEventNumber = -1;
}

MessageEntry::MessageEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
    messageId = -1;
    messageTreeId = -1;
    messageEncapsulationId = -1;
    messageEncapsulationTreeId = -1;
    messageClassName = nullptr;
    messageName = nullptr;
    messageKind = 0;
    messagePriority = 0;
    messageLength = 0;
    hasBitError = false;
    detail = NULL;
    previousEventNumber = -1;
}

void MessageEntry::parse(char **tokens, int numTokens)
{
    messageId = getLongToken(tokens, numTokens, "id", true, messageId);
    messageTreeId = getLongToken(tokens, numTokens, "tid", true, messageTreeId);
    messageEncapsulationId = getLongToken(tokens, numTokens, "eid", true, messageEncapsulationId);
    messageEncapsulationTreeId = getLongToken(tokens, numTokens, "etid", true, messageEncapsulationTreeId);
    messageClassName = getStringToken(tokens, numTokens, "c", true, messageClassName);
    messageName = getStringToken(tokens, numTokens, "n", true, messageName);
    messageKind = getShortToken(tokens, numTokens, "k", false, messageKind);
    messagePriority = getShortToken(tokens, numTokens, "p", false, messagePriority);
    messageLength = getInt64Token(tokens, numTokens, "l", false, messageLength);
    hasBitError = getBoolToken(tokens, numTokens, "er", false, hasBitError);
    detail = getStringToken(tokens, numTokens, "d", false, detail);
    previousEventNumber = getEventNumberToken(tokens, numTokens, "pe", true, previousEventNumber);
}

void MessageEntry::print(FILE *fout)
{
    fprintf(fout, " id %ld", messageId);
    fprintf(fout, " tid %ld", messageTreeId);
    fprintf(fout, " eid %ld", messageEncapsulationId);
    fprintf(fout, " etid %ld", messageEncapsulationTreeId);
    fprintf(fout, " c %s", QUOTE(messageClassName));
    fprintf(fout, " n %s", QUOTE(messageName));
    if (messageKind != 0)
        fprintf(fout, " k %d", messageKind);
    if (messagePriority != 0)
        fprintf(fout, " p %d", messagePriority);
    if (messageLength != 0)
        fprintf(fout, " l %" PRId64 "", messageLength);
    if (hasBitError != false)
        fprintf(fout, " er %d", hasBitError);
    if (detail)
        fprintf(fout, " d %s", QUOTE(detail));
    fprintf(fout, " pe %" EVENTNUMBER_PRINTF_FORMAT "", previousEventNumber);
    fflush(fout);
}

const std::vector<const char *> MessageEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    names.push_back("id");
    names.push_back("tid");
    names.push_back("eid");
    names.push_back("etid");
    names.push_back("c");
    names.push_back("n");
    names.push_back("k");
    names.push_back("p");
    names.push_back("l");
    names.push_back("er");
    names.push_back("d");
    names.push_back("pe");
    return names;
}

const char *MessageEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "id"))
    {
        sprintf(buffer, "%ld", messageId);
        return buffer;
    }
    else if (!strcmp(attribute, "tid"))
    {
        sprintf(buffer, "%ld", messageTreeId);
        return buffer;
    }
    else if (!strcmp(attribute, "eid"))
    {
        sprintf(buffer, "%ld", messageEncapsulationId);
        return buffer;
    }
    else if (!strcmp(attribute, "etid"))
    {
        sprintf(buffer, "%ld", messageEncapsulationTreeId);
        return buffer;
    }
    else if (!strcmp(attribute, "c"))
        return messageClassName;
    else if (!strcmp(attribute, "n"))
        return messageName;
    else if (!strcmp(attribute, "k"))
    {
        sprintf(buffer, "%d", messageKind);
        return buffer;
    }
    else if (!strcmp(attribute, "p"))
    {
        sprintf(buffer, "%d", messagePriority);
        return buffer;
    }
    else if (!strcmp(attribute, "l"))
    {
        sprintf(buffer, "%" PRId64 "", messageLength);
        return buffer;
    }
    else if (!strcmp(attribute, "er"))
    {
        sprintf(buffer, "%d", hasBitError);
        return buffer;
    }
    else if (!strcmp(attribute, "d"))
        return detail;
    else if (!strcmp(attribute, "pe"))
    {
        sprintf(buffer, "%" EVENTNUMBER_PRINTF_FORMAT "", previousEventNumber);
        return buffer;
    }
    else
        return nullptr;
}

CancelEventEntry::CancelEventEntry()
    : MessageEntry()
{
}

CancelEventEntry::CancelEventEntry(Event *event, int entryIndex)
    : MessageEntry(event, entryIndex)
{
}

void CancelEventEntry::parse(char **tokens, int numTokens)
{
    MessageEntry::parse(tokens, numTokens);
}

void CancelEventEntry::print(FILE *fout)
{
    fprintf(fout, "CE");
    MessageEntry::print(fout);
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> CancelEventEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    std::vector<const char *> superNames = MessageEntry::getAttributeNames();
    names.insert(names.begin(), superNames.begin(), superNames.end());
    return names;
}

const char *CancelEventEntry::getAsString(const char *attribute) const
{
    if (false);
    else
        return MessageEntry::getAsString(attribute);
}

BeginSendEntry::BeginSendEntry()
    : MessageEntry()
{
}

BeginSendEntry::BeginSendEntry(Event *event, int entryIndex)
    : MessageEntry(event, entryIndex)
{
}

void BeginSendEntry::parse(char **tokens, int numTokens)
{
    MessageEntry::parse(tokens, numTokens);
}

void BeginSendEntry::print(FILE *fout)
{
    fprintf(fout, "BS");
    MessageEntry::print(fout);
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> BeginSendEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    std::vector<const char *> superNames = MessageEntry::getAttributeNames();
    names.insert(names.begin(), superNames.begin(), superNames.end());
    return names;
}

const char *BeginSendEntry::getAsString(const char *attribute) const
{
    if (false);
    else
        return MessageEntry::getAsString(attribute);
}

EndSendEntry::EndSendEntry()
{
    this->event = nullptr;
    arrivalTime = simtime_nil;
    isReceptionStart = false;
}

EndSendEntry::EndSendEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
    arrivalTime = simtime_nil;
    isReceptionStart = false;
}

void EndSendEntry::parse(char **tokens, int numTokens)
{
    arrivalTime = getSimtimeToken(tokens, numTokens, "t", true, arrivalTime);
    isReceptionStart = getBoolToken(tokens, numTokens, "is", false, isReceptionStart);
}

void EndSendEntry::print(FILE *fout)
{
    fprintf(fout, "ES");
    fprintf(fout, " t %s", arrivalTime.str(buffer));
    if (isReceptionStart != false)
        fprintf(fout, " is %d", isReceptionStart);
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> EndSendEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    names.push_back("t");
    names.push_back("is");
    return names;
}

const char *EndSendEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "t"))
        return arrivalTime.str(buffer);
    else if (!strcmp(attribute, "is"))
    {
        sprintf(buffer, "%d", isReceptionStart);
        return buffer;
    }
    else
        return nullptr;
}

SendDirectEntry::SendDirectEntry()
{
    this->event = nullptr;
    senderModuleId = -1;
    destModuleId = -1;
    destGateId = -1;
    propagationDelay = 0;
    transmissionDelay = 0;
}

SendDirectEntry::SendDirectEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
    senderModuleId = -1;
    destModuleId = -1;
    destGateId = -1;
    propagationDelay = 0;
    transmissionDelay = 0;
}

void SendDirectEntry::parse(char **tokens, int numTokens)
{
    senderModuleId = getIntToken(tokens, numTokens, "sm", true, senderModuleId);
    destModuleId = getIntToken(tokens, numTokens, "dm", true, destModuleId);
    destGateId = getIntToken(tokens, numTokens, "dg", true, destGateId);
    propagationDelay = getSimtimeToken(tokens, numTokens, "pd", false, propagationDelay);
    transmissionDelay = getSimtimeToken(tokens, numTokens, "td", false, transmissionDelay);
}

void SendDirectEntry::print(FILE *fout)
{
    fprintf(fout, "SD");
    fprintf(fout, " sm %d", senderModuleId);
    fprintf(fout, " dm %d", destModuleId);
    fprintf(fout, " dg %d", destGateId);
    if (propagationDelay != 0)
        fprintf(fout, " pd %s", propagationDelay.str(buffer));
    if (transmissionDelay != 0)
        fprintf(fout, " td %s", transmissionDelay.str(buffer));
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> SendDirectEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    names.push_back("sm");
    names.push_back("dm");
    names.push_back("dg");
    names.push_back("pd");
    names.push_back("td");
    return names;
}

const char *SendDirectEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "sm"))
    {
        sprintf(buffer, "%d", senderModuleId);
        return buffer;
    }
    else if (!strcmp(attribute, "dm"))
    {
        sprintf(buffer, "%d", destModuleId);
        return buffer;
    }
    else if (!strcmp(attribute, "dg"))
    {
        sprintf(buffer, "%d", destGateId);
        return buffer;
    }
    else if (!strcmp(attribute, "pd"))
        return propagationDelay.str(buffer);
    else if (!strcmp(attribute, "td"))
        return transmissionDelay.str(buffer);
    else
        return nullptr;
}

SendHopEntry::SendHopEntry()
{
    this->event = nullptr;
    senderModuleId = -1;
    senderGateId = -1;
    propagationDelay = 0;
    transmissionDelay = 0;
    discard = false;
}

SendHopEntry::SendHopEntry(Event *event, int entryIndex)
{
    this->event = event;
    this->entryIndex = entryIndex;
    senderModuleId = -1;
    senderGateId = -1;
    propagationDelay = 0;
    transmissionDelay = 0;
    discard = false;
}

void SendHopEntry::parse(char **tokens, int numTokens)
{
    senderModuleId = getIntToken(tokens, numTokens, "sm", true, senderModuleId);
    senderGateId = getIntToken(tokens, numTokens, "sg", true, senderGateId);
    propagationDelay = getSimtimeToken(tokens, numTokens, "pd", false, propagationDelay);
    transmissionDelay = getSimtimeToken(tokens, numTokens, "td", false, transmissionDelay);
    discard = getBoolToken(tokens, numTokens, "del", false, discard);
}

void SendHopEntry::print(FILE *fout)
{
    fprintf(fout, "SH");
    fprintf(fout, " sm %d", senderModuleId);
    fprintf(fout, " sg %d", senderGateId);
    if (propagationDelay != 0)
        fprintf(fout, " pd %s", propagationDelay.str(buffer));
    if (transmissionDelay != 0)
        fprintf(fout, " td %s", transmissionDelay.str(buffer));
    if (discard != false)
        fprintf(fout, " del %d", discard);
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> SendHopEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    names.push_back("sm");
    names.push_back("sg");
    names.push_back("pd");
    names.push_back("td");
    names.push_back("del");
    return names;
}

const char *SendHopEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "sm"))
    {
        sprintf(buffer, "%d", senderModuleId);
        return buffer;
    }
    else if (!strcmp(attribute, "sg"))
    {
        sprintf(buffer, "%d", senderGateId);
        return buffer;
    }
    else if (!strcmp(attribute, "pd"))
        return propagationDelay.str(buffer);
    else if (!strcmp(attribute, "td"))
        return transmissionDelay.str(buffer);
    else if (!strcmp(attribute, "del"))
    {
        sprintf(buffer, "%d", discard);
        return buffer;
    }
    else
        return nullptr;
}

CreateMessageEntry::CreateMessageEntry()
    : MessageEntry()
{
}

CreateMessageEntry::CreateMessageEntry(Event *event, int entryIndex)
    : MessageEntry(event, entryIndex)
{
}

void CreateMessageEntry::parse(char **tokens, int numTokens)
{
    MessageEntry::parse(tokens, numTokens);
}

void CreateMessageEntry::print(FILE *fout)
{
    fprintf(fout, "CM");
    MessageEntry::print(fout);
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> CreateMessageEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    std::vector<const char *> superNames = MessageEntry::getAttributeNames();
    names.insert(names.begin(), superNames.begin(), superNames.end());
    return names;
}

const char *CreateMessageEntry::getAsString(const char *attribute) const
{
    if (false);
    else
        return MessageEntry::getAsString(attribute);
}

CloneMessageEntry::CloneMessageEntry()
    : MessageEntry()
{
    cloneId = -1;
}

CloneMessageEntry::CloneMessageEntry(Event *event, int entryIndex)
    : MessageEntry(event, entryIndex)
{
    cloneId = -1;
}

void CloneMessageEntry::parse(char **tokens, int numTokens)
{
    MessageEntry::parse(tokens, numTokens);
    cloneId = getLongToken(tokens, numTokens, "cid", true, cloneId);
}

void CloneMessageEntry::print(FILE *fout)
{
    fprintf(fout, "CL");
    MessageEntry::print(fout);
    fprintf(fout, " cid %ld", cloneId);
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> CloneMessageEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    std::vector<const char *> superNames = MessageEntry::getAttributeNames();
    names.insert(names.begin(), superNames.begin(), superNames.end());
    names.push_back("cid");
    return names;
}

const char *CloneMessageEntry::getAsString(const char *attribute) const
{
    if (false);
    else if (!strcmp(attribute, "cid"))
    {
        sprintf(buffer, "%ld", cloneId);
        return buffer;
    }
    else
        return MessageEntry::getAsString(attribute);
}

DeleteMessageEntry::DeleteMessageEntry()
    : MessageEntry()
{
}

DeleteMessageEntry::DeleteMessageEntry(Event *event, int entryIndex)
    : MessageEntry(event, entryIndex)
{
}

void DeleteMessageEntry::parse(char **tokens, int numTokens)
{
    MessageEntry::parse(tokens, numTokens);
}

void DeleteMessageEntry::print(FILE *fout)
{
    fprintf(fout, "DM");
    MessageEntry::print(fout);
    fprintf(fout, "\n");
    fflush(fout);
}

const std::vector<const char *> DeleteMessageEntry::getAttributeNames() const
{
    std::vector<const char *> names;
    std::vector<const char *> superNames = MessageEntry::getAttributeNames();
    names.insert(names.begin(), superNames.begin(), superNames.end());
    return names;
}

const char *DeleteMessageEntry::getAsString(const char *attribute) const
{
    if (false);
    else
        return MessageEntry::getAsString(attribute);
}

} // namespace eventlog
} // namespace omnetpp
