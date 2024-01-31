@class NSString, SISchemaSiriUISettings, NSData, SISchemaVoiceSettings;

@interface SISchemaDeviceFixedContext : SISchemaInstrumentationMessage {
    struct { unsigned char isSatellitePaired : 1; } _has;
}

@property (copy, nonatomic) NSString *deviceType;
@property (nonatomic) BOOL hasDeviceType;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
@property (copy, nonatomic) NSString *siriInputLanguage;
@property (nonatomic) BOOL hasSiriInputLanguage;
@property (copy, nonatomic) NSString *siriVoiceLanguage;
@property (nonatomic) BOOL hasSiriVoiceLanguage;
@property (copy, nonatomic) NSString *systemLocale;
@property (nonatomic) BOOL hasSystemLocale;
@property (copy, nonatomic) NSString *siriDeviceID;
@property (nonatomic) BOOL hasSiriDeviceID;
@property (copy, nonatomic) NSString *speechID;
@property (nonatomic) BOOL hasSpeechID;
@property (retain, nonatomic) SISchemaSiriUISettings *siriUISettings;
@property (nonatomic) BOOL hasSiriUISettings;
@property (nonatomic) BOOL isSatellitePaired;
@property (nonatomic) BOOL hasIsSatellitePaired;
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
- (void)deleteDeviceType;
- (void)deleteIsSatellitePaired;
- (void)deleteSiriDeviceID;
- (void)deleteSiriInputLanguage;
- (void)deleteSiriUISettings;
- (void)deleteSiriVoiceLanguage;
- (void)deleteSpeechID;
- (void)deleteSystemBuild;
- (void)deleteSystemLocale;
- (void)deleteVoiceSettings;

@end
