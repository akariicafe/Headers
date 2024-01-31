@interface AWDHomeKitCameraStreamReconfigure : PBCodable <NSCopying> {
    struct { unsigned char reconfigurationTimestamp : 1; unsigned char resolution : 1; } _has;
}

@property (nonatomic) BOOL hasReconfigurationTimestamp;
@property (nonatomic) unsigned int reconfigurationTimestamp;
@property (nonatomic) BOOL hasResolution;
@property (nonatomic) int resolution;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsResolution:(id)a0;
- (id)resolutionAsString:(int)a0;

@end
