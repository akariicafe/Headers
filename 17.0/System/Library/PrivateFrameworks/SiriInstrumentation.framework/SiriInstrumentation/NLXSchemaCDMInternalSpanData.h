@class NLXSchemaMentionResolverSpanData, NLXSchemaCDMSiriVocabularySpanData, NSData, NLXSchemaContextualSpanData, NLXSchemaPLUMSpanData, NLXSchemaMentionDetectorSpanData;

@interface NLXSchemaCDMInternalSpanData : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMSiriVocabularySpanData *siriVocabularySpanData;
@property (nonatomic) BOOL hasSiriVocabularySpanData;
@property (retain, nonatomic) NLXSchemaPLUMSpanData *plumSpanData;
@property (nonatomic) BOOL hasPlumSpanData;
@property (retain, nonatomic) NLXSchemaMentionDetectorSpanData *mentionDetectorSpanData;
@property (nonatomic) BOOL hasMentionDetectorSpanData;
@property (retain, nonatomic) NLXSchemaMentionResolverSpanData *mentionResolverSpanData;
@property (nonatomic) BOOL hasMentionResolverSpanData;
@property (retain, nonatomic) NLXSchemaContextualSpanData *contextualSpanData;
@property (nonatomic) BOOL hasContextualSpanData;
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
- (void)deleteContextualSpanData;
- (void)deleteMentionDetectorSpanData;
- (void)deleteMentionResolverSpanData;
- (void)deletePlumSpanData;
- (void)deleteSiriVocabularySpanData;

@end
