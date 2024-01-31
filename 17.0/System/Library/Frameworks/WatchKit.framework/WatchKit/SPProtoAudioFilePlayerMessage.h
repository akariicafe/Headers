@class SPProtoAudioFilePlayerItem, SPProtoAudioFileQueuePlayer, SPProtoAudioFilePlayerAsset;

@interface SPProtoAudioFilePlayerMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAsset;
@property (retain, nonatomic) SPProtoAudioFilePlayerAsset *asset;
@property (readonly, nonatomic) BOOL hasPlayerItem;
@property (retain, nonatomic) SPProtoAudioFilePlayerItem *playerItem;
@property (readonly, nonatomic) BOOL hasQueuePlayer;
@property (retain, nonatomic) SPProtoAudioFileQueuePlayer *queuePlayer;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
