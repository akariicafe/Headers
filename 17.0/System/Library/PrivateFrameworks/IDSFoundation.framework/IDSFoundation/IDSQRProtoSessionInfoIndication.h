@class NSMutableArray;

@interface IDSQRProtoSessionInfoIndication : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _lightweightParticipantIdLists;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _peerSubscribedStreamIds;
    struct { unsigned char txnId : 1; unsigned char generationCounter : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *peerPublishedStreams;
@property (readonly, nonatomic) unsigned long long peerSubscribedStreamIdsCount;
@property (readonly, nonatomic) unsigned int *peerSubscribedStreamIds;
@property (readonly, nonatomic) unsigned long long lightweightParticipantIdListsCount;
@property (readonly, nonatomic) unsigned long long *lightweightParticipantIdLists;
@property (nonatomic) BOOL hasTxnId;
@property (nonatomic) unsigned long long txnId;
@property (nonatomic) BOOL hasGenerationCounter;
@property (nonatomic) unsigned int generationCounter;

+ (Class)peerPublishedStreamsType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)peerSubscribedStreamIdsAtIndex:(unsigned long long)a0;
- (void)addLightweightParticipantIdList:(unsigned long long)a0;
- (void)addPeerPublishedStreams:(id)a0;
- (void)addPeerSubscribedStreamIds:(unsigned int)a0;
- (void)clearLightweightParticipantIdLists;
- (void)clearPeerPublishedStreams;
- (void)clearPeerSubscribedStreamIds;
- (unsigned long long)lightweightParticipantIdListAtIndex:(unsigned long long)a0;
- (id)peerPublishedStreamsAtIndex:(unsigned long long)a0;
- (unsigned long long)peerPublishedStreamsCount;
- (void)setLightweightParticipantIdLists:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setPeerSubscribedStreamIds:(unsigned int *)a0 count:(unsigned long long)a1;

@end
