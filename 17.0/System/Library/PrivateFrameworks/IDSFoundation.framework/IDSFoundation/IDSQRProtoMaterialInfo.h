@class NSData;

@interface IDSQRProtoMaterialInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *materialId;
@property (nonatomic) int materialType;
@property (retain, nonatomic) NSData *materialContent;

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
- (int)StringAsMaterialType:(id)a0;
- (id)materialTypeAsString:(int)a0;

@end
