@class NLXSchemaMARRSRepetitionDetectionEvaluated, NLXSchemaMARRSRepetitionDetectionStarted, NSData, NLXSchemaMARRSRepetitionDetectionFailed;

@interface NLXSchemaMARRSRepetitionDetectionContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaMARRSRepetitionDetectionStarted *started;
@property (nonatomic) BOOL hasStarted;
@property (retain, nonatomic) NLXSchemaMARRSRepetitionDetectionEvaluated *evaluated;
@property (nonatomic) BOOL hasEvaluated;
@property (retain, nonatomic) NLXSchemaMARRSRepetitionDetectionFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) NLXSchemaMARRSRepetitionDetectionStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) NLXSchemaMARRSRepetitionDetectionEvaluated *ended;
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
- (void)deleteEvaluated;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStarted;
- (void)deleteStartedOrChanged;

@end
