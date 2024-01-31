@interface NPKIDVRemoteDeviceProtoPrearmStatusUpdate : PBCodable <NSCopying>

@property (nonatomic) int prearmStatus;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsPrearmStatus:(id)a0;
- (id)prearmStatusAsString:(int)a0;

@end
