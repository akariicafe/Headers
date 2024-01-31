@class AVDelegatingPlaybackCoordinator, AVCoordinatedPlaybackParticipant, NSString, NSDate;

@interface AVDelegatingPlaybackCoordinatorBufferingCommand : AVDelegatingPlaybackCoordinatorPlaybackControlCommand {
    AVDelegatingPlaybackCoordinator *_coordinator;
    AVCoordinatedPlaybackParticipant *_originator;
    NSString *_expectedCurrentItemIdentifier;
    long long _commandOrderIndex;
}

@property (readonly, nonatomic) float anticipatedPlaybackRate;
@property (readonly, nonatomic) NSDate *completionDueDate;

- (id)init;
- (void)dealloc;
- (id)originator;
- (id)expectedCurrentItemIdentifier;
- (id)initWithCoordinator:(id)a0 originator:(id)a1 expectedCurrentItemIdentifier:(id)a2 commandOrderIndex:(long long)a3 anticipatedPlaybackRate:(float)a4 completionDueDate:(id)a5;

@end
