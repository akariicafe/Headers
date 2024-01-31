@class IDSQRProtoPutMaterialErrorIndication, NSMutableArray;

@interface IDSQRProtoPutMaterialIndication : PBCodable <NSCopying> {
    struct { unsigned char txnId : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *materials;
@property (readonly, nonatomic) BOOL hasMissingMaterial;
@property (retain, nonatomic) IDSQRProtoPutMaterialErrorIndication *missingMaterial;
@property (nonatomic) BOOL hasTxnId;
@property (nonatomic) unsigned long long txnId;

+ (Class)materialsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)materialsCount;
- (id)description;
- (void)clearMaterials;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addMaterials:(id)a0;
- (id)materialsAtIndex:(unsigned long long)a0;

@end
