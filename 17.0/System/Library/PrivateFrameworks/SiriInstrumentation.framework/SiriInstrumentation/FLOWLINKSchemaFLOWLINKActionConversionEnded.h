@class NSData, FLOWLINKSchemaFLOWLINKAction;

@interface FLOWLINKSchemaFLOWLINKActionConversionEnded : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKAction *action;
@property (nonatomic) BOOL hasAction;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)deleteAction;
- (id)initWithJSON:(id)a0;

@end
