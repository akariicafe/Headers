@class NSData, ORCHSchemaORCHPommesRequestStarted, ORCHSchemaORCHPommesRequestFailed, ORCHSchemaORCHPommesRequestEnded, ORCHSchemaORCHPommesRequestUnableToHandle, SISchemaUUID;

@interface ORCHSchemaORCHPommesBridgeContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHPommesRequestStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) ORCHSchemaORCHPommesRequestEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) ORCHSchemaORCHPommesRequestFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) ORCHSchemaORCHPommesRequestUnableToHandle *cancelled;
@property (nonatomic) BOOL hasCancelled;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) BOOL hasTrpId;
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
- (void)deleteStartedOrChanged;
- (void)deleteTrpId;

@end
