@class NSString, NSData;

@interface LTSchemaDisambiguationSpeechTranslationEvent : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL hasRequestID;
@property (copy, nonatomic) NSString *sourceLocale;
@property (nonatomic) BOOL hasSourceLocale;
@property (copy, nonatomic) NSString *senseID;
@property (nonatomic) BOOL hasSenseID;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestID;
- (void)deleteSenseID;
- (void)deleteSourceLocale;

@end
