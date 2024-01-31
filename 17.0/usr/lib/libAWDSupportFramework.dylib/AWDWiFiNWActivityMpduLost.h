@class AWDWiFiNWActivityMpduWME;

@interface AWDWiFiNWActivityMpduLost : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBALost;
@property (retain, nonatomic) AWDWiFiNWActivityMpduWME *bALost;
@property (readonly, nonatomic) BOOL hasNonBALost;
@property (retain, nonatomic) AWDWiFiNWActivityMpduWME *nonBALost;

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
