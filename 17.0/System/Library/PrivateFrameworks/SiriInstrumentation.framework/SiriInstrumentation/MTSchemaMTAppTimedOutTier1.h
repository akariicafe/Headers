@class NSString, MTSchemaMTLocalePair, NSData;

@interface MTSchemaMTAppTimedOutTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *translationPayload;
@property (nonatomic) BOOL hasTranslationPayload;
@property (retain, nonatomic) MTSchemaMTLocalePair *localePair;
@property (nonatomic) BOOL hasLocalePair;
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
- (void)deleteLocalePair;
- (void)deleteTranslationPayload;

@end
