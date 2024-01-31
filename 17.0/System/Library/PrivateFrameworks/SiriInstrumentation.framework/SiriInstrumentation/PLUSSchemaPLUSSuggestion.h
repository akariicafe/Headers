@class NSData, PLUSSchemaPLUSSuggestionMetadata, PLUSSchemaPLUSSuggestionValue;

@interface PLUSSchemaPLUSSuggestion : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionMetadata *suggestionMetadata;
@property (nonatomic) BOOL hasSuggestionMetadata;
@property (retain, nonatomic) PLUSSchemaPLUSSuggestionValue *suggestionValue;
@property (nonatomic) BOOL hasSuggestionValue;
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
- (void)deleteSuggestionMetadata;
- (void)deleteSuggestionValue;

@end
