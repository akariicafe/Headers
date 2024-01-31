@class HALSchemaHALContextCollectorFetchEnded, NSData, SISchemaUUID, HALSchemaHALContextCollectorFetchFailed, HALSchemaHALContextCollectorFetchStarted;

@interface HALSchemaHALContextCollectorFetchContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (retain, nonatomic) HALSchemaHALContextCollectorFetchStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) HALSchemaHALContextCollectorFetchEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) HALSchemaHALContextCollectorFetchFailed *failed;
@property (nonatomic) BOOL hasFailed;
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
- (void)deleteContextId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
