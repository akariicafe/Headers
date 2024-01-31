@class NSArray, NSData;

@interface UAFSchemaUAFAssetSetStatus : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *uafAssetSets;
@property (copy, nonatomic) NSArray *uafAssetSubscriptions;
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
- (void)addUafAssetSets:(id)a0;
- (void)addUafAssetSubscriptions:(id)a0;
- (void)clearUafAssetSets;
- (void)clearUafAssetSubscriptions;
- (void)deleteUafAssetSets;
- (void)deleteUafAssetSubscriptions;
- (id)uafAssetSetsAtIndex:(unsigned long long)a0;
- (unsigned long long)uafAssetSetsCount;
- (id)uafAssetSubscriptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)uafAssetSubscriptionsCount;

@end
