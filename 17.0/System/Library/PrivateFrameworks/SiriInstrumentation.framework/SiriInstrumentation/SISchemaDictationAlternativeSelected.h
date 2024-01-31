@class NSData, SISchemaLocaleIdentifier;

@interface SISchemaDictationAlternativeSelected : SISchemaInstrumentationMessage {
    struct { unsigned char countOfWordsReplaced : 1; unsigned char countOfAlternativesAvailable : 1; unsigned char alternativeListPosition : 1; } _has;
}

@property (nonatomic) int countOfWordsReplaced;
@property (nonatomic) BOOL hasCountOfWordsReplaced;
@property (nonatomic) int countOfAlternativesAvailable;
@property (nonatomic) BOOL hasCountOfAlternativesAvailable;
@property (nonatomic) int alternativeListPosition;
@property (nonatomic) BOOL hasAlternativeListPosition;
@property (retain, nonatomic) SISchemaLocaleIdentifier *alternativesLocale;
@property (nonatomic) BOOL hasAlternativesLocale;
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
- (void)deleteAlternativeListPosition;
- (void)deleteAlternativesLocale;
- (void)deleteCountOfAlternativesAvailable;
- (void)deleteCountOfWordsReplaced;

@end
