@class NSData, LTSchemaSpeechTranslationEvent, SISchemaInstrumentationMessage, LTSchemaDisambiguationSpeechTranslationEvent, LTSchemaASRSpeechTranslationEvent, LTSchemaSafariFeedbackEvent, LTSchemaTTSSpeechTranslationEvent, LTSchemaBatchTranslationEvent, LTSchemaLIDSpeechTranslationEvent, LTSchemaMTSpeechTranslationEvent;

@interface LTSchemaMTClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) LTSchemaSafariFeedbackEvent *safariFeedbackEvent;
@property (nonatomic) BOOL hasSafariFeedbackEvent;
@property (retain, nonatomic) LTSchemaBatchTranslationEvent *batchTranslationEvent;
@property (nonatomic) BOOL hasBatchTranslationEvent;
@property (retain, nonatomic) LTSchemaSpeechTranslationEvent *speechTranslationEvent;
@property (nonatomic) BOOL hasSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaLIDSpeechTranslationEvent *lidSpeechTranslationEvent;
@property (nonatomic) BOOL hasLidSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaDisambiguationSpeechTranslationEvent *disambiguationSpeechTranslationEvent;
@property (nonatomic) BOOL hasDisambiguationSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaASRSpeechTranslationEvent *asrSpeechTranslationEvent;
@property (nonatomic) BOOL hasAsrSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaMTSpeechTranslationEvent *mtSpeechTranslationEvent;
@property (nonatomic) BOOL hasMtSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaTTSSpeechTranslationEvent *ttsspeechTranslationEvent;
@property (nonatomic) BOOL hasTtsspeechTranslationEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (int)getAnyEventType;
- (unsigned long long)hash;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLidSpeechTranslationEvent;
- (void)deleteAsrSpeechTranslationEvent;
- (void)deleteTtsspeechTranslationEvent;
- (void)deleteBatchTranslationEvent;
- (void)deleteDisambiguationSpeechTranslationEvent;
- (void)deleteMtSpeechTranslationEvent;
- (void)deleteSafariFeedbackEvent;
- (void)deleteSpeechTranslationEvent;

@end
