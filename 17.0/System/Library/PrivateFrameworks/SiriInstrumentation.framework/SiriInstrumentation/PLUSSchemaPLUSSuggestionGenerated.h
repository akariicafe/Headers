@class PLUSSchemaPLUSChangeDataCaptureMetadata, PLUSSchemaPLUSSuggestionDomainMetadata, PLUSSchemaPLUSSuggestion, NSData;

@interface PLUSSchemaPLUSSuggestionGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;
@property (nonatomic) BOOL hasSuggestionDomainMetadata;
@property (retain, nonatomic) PLUSSchemaPLUSSuggestion *generatedSuggestion;
@property (nonatomic) BOOL hasGeneratedSuggestion;
@property (retain, nonatomic) PLUSSchemaPLUSChangeDataCaptureMetadata *suggestionChangeDataCaptureMetadata;
@property (nonatomic) BOOL hasSuggestionChangeDataCaptureMetadata;
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
- (void)deleteGeneratedSuggestion;
- (void)deleteSuggestionChangeDataCaptureMetadata;
- (void)deleteSuggestionDomainMetadata;

@end
