@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSAudioUnderstandingTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *audioArtist;
@property (nonatomic) BOOL hasAudioArtist;
@property (copy, nonatomic) NSString *audioAppName;
@property (nonatomic) BOOL hasAudioAppName;
@property (copy, nonatomic) NSString *audioEntity;
@property (nonatomic) BOOL hasAudioEntity;
@property (copy, nonatomic) NSString *audioEntityOriginalValue;
@property (nonatomic) BOOL hasAudioEntityOriginalValue;
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
- (void)deleteAudioAppName;
- (void)deleteAudioArtist;
- (void)deleteAudioEntity;
- (void)deleteAudioEntityOriginalValue;

@end
