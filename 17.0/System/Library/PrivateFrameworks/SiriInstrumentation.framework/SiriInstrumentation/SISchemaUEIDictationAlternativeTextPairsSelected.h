@class NSArray, NSData;

@interface SISchemaUEIDictationAlternativeTextPairsSelected : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *alternativeSelections;
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
- (void)addAlternativeSelections:(id)a0;
- (id)alternativeSelectionsAtIndex:(unsigned long long)a0;
- (unsigned long long)alternativeSelectionsCount;
- (void)clearAlternativeSelections;
- (void)deleteAlternativeSelections;

@end
