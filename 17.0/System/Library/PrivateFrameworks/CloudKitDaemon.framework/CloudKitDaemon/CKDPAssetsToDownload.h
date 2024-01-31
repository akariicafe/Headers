@class CKDPRequestedFields;

@interface CKDPAssetsToDownload : PBCodable <NSCopying> {
    struct { unsigned char allAssets : 1; } _has;
}

@property (nonatomic) BOOL hasAllAssets;
@property (nonatomic) BOOL allAssets;
@property (readonly, nonatomic) BOOL hasAssetFields;
@property (retain, nonatomic) CKDPRequestedFields *assetFields;

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
