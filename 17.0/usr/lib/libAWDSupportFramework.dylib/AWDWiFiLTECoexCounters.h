@class AWDWiFiLTECoexBin;

@interface AWDWiFiLTECoexCounters : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasNoLTECoexBin;
@property (retain, nonatomic) AWDWiFiLTECoexBin *noLTECoexBin;
@property (readonly, nonatomic) BOOL hasLightLTECoexBin;
@property (retain, nonatomic) AWDWiFiLTECoexBin *lightLTECoexBin;
@property (readonly, nonatomic) BOOL hasHeavyLTECoexBin;
@property (retain, nonatomic) AWDWiFiLTECoexBin *heavyLTECoexBin;

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
