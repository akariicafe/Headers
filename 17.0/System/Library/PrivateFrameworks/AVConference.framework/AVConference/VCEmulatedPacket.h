@interface VCEmulatedPacket : NSObject {
    unsigned char _datagram[1500];
}

@property (readonly, nonatomic) unsigned int packetID;
@property (nonatomic) unsigned int size;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) double arrivalTime;
@property (nonatomic) double networkServiceTime;
@property (nonatomic) double departureTime;
@property (nonatomic) BOOL isLost;
@property (nonatomic) BOOL isDroppedByAQM;
@property (nonatomic) long long type;
@property (nonatomic) char *datagram;
@property struct tagIDSDatagramStruct { unsigned int datagramSize; struct { char linkID; unsigned short trafficClass; unsigned char DSCP; unsigned short streamID; unsigned char channelPriority; } datagramInfo; struct { unsigned int options_flags; unsigned long long participantID; unsigned short probeGroupID; unsigned char channelPriority; char streamIDCount; unsigned short streamIDs[12]; unsigned char generationCounterLSB; unsigned short statsID; struct { unsigned short serverTimestamp; unsigned short serverPacketInterval; unsigned short totalServerPacketReceived; unsigned short totalServerPacketSent; unsigned short uplinkBandwidth; } statsPayload; double arrivalTime; unsigned long long expireTimestamp; BOOL encryptedHBH; unsigned long long encryptionSequenceNumber; unsigned char packetUUID[16]; BOOL retransmittedPacket; BOOL nonRetransmittablePacket; } datagramOptions; BOOL isDatagramOptionsValid; unsigned char datagram[1500]; } metadata;

- (id)initWithPacketID:(unsigned int)a0;
- (id)initWithPacketID:(unsigned int)a0 datagram:(char *)a1 datagramSize:(unsigned int)a2;

@end
