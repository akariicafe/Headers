@class NSMutableArray;

@interface IDSQRProtoGetMaterialRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *materialOwners;

+ (Class)materialOwnersType;

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
- (void)addMaterialOwners:(id)a0;
- (void)clearMaterialOwners;
- (id)materialOwnersAtIndex:(unsigned long long)a0;
- (unsigned long long)materialOwnersCount;

@end
