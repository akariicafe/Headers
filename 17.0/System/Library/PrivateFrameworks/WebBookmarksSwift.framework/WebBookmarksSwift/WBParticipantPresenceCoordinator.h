@class _WBParticipantPresenceCoordinator;
@protocol WBParticipantPresenceCoordinatorDelegate;

@interface WBParticipantPresenceCoordinator : NSObject <_WBParticipantPresenceCoordinatorDelegate> {
    _WBParticipantPresenceCoordinator *_internalCoordinator;
}

@property (weak, nonatomic) id<WBParticipantPresenceCoordinatorDelegate> delegate;

- (id)init;
- (void)participantPresenceCoordinator:(id)a0 didUpdateActiveParticipants:(id)a1 inTabGroupWithIdentifier:(id)a2;
- (void).cxx_destruct;
- (void)participantPresenceCoordinator:(id)a0 didUpdateActiveParticipants:(id)a1 inTabWithIdentifier:(id)a2;
- (void)getCurrentConnectionStateWithCompletionHandler:(id /* block */)a0;
- (void)shareDidUpdate:(id)a0;
- (void)beginCollaborationForShare:(id)a0;
- (void)beginDeviceCoordination;
- (void)endCollaborationForShare:(id)a0;
- (void)endDeviceCoordination;
- (void)getActiveParticipantsInTabGroupWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getActiveParticipantsInTabWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getCurrentLocationIdentifiersForParticipantIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveCurrentParticipantToTabIdentifier:(id)a0 inTabGroupIdentifier:(id)a1 withDeviceIdentifier:(id)a2;
- (void)getTabGroupIdentifierForParticipantIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getTabIdentifierForParticipantIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
