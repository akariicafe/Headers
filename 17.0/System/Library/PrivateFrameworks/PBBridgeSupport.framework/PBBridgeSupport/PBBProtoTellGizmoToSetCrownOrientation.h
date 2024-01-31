@interface PBBProtoTellGizmoToSetCrownOrientation : PBCodable <NSCopying> {
    struct { unsigned char crownOrientationRight : 1; } _has;
}

@property (nonatomic) BOOL hasCrownOrientationRight;
@property (nonatomic) BOOL crownOrientationRight;

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
