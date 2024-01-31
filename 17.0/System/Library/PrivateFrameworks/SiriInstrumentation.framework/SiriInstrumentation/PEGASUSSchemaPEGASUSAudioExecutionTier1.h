@class PEGASUSSchemaPEGASUSAudioUnderstandingTier1, NSString, NSArray, PEGASUSSchemaPEGASUSAudioQueueStateInfoTier1, NSData;

@interface PEGASUSSchemaPEGASUSAudioExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *audioLaunchId;
@property (nonatomic) BOOL hasAudioLaunchId;
@property (copy, nonatomic) NSString *audioType;
@property (nonatomic) BOOL hasAudioType;
@property (copy, nonatomic) NSArray *audioInternalSignals;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioUnderstandingTier1 *audioUnderstandingTier1;
@property (nonatomic) BOOL hasAudioUnderstandingTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioQueueStateInfoTier1 *audioQueueStateInfoTier1;
@property (nonatomic) BOOL hasAudioQueueStateInfoTier1;
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
- (void)deleteAudioType;
- (void)addAudioInternalSignals:(id)a0;
- (id)audioInternalSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)audioInternalSignalsCount;
- (void)clearAudioInternalSignals;
- (void)deleteAudioInternalSignals;
- (void)deleteAudioLaunchId;
- (void)deleteAudioQueueStateInfoTier1;
- (void)deleteAudioUnderstandingTier1;

@end
