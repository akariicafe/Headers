@class NSArray, NSData;

@interface SADSchemaSADAvailableAssetDailyStatus : SISchemaInstrumentationMessage {
    struct { unsigned char statusReason : 1; } _has;
}

@property (copy, nonatomic) NSArray *namespaceStatus;
@property (copy, nonatomic) NSArray *assetSetStatus;
@property (nonatomic) int statusReason;
@property (nonatomic) BOOL hasStatusReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addAssetSetStatus:(id)a0;
- (void)addNamespaceStatus:(id)a0;
- (id)assetSetStatusAtIndex:(unsigned long long)a0;
- (unsigned long long)assetSetStatusCount;
- (void)clearAssetSetStatus;
- (void)clearNamespaceStatus;
- (void)deleteAssetSetStatus;
- (void)deleteNamespaceStatus;
- (void)deleteStatusReason;
- (id)namespaceStatusAtIndex:(unsigned long long)a0;
- (unsigned long long)namespaceStatusCount;

@end
