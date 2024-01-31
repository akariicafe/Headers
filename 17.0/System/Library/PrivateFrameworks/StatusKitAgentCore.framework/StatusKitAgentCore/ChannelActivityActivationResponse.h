@class NSData, NSMutableArray;

@interface ChannelActivityActivationResponse : PBCodable <NSCopying> {
    struct { unsigned char serverTimestampSeconds : 1; unsigned char version : 1; unsigned char activationExpirySeconds : 1; unsigned char responseMessageIndex : 1; unsigned char status : 1; unsigned char totalResponseMessages : 1; } _has;
}

@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) BOOL hasServerTimestampSeconds;
@property (nonatomic) unsigned long long serverTimestampSeconds;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSMutableArray *participantPayloads;
@property (nonatomic) BOOL hasResponseMessageIndex;
@property (nonatomic) unsigned int responseMessageIndex;
@property (nonatomic) BOOL hasTotalResponseMessages;
@property (nonatomic) unsigned int totalResponseMessages;
@property (nonatomic) BOOL hasActivationExpirySeconds;
@property (nonatomic) unsigned int activationExpirySeconds;

+ (Class)participantPayloadType;

- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addParticipantPayload:(id)a0;
- (void)clearParticipantPayloads;
- (id)participantPayloadAtIndex:(unsigned long long)a0;
- (unsigned long long)participantPayloadsCount;

@end
