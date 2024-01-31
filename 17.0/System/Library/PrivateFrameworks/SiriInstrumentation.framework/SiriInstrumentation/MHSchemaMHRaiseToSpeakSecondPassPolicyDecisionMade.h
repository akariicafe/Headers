@class NSData;

@interface MHSchemaMHRaiseToSpeakSecondPassPolicyDecisionMade : SISchemaInstrumentationMessage {
    struct { unsigned char isSecondPassTriggered : 1; unsigned char speakingProbability : 1; unsigned char processedAudioDurationInMs : 1; unsigned char isReplayModeEnabled : 1; } _has;
}

@property (nonatomic) BOOL isSecondPassTriggered;
@property (nonatomic) BOOL hasIsSecondPassTriggered;
@property (nonatomic) double speakingProbability;
@property (nonatomic) BOOL hasSpeakingProbability;
@property (nonatomic) double processedAudioDurationInMs;
@property (nonatomic) BOOL hasProcessedAudioDurationInMs;
@property (nonatomic) BOOL isReplayModeEnabled;
@property (nonatomic) BOOL hasIsReplayModeEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsReplayModeEnabled;
- (void)deleteIsSecondPassTriggered;
- (void)deleteProcessedAudioDurationInMs;
- (void)deleteSpeakingProbability;

@end
