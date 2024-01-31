@interface NewsFeed.FormatVideoPlayerProvider : NSObject <SVVideoProviding> {
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ metadata;
}

@property (nonatomic, readonly) double impressionThreshold;

- (id)init;
- (id /* block */)loadWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)playbackStarted;
- (void)playbackResumed;
- (void)playbackFailedWithError:(id)a0;
- (void)playbackFinished;
- (void)playbackInitiatedWithButtonTapped:(BOOL)a0;
- (void)playbackPaused;
- (void)playbackReadyToStart;
- (void)startedPictureInPicture;
- (void)stoppedPictureInPicture;

@end
