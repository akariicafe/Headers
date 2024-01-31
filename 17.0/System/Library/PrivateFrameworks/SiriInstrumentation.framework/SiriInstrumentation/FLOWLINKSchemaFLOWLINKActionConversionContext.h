@class FLOWLINKSchemaFLOWLINKActionConversionFailed, FLOWLINKSchemaFLOWLINKActionConversionStarted, FLOWLINKSchemaFLOWLINKActionConversionEnded, NSData;

@interface FLOWLINKSchemaFLOWLINKActionConversionContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionConversionStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionConversionEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionConversionFailed *failed;
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
