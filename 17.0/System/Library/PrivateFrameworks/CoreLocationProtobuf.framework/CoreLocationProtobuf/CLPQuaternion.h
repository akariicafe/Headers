@interface CLPQuaternion : PBCodable <NSCopying> {
    struct { unsigned char w : 1; } _has;
}

@property (nonatomic) BOOL hasW;
@property (nonatomic) float w;
@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;

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
