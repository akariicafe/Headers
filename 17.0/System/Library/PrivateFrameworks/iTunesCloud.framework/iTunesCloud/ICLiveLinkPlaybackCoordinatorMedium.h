@class NSUUID, NSMutableArray, ICLiveLink;

@interface ICLiveLinkPlaybackCoordinatorMedium : NSObject

@property (readonly, copy, nonatomic) NSUUID *localParticipantUUID;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fetchServerStateLock;
@property (readonly, nonatomic) long long fetchServerStateInProgressCount;
@property (readonly, nonatomic) NSMutableArray *fetchServerStateCompletions;
@property (readonly, weak, nonatomic) ICLiveLink *liveLink;

- (void).cxx_destruct;
- (void)handleNewTransportControlStateDictionary:(id)a0;
- (void)removeParticipant:(id)a0;
- (void)handleNewParticipantStateDictionary:(id)a0;
- (void)clearCoordinationMediumDelegate;
- (void)_broadcastLocalParticipantStateDictionary:(id)a0;
- (void)_broadcastTransportControlStateDictionary:(id)a0 forItemWithIdentifier:(id)a1;
- (void)_reloadTransportControlStateForItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)handlePlaybackSyncPayload:(id)a0;
- (id)initWithLiveLink:(id)a0;
- (BOOL)isCoordinatorSuspended;
- (void)synchronizePlaybackStateForReason:(id)a0;

@end
