@class CNVSchemaCNVIntentFinalExecutionStarted, CNVSchemaCNVIntentFinalExecutionCancelled, NSData, CNVSchemaCNVIntentFinalExecutionEnded, SISchemaUUID, CNVSchemaCNVIntentFinalExecutionFailed;

@interface CNVSchemaCNVIntentFinalExecutionContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) CNVSchemaCNVIntentFinalExecutionStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) CNVSchemaCNVIntentFinalExecutionEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) CNVSchemaCNVIntentFinalExecutionFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) CNVSchemaCNVIntentFinalExecutionCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
@property (retain, nonatomic) SISchemaUUID *hypothesisId;
@property (nonatomic) BOOL hasHypothesisId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

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
- (void)deleteCancelled;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteHypothesisId;
- (void)deleteStartedOrChanged;

@end
