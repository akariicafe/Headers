@interface AWDWiFiDPSPerACTxCompletionSnapshot : PBCodable <NSCopying> {
    struct { unsigned char chipModeError : 1; unsigned char dropped : 1; unsigned char expired : 1; unsigned char firmwareFreePacket : 1; unsigned char forceLifetimeExp : 1; unsigned char maxRetries : 1; unsigned char noAck : 1; unsigned char noBuf : 1; unsigned char noResources : 1; unsigned char success : 1; unsigned char txFailure : 1; } _has;
}

@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) unsigned int success;
@property (nonatomic) BOOL hasDropped;
@property (nonatomic) unsigned int dropped;
@property (nonatomic) BOOL hasNoBuf;
@property (nonatomic) unsigned int noBuf;
@property (nonatomic) BOOL hasNoResources;
@property (nonatomic) unsigned int noResources;
@property (nonatomic) BOOL hasNoAck;
@property (nonatomic) unsigned int noAck;
@property (nonatomic) BOOL hasChipModeError;
@property (nonatomic) unsigned int chipModeError;
@property (nonatomic) BOOL hasExpired;
@property (nonatomic) unsigned int expired;
@property (nonatomic) BOOL hasTxFailure;
@property (nonatomic) unsigned int txFailure;
@property (nonatomic) BOOL hasFirmwareFreePacket;
@property (nonatomic) unsigned int firmwareFreePacket;
@property (nonatomic) BOOL hasMaxRetries;
@property (nonatomic) unsigned int maxRetries;
@property (nonatomic) BOOL hasForceLifetimeExp;
@property (nonatomic) unsigned int forceLifetimeExp;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
