@class CKDPRecordFieldIdentifier, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveRequestAssetField : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasField;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *field;
@property (retain, nonatomic) NSMutableArray *assets;

+ (Class)assetsType;

- (unsigned long long)assetsCount;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)clearAssets;
- (void)writeTo:(id)a0;
- (id)description;
- (id)assetsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addAssets:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
