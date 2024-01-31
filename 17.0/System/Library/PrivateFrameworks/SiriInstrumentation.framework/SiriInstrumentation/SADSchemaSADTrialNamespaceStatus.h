@class NSArray, SISchemaVersion, SADSchemaSADTrialRollout, NSData;

@interface SADSchemaSADTrialNamespaceStatus : SISchemaInstrumentationMessage {
    struct { unsigned char trialNamespace : 1; } _has;
}

@property (retain, nonatomic) SISchemaVersion *namespaceCompatabilityVersion;
@property (nonatomic) BOOL hasNamespaceCompatabilityVersion;
@property (retain, nonatomic) SADSchemaSADTrialRollout *rollout;
@property (nonatomic) BOOL hasRollout;
@property (copy, nonatomic) NSArray *assets;
@property (nonatomic) int trialNamespace;
@property (nonatomic) BOOL hasTrialNamespace;
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
- (void)deleteAssets;
- (void)deleteNamespaceCompatabilityVersion;
- (void)deleteRollout;
- (void)deleteTrialNamespace;

@end
