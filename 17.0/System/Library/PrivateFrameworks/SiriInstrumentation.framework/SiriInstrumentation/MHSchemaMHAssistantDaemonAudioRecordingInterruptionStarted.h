@class NSString, NSData, SISchemaUUID;

@interface MHSchemaMHAssistantDaemonAudioRecordingInterruptionStarted : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *avAudioSessionInterruptorName;
@property (nonatomic) BOOL hasAvAudioSessionInterruptorName;
@property (copy, nonatomic) NSString *avAudioSessionInterruptionType;
@property (nonatomic) BOOL hasAvAudioSessionInterruptionType;
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
- (void)deleteAvAudioSessionInterruptionType;
- (void)deleteAvAudioSessionInterruptorName;
- (void)deleteLinkId;

@end
