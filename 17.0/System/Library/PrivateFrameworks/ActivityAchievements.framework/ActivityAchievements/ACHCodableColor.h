@interface ACHCodableColor : PBCodable <NSCopying> {
    struct { unsigned char blue : 1; unsigned char green : 1; unsigned char red : 1; } _has;
}

@property (nonatomic) BOOL hasRed;
@property (nonatomic) double red;
@property (nonatomic) BOOL hasGreen;
@property (nonatomic) double green;
@property (nonatomic) BOOL hasBlue;
@property (nonatomic) double blue;

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
