@interface AWDWiFiNWActivityTraffic : PBCodable <NSCopying> {
    struct { unsigned char value : 1; unsigned char traffic : 1; } _has;
}

@property (nonatomic) BOOL hasValue;
@property (nonatomic) unsigned long long value;
@property (nonatomic) BOOL hasTraffic;
@property (nonatomic) int traffic;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsTraffic:(id)a0;
- (id)trafficAsString:(int)a0;

@end
