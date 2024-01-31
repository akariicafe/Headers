@interface _TtCC12SeymourMedia26MediaPlayerSyncCoordinatorP33_75A9D0B74F4CEE621C27366C52243E4627AVCoordinatorDelegateBridge : NSObject <AVPlaybackCoordinationMediumDelegate> {
    void /* unknown type, empty encoding */ localParticipantID;
    void /* unknown type, empty encoding */ delegate;
}

- (id)init;
- (void).cxx_destruct;
- (id)localParticipantUUIDForPlaybackCoordinator:(id)a0;
- (void)playbackCoordinator:(id)a0 broadcastLocalParticipantStateDictionary:(id)a1;
- (void)playbackCoordinator:(id)a0 broadcastTransportControlStateDictionary:(id)a1 forItemWithIdentifier:(id)a2;
- (void)playbackCoordinator:(id)a0 reloadTransportControlStateForItemWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
