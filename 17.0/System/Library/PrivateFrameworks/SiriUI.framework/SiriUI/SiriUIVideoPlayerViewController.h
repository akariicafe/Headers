@class NSString;
@protocol SiriUIVideoPlayerViewControllerDelegate;

@interface SiriUIVideoPlayerViewController : AVPlayerViewController {
    BOOL _observingPlayerStatus;
    BOOL _observingItemStatus;
    BOOL _observingPlayback;
    BOOL _observingViewController;
    void *_playerStatusObserverContext;
    void *_itemStatusObserverContext;
    NSString *_savedAudioSessionCategory;
    unsigned long long _savedAudioSessionCategoryOptions;
}

@property (weak, nonatomic) id<SiriUIVideoPlayerViewControllerDelegate> videoPlayerControllerDelegate;
@property (readonly, nonatomic) BOOL shouldPlayHighResolutionContent;

- (void)dealloc;
- (void)_playbackDidFinish:(id)a0;
- (void)_restoreAudioPlaybackCategoryAndOptions;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)doneButtonTapped:(id)a0;
- (void)_registerObservers;
- (void)_updateAudioSessionCategory;
- (void)setPlayer:(id)a0;
- (void)_removeObservers;

@end
