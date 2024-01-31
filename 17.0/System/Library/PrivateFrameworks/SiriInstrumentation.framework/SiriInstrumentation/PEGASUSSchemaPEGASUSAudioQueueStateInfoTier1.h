@class PEGASUSSchemaPEGASUSAudioQueueStateItemTier1, NSData;

@interface PEGASUSSchemaPEGASUSAudioQueueStateInfoTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioQueueStateItemTier1 *audioQueueStateItemTier1;
@property (nonatomic) BOOL hasAudioQueueStateItemTier1;
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
- (void)deleteAudioQueueStateItemTier1;

@end
