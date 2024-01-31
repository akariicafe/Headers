@class NSArray, NSData;

@interface FLOWSchemaFLOWLanguageConfidenceArray : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *languageConfidences;
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
- (void)addLanguageConfidences:(id)a0;
- (void)clearLanguageConfidences;
- (void)deleteLanguageConfidences;
- (id)languageConfidencesAtIndex:(unsigned long long)a0;
- (unsigned long long)languageConfidencesCount;

@end
