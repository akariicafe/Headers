@class NSString, NSArray, NSData;

@interface UAFSchemaUAFAssetSet : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *assetSetName;
@property (nonatomic) BOOL hasAssetSetName;
@property (copy, nonatomic) NSArray *assets;
@property (copy, nonatomic) NSString *assetType;
@property (nonatomic) BOOL hasAssetType;
@property (copy, nonatomic) NSString *assetSetId;
@property (nonatomic) BOOL hasAssetSetId;
@property (copy, nonatomic) NSString *audienceId;
@property (nonatomic) BOOL hasAudienceId;
@property (copy, nonatomic) NSArray *mobileAssetDownloadErrorCodeFrequencys;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)assetsCount;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)clearAssets;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)assetsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addAssets:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAssetType;
- (void)addMobileAssetDownloadErrorCodeFrequency:(id)a0;
- (void)clearMobileAssetDownloadErrorCodeFrequency;
- (void)deleteAssetSetId;
- (void)deleteAssetSetName;
- (void)deleteAssets;
- (void)deleteAudienceId;
- (void)deleteMobileAssetDownloadErrorCodeFrequency;
- (id)mobileAssetDownloadErrorCodeFrequencyAtIndex:(unsigned long long)a0;
- (unsigned long long)mobileAssetDownloadErrorCodeFrequencyCount;

@end
