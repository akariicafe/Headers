@class NSArray, NSString;
@protocol PNPPencilInteractionEventDestination;

@interface PNPSyntheticPencilInteractionEventSource : NSObject <PNPPencilInteractionEventSource> {
    BOOL _playing;
    BOOL _cancelled;
}

@property (readonly, nonatomic) NSArray *playlist;
@property (weak, nonatomic) id<PNPPencilInteractionEventDestination> eventDestination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)play;
- (void)stop;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (void)_playEventAtPlayheadPosition:(long long)a0;
- (long long)_playlistPositionForPosition:(long long)a0;
- (id)_terminalEventsForPlayhead;

@end
