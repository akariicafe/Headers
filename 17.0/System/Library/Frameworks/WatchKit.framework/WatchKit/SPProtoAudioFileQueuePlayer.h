@class SPProtoAudioFilePlayerUpdateContainedIdentifier, SPProtoAudioFileQueuePlayerSetItems, SPProtoAudioFileQueuePlayerSetRate, SPProtoObjectMessage, SPProtoAudioFilePlayerStatus;

@interface SPProtoAudioFileQueuePlayer : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUpsertWithItems;
@property (retain, nonatomic) SPProtoAudioFileQueuePlayerSetItems *upsertWithItems;
@property (readonly, nonatomic) BOOL hasDestroy;
@property (retain, nonatomic) SPProtoObjectMessage *destroy;
@property (readonly, nonatomic) BOOL hasSetRate;
@property (retain, nonatomic) SPProtoAudioFileQueuePlayerSetRate *setRate;
@property (readonly, nonatomic) BOOL hasReplaceCurrentItem;
@property (retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *replaceCurrentItem;
@property (readonly, nonatomic) BOOL hasSetStatus;
@property (retain, nonatomic) SPProtoAudioFilePlayerStatus *setStatus;
@property (readonly, nonatomic) BOOL hasAdvanceToNextItem;
@property (retain, nonatomic) SPProtoObjectMessage *advanceToNextItem;
@property (readonly, nonatomic) BOOL hasAppendItem;
@property (retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *appendItem;
@property (readonly, nonatomic) BOOL hasRemoveItem;
@property (retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *removeItem;
@property (readonly, nonatomic) BOOL hasRemoveAllItems;
@property (retain, nonatomic) SPProtoObjectMessage *removeAllItems;
@property (readonly, nonatomic) BOOL hasSetCurrentItem;
@property (retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *setCurrentItem;

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
