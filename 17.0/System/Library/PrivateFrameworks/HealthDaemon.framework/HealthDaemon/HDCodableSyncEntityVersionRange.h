@class HDCodableEntityIdentifier, HDCodableSyncVersionRange;

@interface HDCodableSyncEntityVersionRange : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEntityIdentifier;
@property (retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier;
@property (readonly, nonatomic) BOOL hasVersionRange;
@property (retain, nonatomic) HDCodableSyncVersionRange *versionRange;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
