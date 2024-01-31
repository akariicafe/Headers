@class NSData;

@interface NETSchemaNETDebugNetworkInterface : SISchemaInstrumentationMessage {
    struct { unsigned char rttCurrent : 1; unsigned char rttSmoothed : 1; unsigned char rttVariance : 1; unsigned char rttBest : 1; unsigned char packetsSent : 1; unsigned char packetsReceived : 1; unsigned char bytesSent : 1; unsigned char bytesRetransmitted : 1; unsigned char bytesUnacked : 1; unsigned char bytesReceived : 1; unsigned char duplicateBytesReceived : 1; unsigned char outOfOrderBytesReceived : 1; unsigned char sendBufferBytes : 1; unsigned char sendBandwidth : 1; unsigned char synRetransmits : 1; unsigned char tfoSynDataAcked : 1; unsigned char subflowSwitchCount : 1; } _has;
}

@property (nonatomic) unsigned int rttCurrent;
@property (nonatomic) BOOL hasRttCurrent;
@property (nonatomic) unsigned int rttSmoothed;
@property (nonatomic) BOOL hasRttSmoothed;
@property (nonatomic) unsigned int rttVariance;
@property (nonatomic) BOOL hasRttVariance;
@property (nonatomic) unsigned int rttBest;
@property (nonatomic) BOOL hasRttBest;
@property (nonatomic) unsigned long long packetsSent;
@property (nonatomic) BOOL hasPacketsSent;
@property (nonatomic) unsigned long long packetsReceived;
@property (nonatomic) BOOL hasPacketsReceived;
@property (nonatomic) unsigned long long bytesSent;
@property (nonatomic) BOOL hasBytesSent;
@property (nonatomic) unsigned long long bytesRetransmitted;
@property (nonatomic) BOOL hasBytesRetransmitted;
@property (nonatomic) unsigned long long bytesUnacked;
@property (nonatomic) BOOL hasBytesUnacked;
@property (nonatomic) unsigned long long bytesReceived;
@property (nonatomic) BOOL hasBytesReceived;
@property (nonatomic) unsigned long long duplicateBytesReceived;
@property (nonatomic) BOOL hasDuplicateBytesReceived;
@property (nonatomic) unsigned long long outOfOrderBytesReceived;
@property (nonatomic) BOOL hasOutOfOrderBytesReceived;
@property (nonatomic) unsigned long long sendBufferBytes;
@property (nonatomic) BOOL hasSendBufferBytes;
@property (nonatomic) unsigned long long sendBandwidth;
@property (nonatomic) BOOL hasSendBandwidth;
@property (nonatomic) unsigned int synRetransmits;
@property (nonatomic) BOOL hasSynRetransmits;
@property (nonatomic) unsigned int tfoSynDataAcked;
@property (nonatomic) BOOL hasTfoSynDataAcked;
@property (nonatomic) unsigned int subflowSwitchCount;
@property (nonatomic) BOOL hasSubflowSwitchCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteBytesSent;
- (void)deleteBytesReceived;
- (void)deleteBytesRetransmitted;
- (void)deleteBytesUnacked;
- (void)deleteDuplicateBytesReceived;
- (void)deleteOutOfOrderBytesReceived;
- (void)deletePacketsReceived;
- (void)deletePacketsSent;
- (void)deleteRttBest;
- (void)deleteRttCurrent;
- (void)deleteRttSmoothed;
- (void)deleteRttVariance;
- (void)deleteSendBandwidth;
- (void)deleteSendBufferBytes;
- (void)deleteSubflowSwitchCount;
- (void)deleteSynRetransmits;
- (void)deleteTfoSynDataAcked;

@end
