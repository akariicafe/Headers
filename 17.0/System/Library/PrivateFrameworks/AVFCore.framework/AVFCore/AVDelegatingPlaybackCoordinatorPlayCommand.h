@class AVCoordinatedPlaybackParticipant, NSString, AVDelegatingPlaybackCoordinator;

@interface AVDelegatingPlaybackCoordinatorPlayCommand : AVDelegatingPlaybackCoordinatorPlaybackControlCommand {
    AVDelegatingPlaybackCoordinator *_coordinator;
    AVCoordinatedPlaybackParticipant *_originator;
    NSString *_expectedCurrentItemIdentifier;
    long long _commandOrderIndex;
}

@property (readonly, nonatomic) float rate;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } itemTime;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } hostClockTime;

- (id)init;
- (void)dealloc;
- (id)originator;
- (id)expectedCurrentItemIdentifier;
- (id)initWithCoordinator:(id)a0 originator:(id)a1 expectedCurrentItemIdentifier:(id)a2 commandOrderIndex:(long long)a3 rate:(float)a4 itemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 hostClockTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6;

@end
