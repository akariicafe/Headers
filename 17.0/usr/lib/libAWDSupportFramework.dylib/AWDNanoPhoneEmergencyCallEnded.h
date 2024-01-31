@interface AWDNanoPhoneEmergencyCallEnded : PBCodable <NSCopying> {
    struct { unsigned char callDuration : 1; unsigned char timestamp : 1; unsigned char callConnected : 1; unsigned char callFailed : 1; unsigned char remoteEnded : 1; unsigned char userEnded : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasCallDuration;
@property (nonatomic) unsigned long long callDuration;
@property (nonatomic) BOOL hasCallConnected;
@property (nonatomic) BOOL callConnected;
@property (nonatomic) BOOL hasRemoteEnded;
@property (nonatomic) BOOL remoteEnded;
@property (nonatomic) BOOL hasCallFailed;
@property (nonatomic) BOOL callFailed;
@property (nonatomic) BOOL hasUserEnded;
@property (nonatomic) BOOL userEnded;

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
