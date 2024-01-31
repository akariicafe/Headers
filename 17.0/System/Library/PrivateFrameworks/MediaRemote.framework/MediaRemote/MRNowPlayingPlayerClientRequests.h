@class MRPlaybackQueue, MRPlayerPath, NSArray, MRPlaybackQueueSubscriptionController, NSMutableDictionary, MRPlayer, NSOperationQueue, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MRNowPlayingPlayerClientRequests : NSObject <MRNowPlayingClientState> {
    MRPlaybackQueue *_playbackQueue;
    unsigned int _playbackState;
    NSArray *_supportedCommands;
    MRPlayer *_playerProperties;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_responseQueue;
    NSMutableDictionary *_playbackQueueCompletions;
    NSMutableArray *_supportedCommandsCompletions;
    NSMutableArray *_playbackStateCompletions;
    NSMutableArray *_playerPropertiesCompletions;
    NSOperationQueue *_enquedNowPlayingInfoRequests;
    NSOperationQueue *_enquedNowPlayingInfoAssetRequests;
}

@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) MRPlaybackQueueSubscriptionController *subscriptionController;
@property (nonatomic) unsigned int playbackState;
@property (copy, nonatomic) MRPlaybackQueue *playbackQueue;
@property (copy, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) MRPlayer *playerProperties;

- (void)handleSupportedCommandsRequestWithCompletion:(id /* block */)a0;
- (id)initWithPlayerPath:(id)a0;
- (void)dealloc;
- (void)restoreNowPlayingClientState;
- (void)updateContentItems:(id)a0;
- (void)enqueuePlaybackQueueRequest:(id)a0 completion:(id /* block */)a1;
- (void)updatePlaybackQueueIfUninitialized:(id)a0;
- (void)updatePlaybackStateIfUninitialized:(unsigned int)a0;
- (void)updateSupportedCommandsIfUninitialized:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)handlePlayerPropertiesRequestWithCompletion:(id /* block */)a0;
- (void)handlePlaybackStateRequestWithCompletion:(id /* block */)a0;
- (void)updateContentItemArtwork:(id)a0;

@end
