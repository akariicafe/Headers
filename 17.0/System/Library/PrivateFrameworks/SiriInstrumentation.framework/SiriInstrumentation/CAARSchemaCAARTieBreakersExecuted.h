@class NSArray, NSData;

@interface CAARSchemaCAARTieBreakersExecuted : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *tiebreakers;
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
- (id)initWithJSON:(id)a0;
- (void)addTiebreakers:(id)a0;
- (void)clearTiebreakers;
- (void)deleteTiebreakers;
- (id)tiebreakersAtIndex:(unsigned long long)a0;
- (unsigned long long)tiebreakersCount;

@end
