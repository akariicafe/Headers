@class AVDelegatingPlaybackCoordinator, AVCoordinatedPlaybackParticipant, NSString, NSDate;

@interface AVDelegatingPlaybackCoordinatorSeekCommand : AVDelegatingPlaybackCoordinatorPlaybackControlCommand {
    AVDelegatingPlaybackCoordinator *_coordinator;
    AVCoordinatedPlaybackParticipant *_originator;
    NSString *_expectedCurrentItemIdentifier;
    long long _commandOrderIndex;
    BOOL _shouldPause;
}

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } itemTime;
@property (readonly, nonatomic) BOOL shouldBufferInAnticipationOfPlayback;
@property (readonly, nonatomic) float anticipatedPlaybackRate;
@property (readonly, nonatomic) NSDate *completionDueDate;

- (id)init;
- (void)dealloc;
- (id)originator;
- (id)expectedCurrentItemIdentifier;
- (id)initWithCoordinator:(id)a0 originator:(id)a1 expectedCurrentItemIdentifier:(id)a2 commandOrderIndex:(long long)a3 itemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 shouldPause:(BOOL)a5 shouldBufferInAnticipationOfPlayback:(BOOL)a6 anticipatedPlaybackRate:(float)a7 completionDueDate:(id)a8;

@end
