@class NSString, MRNowPlayingController, MRDestination;
@protocol SFSiriReaderPlaybackControllerDelegate;

@interface SFSiriReaderPlaybackController : NSObject <MRNowPlayingControllerDelegate> {
    MRNowPlayingController *_playbackController;
    MRDestination *_destination;
}

@property (class, readonly, nonatomic) SFSiriReaderPlaybackController *sharedPlaybackController;

@property (weak, nonatomic) id<SFSiriReaderPlaybackControllerDelegate> delegate;
@property (nonatomic) long long currentPlaybackState;
@property (readonly, nonatomic) float currentPlaybackRate;
@property (retain, nonatomic) NSString *nowPlayingContentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)playerResponseIsForSiriReadThis:(id)a0;

- (void)play;
- (void)pause;
- (void)controller:(id)a0 playbackStateDidChangeFrom:(unsigned int)a1 to:(unsigned int)a2;
- (void).cxx_destruct;
- (void)setPlaybackRate:(double)a0;
- (void)controller:(id)a0 playbackRateDidChangeFrom:(float)a1 to:(float)a2;
- (void)setupNowPlayingListenerIfNeeded;
- (BOOL)_tearDownListenerIfNowPlayControllerIsTakenOverByResponse:(id)a0;
- (void)controller:(id)a0 contentItemsDidUpdate:(id)a1;
- (void)skipBackward;
- (void)skipForward;
- (void)updateContentIdentifierOnQueue:(id)a0 completion:(id /* block */)a1;

@end
