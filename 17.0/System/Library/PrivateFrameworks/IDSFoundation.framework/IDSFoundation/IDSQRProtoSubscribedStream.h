@interface IDSQRProtoSubscribedStream : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _peerStreamIds;
    struct { unsigned char isSeamlessTransition : 1; } _has;
}

@property (nonatomic) BOOL wildcardSubscription;
@property (nonatomic) unsigned long long peerParticipantId;
@property (readonly, nonatomic) unsigned long long peerStreamIdsCount;
@property (readonly, nonatomic) unsigned int *peerStreamIds;
@property (nonatomic) BOOL hasIsSeamlessTransition;
@property (nonatomic) BOOL isSeamlessTransition;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPeerStreamIds:(unsigned int)a0;
- (void)clearPeerStreamIds;
- (unsigned int)peerStreamIdsAtIndex:(unsigned long long)a0;
- (void)setPeerStreamIds:(unsigned int *)a0 count:(unsigned long long)a1;

@end
