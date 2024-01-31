@class NSData, SISchemaLocaleIdentifier;

@interface SISchemaDictationAlternativesPresent : SISchemaInstrumentationMessage {
    struct { unsigned char numberOfUnderlines : 1; unsigned char countOfWordsUnderlined : 1; unsigned char multilingualIsLowConfidence : 1; } _has;
}

@property (nonatomic) int numberOfUnderlines;
@property (nonatomic) BOOL hasNumberOfUnderlines;
@property (nonatomic) int countOfWordsUnderlined;
@property (nonatomic) BOOL hasCountOfWordsUnderlined;
@property (retain, nonatomic) SISchemaLocaleIdentifier *alternativesLocale;
@property (nonatomic) BOOL hasAlternativesLocale;
@property (nonatomic) BOOL multilingualIsLowConfidence;
@property (nonatomic) BOOL hasMultilingualIsLowConfidence;
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
- (void)deleteCountOfWordsUnderlined;
- (void)deleteMultilingualIsLowConfidence;
- (void)deleteNumberOfUnderlines;

@end
