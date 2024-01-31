@class NSData;

@interface PSESchemaPSEMediaEntitySimilarity : SISchemaInstrumentationMessage {
    struct { unsigned char isSameMediaTitle : 1; unsigned char isSameMediaArtist : 1; unsigned char isSameMediaAlbum : 1; unsigned char isSameMediaItem : 1; } _has;
}

@property (nonatomic) BOOL isSameMediaTitle;
@property (nonatomic) BOOL hasIsSameMediaTitle;
@property (nonatomic) BOOL isSameMediaArtist;
@property (nonatomic) BOOL hasIsSameMediaArtist;
@property (nonatomic) BOOL isSameMediaAlbum;
@property (nonatomic) BOOL hasIsSameMediaAlbum;
@property (nonatomic) BOOL isSameMediaItem;
@property (nonatomic) BOOL hasIsSameMediaItem;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsSameMediaAlbum;
- (void)deleteIsSameMediaArtist;
- (void)deleteIsSameMediaItem;
- (void)deleteIsSameMediaTitle;

@end
