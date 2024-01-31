@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSAudioQueueStateItemTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *audioAlbum;
@property (nonatomic) BOOL hasAudioAlbum;
@property (copy, nonatomic) NSString *audioArtist;
@property (nonatomic) BOOL hasAudioArtist;
@property (copy, nonatomic) NSString *audioClientId;
@property (nonatomic) BOOL hasAudioClientId;
@property (copy, nonatomic) NSString *audioTitle;
@property (nonatomic) BOOL hasAudioTitle;
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
- (void)deleteAudioAlbum;
- (void)deleteAudioArtist;
- (void)deleteAudioClientId;
- (void)deleteAudioTitle;

@end
