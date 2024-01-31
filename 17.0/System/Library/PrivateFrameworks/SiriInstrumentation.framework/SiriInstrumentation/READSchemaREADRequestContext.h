@class NSData, READSchemaREADRequestStarted;

@interface READSchemaREADRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) READSchemaREADRequestStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
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
- (void)deleteStartedOrChanged;

@end
