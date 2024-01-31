@interface HDCodableMessageVersion : PBCodable <NSCopying> {
    struct { unsigned char compatibilityVersion : 1; unsigned char entityVersion : 1; } _has;
}

@property (nonatomic) BOOL hasEntityVersion;
@property (nonatomic) int entityVersion;
@property (nonatomic) BOOL hasCompatibilityVersion;
@property (nonatomic) int compatibilityVersion;

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
