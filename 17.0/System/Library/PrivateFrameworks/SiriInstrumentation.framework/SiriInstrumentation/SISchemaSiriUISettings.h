@class NSData;

@interface SISchemaSiriUISettings : SISchemaInstrumentationMessage {
    struct { unsigned char alwaysShowUserSpeechTranscript : 1; unsigned char alwaysBlurBackground : 1; unsigned char alwaysShowSiriDialog : 1; } _has;
}

@property (nonatomic) BOOL alwaysShowUserSpeechTranscript;
@property (nonatomic) BOOL hasAlwaysShowUserSpeechTranscript;
@property (nonatomic) BOOL alwaysBlurBackground;
@property (nonatomic) BOOL hasAlwaysBlurBackground;
@property (nonatomic) BOOL alwaysShowSiriDialog;
@property (nonatomic) BOOL hasAlwaysShowSiriDialog;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAlwaysBlurBackground;
- (void)deleteAlwaysShowSiriDialog;
- (void)deleteAlwaysShowUserSpeechTranscript;

@end
