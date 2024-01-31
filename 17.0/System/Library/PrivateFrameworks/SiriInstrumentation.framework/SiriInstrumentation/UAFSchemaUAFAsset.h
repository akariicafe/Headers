@class NSString, NSData;

@interface UAFSchemaUAFAsset : SISchemaInstrumentationMessage {
    struct { unsigned char assetLocale : 1; unsigned char assetSource : 1; unsigned char assetSizeOnDisk : 1; unsigned char isAssetPathValid : 1; } _has;
}

@property (copy, nonatomic) NSString *assetName;
@property (nonatomic) BOOL hasAssetName;
@property (copy, nonatomic) NSString *assetSpecifier;
@property (nonatomic) BOOL hasAssetSpecifier;
@property (copy, nonatomic) NSString *assetVersion;
@property (nonatomic) BOOL hasAssetVersion;
@property (nonatomic) int assetLocale;
@property (nonatomic) BOOL hasAssetLocale;
@property (nonatomic) int assetSource;
@property (nonatomic) BOOL hasAssetSource;
@property (nonatomic) unsigned int assetSizeOnDisk;
@property (nonatomic) BOOL hasAssetSizeOnDisk;
@property (nonatomic) BOOL isAssetPathValid;
@property (nonatomic) BOOL hasIsAssetPathValid;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAssetName;
- (void)deleteAssetLocale;
- (void)deleteAssetSizeOnDisk;
- (void)deleteAssetSource;
- (void)deleteAssetSpecifier;
- (void)deleteAssetVersion;
- (void)deleteIsAssetPathValid;

@end
