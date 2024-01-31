@class NSData;

@interface SISchemaSiriVoiceTriggerSettings : SISchemaInstrumentationMessage {
    struct { unsigned char isHeySiriTriggerPhraseEnabled : 1; unsigned char isJustSiriTriggerPhraseEnabled : 1; } _has;
}

@property (nonatomic) BOOL isHeySiriTriggerPhraseEnabled;
@property (nonatomic) BOOL hasIsHeySiriTriggerPhraseEnabled;
@property (nonatomic) BOOL isJustSiriTriggerPhraseEnabled;
@property (nonatomic) BOOL hasIsJustSiriTriggerPhraseEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsHeySiriTriggerPhraseEnabled;
- (void)deleteIsJustSiriTriggerPhraseEnabled;

@end
