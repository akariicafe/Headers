@class ORCHSchemaORCHAceCommandStarted, ORCHSchemaORCHAceCommandEnded, NSData, SISchemaUUID, ORCHSchemaORCHAceCommandFailed;

@interface ORCHSchemaORCHAceCommandContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *aceId;
@property (nonatomic) BOOL hasAceId;
@property (retain, nonatomic) ORCHSchemaORCHAceCommandStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) ORCHSchemaORCHAceCommandEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) ORCHSchemaORCHAceCommandFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichCommandevent;

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
- (void)deleteAceId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
