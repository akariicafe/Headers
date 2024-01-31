@class NSString, NSData, SISchemaUUID;

@interface NLXSchemaNLXLegacyNLContext : SISchemaInstrumentationMessage {
    struct { unsigned char isDictationPrompt : 1; unsigned char isStrictPrompt : 1; unsigned char isListenAfterSpeaking : 1; unsigned char legacyContextSource : 1; } _has;
}

@property (nonatomic) BOOL isDictationPrompt;
@property (nonatomic) BOOL hasIsDictationPrompt;
@property (nonatomic) BOOL isStrictPrompt;
@property (nonatomic) BOOL hasIsStrictPrompt;
@property (copy, nonatomic) NSString *previousDomainName;
@property (nonatomic) BOOL hasPreviousDomainName;
@property (nonatomic) BOOL isListenAfterSpeaking;
@property (nonatomic) BOOL hasIsListenAfterSpeaking;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) int legacyContextSource;
@property (nonatomic) BOOL hasLegacyContextSource;
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
- (void)deleteIsDictationPrompt;
- (void)deleteIsListenAfterSpeaking;
- (void)deleteIsStrictPrompt;
- (void)deleteLegacyContextSource;
- (void)deleteLinkId;
- (void)deletePreviousDomainName;

@end
