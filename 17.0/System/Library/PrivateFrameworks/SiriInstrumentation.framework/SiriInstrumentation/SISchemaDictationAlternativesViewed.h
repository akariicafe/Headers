@class NSData, SISchemaLocaleIdentifier;

@interface SISchemaDictationAlternativesViewed : SISchemaInstrumentationMessage {
    struct { unsigned char countOfWordsUnderlined : 1; unsigned char countOfAlternativesAvailable : 1; } _has;
}

@property (nonatomic) int countOfWordsUnderlined;
@property (nonatomic) BOOL hasCountOfWordsUnderlined;
@property (nonatomic) int countOfAlternativesAvailable;
@property (nonatomic) BOOL hasCountOfAlternativesAvailable;
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
- (void)deleteAlternativesLocale;
- (void)deleteCountOfAlternativesAvailable;
- (void)deleteCountOfWordsUnderlined;

@end
