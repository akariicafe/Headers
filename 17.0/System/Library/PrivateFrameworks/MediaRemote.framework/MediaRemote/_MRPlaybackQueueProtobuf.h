@class _MRNowPlayingPlayerPathProtobuf, NSString, NSMutableArray, _MRPlaybackQueueContextProtobuf;

@interface _MRPlaybackQueueProtobuf : PBCodable <NSCopying> {
    struct { unsigned char location : 1; unsigned char sendingPlaybackQueueTransaction : 1; } _has;
}

@property (nonatomic) BOOL hasLocation;
@property (nonatomic) int location;
@property (retain, nonatomic) NSMutableArray *contentItems;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) _MRPlaybackQueueContextProtobuf *context;
@property (readonly, nonatomic) BOOL hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (readonly, nonatomic) BOOL hasResolvedPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *resolvedPlayerPath;
@property (nonatomic) BOOL hasSendingPlaybackQueueTransaction;
@property (nonatomic) BOOL sendingPlaybackQueueTransaction;
@property (readonly, nonatomic) BOOL hasQueueIdentifier;
@property (retain, nonatomic) NSString *queueIdentifier;
@property (retain, nonatomic) NSMutableArray *participants;
@property (retain, nonatomic) NSMutableArray *homeUserIdentifiers;

+ (Class)participantsType;
+ (Class)contentItemType;
+ (Class)homeUserIdentifiersType;

- (unsigned long long)hash;
- (void)clearHomeUserIdentifiers;
- (void)addParticipants:(id)a0;
- (void)clearContentItems;
- (unsigned long long)contentItemsCount;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)homeUserIdentifiersCount;
- (void)addContentItem:(id)a0;
- (void)writeTo:(id)a0;
- (void)addHomeUserIdentifiers:(id)a0;
- (unsigned long long)participantsCount;
- (id)description;
- (void)clearParticipants;
- (void).cxx_destruct;
- (id)participantsAtIndex:(unsigned long long)a0;
- (id)homeUserIdentifiersAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)contentItemAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
