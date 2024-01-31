@class SPProtoAudioFilePlayerAssetUpdateMetaData, SPProtoObjectMessage;

@interface SPProtoAudioFilePlayerAsset : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUpsertWithMetaData;
@property (retain, nonatomic) SPProtoAudioFilePlayerAssetUpdateMetaData *upsertWithMetaData;
@property (readonly, nonatomic) BOOL hasDestroy;
@property (retain, nonatomic) SPProtoObjectMessage *destroy;

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
- (id)sockPuppetMessage;

@end
