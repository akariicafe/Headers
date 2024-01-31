@class NSMutableDictionary, MRPlaybackQueue, NSDate, NSDictionary, MRNowPlayingPlayerClientCallbacks, NSObject, NSMutableArray, MRContentItem, MRPlaybackQueueSubscriptionController, MRPlayerPath, NSMutableSet, NSArray, MRNowPlayingArtwork;
@protocol OS_dispatch_queue;

@interface MRNowPlayingPlayerClient : NSObject <MRNowPlayingClientState> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_replayQueue;
    double _canBeNowPlayingPlayerTimestamp;
    MRPlaybackQueue *_playbackQueue;
    NSArray *_supportedCommands;
    NSDictionary *_nowPlayingInfo;
    MRNowPlayingArtwork *_nowPlayingArtwork;
    unsigned int _playbackState;
    NSDate *_playbackStateDate;
    unsigned long long _capabilities;
    NSDate *_lastReceivedCommandDate;
    NSDate *_activeRequestedDate;
    BOOL _pictureInPictureEnabled;
    BOOL _invalidatingPlaybackQueue;
    double _invalidatationTimestamp;
    NSMutableDictionary *_pendingPlaybackSessionMigrateEvents;
    NSMutableDictionary *_cachedContentItemChangedForPendingPlaybackQueueRequest;
    NSMutableArray *_enqueuedContentItemChangesForPendingPlaybackQueueInvalidation;
    NSMutableSet *_homeUserIdentifiers;
}

@property (nonatomic) BOOL invalidatingPlaybackQueue;
@property (retain, nonatomic) MRPlayerPath *playerPath;
@property (nonatomic) BOOL canBeNowPlayingPlayer;
@property (readonly, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (retain, nonatomic) MRNowPlayingArtwork *nowPlayingArtwork;
@property (readonly, nonatomic) unsigned int playbackState;
@property (nonatomic) double invalidatationTimestamp;
@property (retain, nonatomic) MRPlaybackQueue *playbackQueue;
@property (nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) MRContentItem *nowPlayingContentItem;
@property (readonly, nonatomic) BOOL hasReceivedCommandRecently;
@property (nonatomic, getter=isPictureInPictureEnabled) BOOL pictureInPictureEnabled;
@property (retain, nonatomic) NSDate *activeRequestedDate;
@property (readonly, nonatomic) MRPlaybackQueueSubscriptionController *subscriptionController;
@property (readonly, nonatomic) MRNowPlayingPlayerClientCallbacks *clientCallbacks;

- (void)clearCachedContentItemArtworkForItems:(id)a0;
- (void)setHomeUserIdentifier:(id)a0;
- (id)homeUserIdentifiers;
- (void)startCachingContentItemUpdatesForItem:(id)a0 forPendingRequest:(id)a1;
- (unsigned int)resolveCommand:(unsigned int)a0;
- (void)clearHomeUserIdentifiers;
- (id)initWithPlayerPath:(id)a0;
- (void)invalidatePlaybackQueueWithPlaybackQueue:(id)a0;
- (void)restoreNowPlayingClientState;
- (void)addPendingRequest:(id)a0;
- (void)addPendingPlaybackSessionMigrateEvent:(id)a0;
- (id)description;
- (void)invalidatePlaybackQueue;
- (void).cxx_destruct;
- (void)setSupportedCommands:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)updatePlayer:(id)a0;
- (id)debugDescription;
- (void)flushPendingPlaybackSessionMigrateEvents:(id /* block */)a0;
- (void)updatePlaybackState:(unsigned int)a0 date:(id)a1;
- (BOOL)removePendingPlaybackSessionMigrateEvent:(id)a0;
- (void)sendContentItemChanges:(id)a0;
- (id)resolveCommandOptions:(unsigned int)a0 options:(id)a1;
- (void)updatePlaybackQueueWithCachedUpdates:(id)a0 forPendingRequest:(id)a1;
- (void)appendHomeUserIdentifier:(id)a0;

@end
