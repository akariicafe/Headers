@class TTSSchemaTTSSpeechEnded, NSData, TTSSchemaTTSSpeechFailed, SISchemaUUID, TTSSchemaTTSSpeechCancelled, TTSSchemaTTSSpeechStarted;

@interface TTSSchemaTTSClientSpeechContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (retain, nonatomic) TTSSchemaTTSSpeechStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) TTSSchemaTTSSpeechEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) TTSSchemaTTSSpeechFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) TTSSchemaTTSSpeechCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
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
- (void)deleteContextId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
