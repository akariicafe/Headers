@class NSData, SISchemaVoiceSettings;

@interface SISchemaPersonalization : SISchemaInstrumentationMessage {
    struct { unsigned char personalDomainsSetup : 1; unsigned char appleMusicSubscriber : 1; } _has;
}

@property (nonatomic) BOOL personalDomainsSetup;
@property (nonatomic) BOOL hasPersonalDomainsSetup;
@property (nonatomic) BOOL appleMusicSubscriber;
@property (nonatomic) BOOL hasAppleMusicSubscriber;
@property (retain, nonatomic) SISchemaVoiceSettings *voiceSettings;
@property (nonatomic) BOOL hasVoiceSettings;
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
- (void)deleteAppleMusicSubscriber;
- (void)deletePersonalDomainsSetup;
- (void)deleteVoiceSettings;

@end
