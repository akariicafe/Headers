@class NSData;

@interface MHSchemaMHSelfTriggerSuppressionSession : SISchemaInstrumentationMessage {
    struct { unsigned char numSelfTriggersDetectedInSession : 1; unsigned char sessionDurationInSeconds : 1; unsigned char audioSource : 1; unsigned char isBluetoothSpeakerActive : 1; unsigned char isBuiltInSpeakerActive : 1; } _has;
}

@property (nonatomic) unsigned int numSelfTriggersDetectedInSession;
@property (nonatomic) BOOL hasNumSelfTriggersDetectedInSession;
@property (nonatomic) double sessionDurationInSeconds;
@property (nonatomic) BOOL hasSessionDurationInSeconds;
@property (nonatomic) int audioSource;
@property (nonatomic) BOOL hasAudioSource;
@property (nonatomic) BOOL isBluetoothSpeakerActive;
@property (nonatomic) BOOL hasIsBluetoothSpeakerActive;
@property (nonatomic) BOOL isBuiltInSpeakerActive;
@property (nonatomic) BOOL hasIsBuiltInSpeakerActive;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAudioSource;
- (void)deleteIsBluetoothSpeakerActive;
- (void)deleteIsBuiltInSpeakerActive;
- (void)deleteNumSelfTriggersDetectedInSession;
- (void)deleteSessionDurationInSeconds;

@end
