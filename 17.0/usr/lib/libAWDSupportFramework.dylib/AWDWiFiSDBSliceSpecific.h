@interface AWDWiFiSDBSliceSpecific : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char txDeferDuration : 1; unsigned char txPriDuration : 1; unsigned char txaDuration : 1; unsigned char ackTxPowerBackoffCount : 1; unsigned char txDeferredCount : 1; unsigned char txMuteCount : 1; unsigned char txPathEnableReqCount : 1; unsigned char txPathMuteCount : 1; unsigned char txPriorityCount : 1; unsigned char txaONCount : 1; unsigned char txaPORCount : 1; unsigned char txaTimeoutCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasTxaONCount;
@property (nonatomic) unsigned int txaONCount;
@property (nonatomic) BOOL hasTxaTimeoutCount;
@property (nonatomic) unsigned int txaTimeoutCount;
@property (nonatomic) BOOL hasTxaPORCount;
@property (nonatomic) unsigned int txaPORCount;
@property (nonatomic) BOOL hasTxPathEnableReqCount;
@property (nonatomic) unsigned int txPathEnableReqCount;
@property (nonatomic) BOOL hasTxPathMuteCount;
@property (nonatomic) unsigned int txPathMuteCount;
@property (nonatomic) BOOL hasTxPriorityCount;
@property (nonatomic) unsigned int txPriorityCount;
@property (nonatomic) BOOL hasTxDeferredCount;
@property (nonatomic) unsigned int txDeferredCount;
@property (nonatomic) BOOL hasTxMuteCount;
@property (nonatomic) unsigned int txMuteCount;
@property (nonatomic) BOOL hasAckTxPowerBackoffCount;
@property (nonatomic) unsigned int ackTxPowerBackoffCount;
@property (nonatomic) BOOL hasTxaDuration;
@property (nonatomic) unsigned long long txaDuration;
@property (nonatomic) BOOL hasTxPriDuration;
@property (nonatomic) unsigned long long txPriDuration;
@property (nonatomic) BOOL hasTxDeferDuration;
@property (nonatomic) unsigned long long txDeferDuration;

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
