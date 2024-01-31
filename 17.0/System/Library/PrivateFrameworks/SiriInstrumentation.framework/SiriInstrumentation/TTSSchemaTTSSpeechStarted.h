@class TTSSchemaTTSAudioInterface, NSData, TTSSchemaTTSVoiceContext;

@interface TTSSchemaTTSSpeechStarted : SISchemaInstrumentationMessage {
    struct { unsigned char audioOutputRoute : 1; unsigned char customerPerceivedLatencyInSecond : 1; unsigned char synthesisSource : 1; unsigned char synthesisEffect : 1; unsigned char volume : 1; unsigned char thermalState : 1; } _has;
}

@property (nonatomic) int audioOutputRoute;
@property (nonatomic) BOOL hasAudioOutputRoute;
@property (nonatomic) float customerPerceivedLatencyInSecond;
@property (nonatomic) BOOL hasCustomerPerceivedLatencyInSecond;
@property (nonatomic) int synthesisSource;
@property (nonatomic) BOOL hasSynthesisSource;
@property (retain, nonatomic) TTSSchemaTTSVoiceContext *voiceContext;
@property (nonatomic) BOOL hasVoiceContext;
@property (nonatomic) int synthesisEffect;
@property (nonatomic) BOOL hasSynthesisEffect;
@property (retain, nonatomic) TTSSchemaTTSAudioInterface *audioInterface;
@property (nonatomic) BOOL hasAudioInterface;
@property (nonatomic) float volume;
@property (nonatomic) BOOL hasVolume;
@property (nonatomic) int thermalState;
@property (nonatomic) BOOL hasThermalState;
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
- (void)deleteAudioInterface;
- (void)deleteAudioOutputRoute;
- (void)deleteCustomerPerceivedLatencyInSecond;
- (void)deleteSynthesisEffect;
- (void)deleteSynthesisSource;
- (void)deleteThermalState;
- (void)deleteVoiceContext;
- (void)deleteVolume;

@end
