@class NSString;

@interface SPProtoObjectMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;

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
- (id)sockPuppetMessageForAssetDestroy;
- (id)sockPuppetMessageForPlayerItemDestroy;
- (id)sockPuppetMessageForPlayerItemGetCurrentTime;
- (id)sockPuppetMessageForPlayerItemNotifyDidPlayToEndTime;
- (id)sockPuppetMessageForPlayerItemNotifyFailedToPlayToEndTime;
- (id)sockPuppetMessageForPlayerItemNotifyTimeJumped;
- (id)sockPuppetMessageForQueuePlayerAdvanceToNextItem;
- (id)sockPuppetMessageForQueuePlayerDestroy;
- (id)sockPuppetMessageForQueuePlayerRemoveAllItems;

@end
