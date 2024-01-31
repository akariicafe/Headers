@class NSString;

@interface AWDPushConnectionConnected : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char connectDuration : 1; unsigned char connectionType : 1; unsigned char dnsDuration : 1; unsigned char dualChannelState : 1; unsigned char linkQuality : 1; unsigned char tlsDuration : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasConnectDuration;
@property (nonatomic) unsigned int connectDuration;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) BOOL hasLinkQuality;
@property (nonatomic) int linkQuality;
@property (nonatomic) BOOL hasDualChannelState;
@property (nonatomic) unsigned int dualChannelState;
@property (nonatomic) BOOL hasDnsDuration;
@property (nonatomic) unsigned int dnsDuration;
@property (nonatomic) BOOL hasTlsDuration;
@property (nonatomic) unsigned int tlsDuration;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
