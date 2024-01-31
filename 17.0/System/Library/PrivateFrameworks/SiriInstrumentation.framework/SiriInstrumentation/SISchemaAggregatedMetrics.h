@class NSData, SISchemaVoiceTriggerMetrics, SISchemaSelfTriggerSuppressionMetrics;

@interface SISchemaAggregatedMetrics : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaVoiceTriggerMetrics *voiceTrigger;
@property (nonatomic) BOOL hasVoiceTrigger;
@property (retain, nonatomic) SISchemaSelfTriggerSuppressionMetrics *selfTriggerSuppression;
@property (nonatomic) BOOL hasSelfTriggerSuppression;
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
- (void)deleteSelfTriggerSuppression;
- (void)deleteVoiceTrigger;

@end
