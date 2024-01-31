@class NSData, CNVSchemaCNVPreFlowPrepareStarted, CNVSchemaCNVPreFlowPrepareEnded;

@interface CNVSchemaCNVPreFlowPrepareContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) CNVSchemaCNVPreFlowPrepareStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) CNVSchemaCNVPreFlowPrepareEnded *ended;
@property (nonatomic) BOOL hasEnded;
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
- (void)deleteEnded;
- (void)deleteStartedOrChanged;

@end
