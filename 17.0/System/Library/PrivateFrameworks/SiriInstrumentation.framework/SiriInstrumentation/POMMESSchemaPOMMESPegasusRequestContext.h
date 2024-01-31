@class POMMESSchemaPOMMESPegasusRequestStarted, POMMESSchemaPOMMESPegasusRequestFailed, POMMESSchemaPOMMESPegasusRequestEnded, NSData;

@interface POMMESSchemaPOMMESPegasusRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestFailed *failed;
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
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
