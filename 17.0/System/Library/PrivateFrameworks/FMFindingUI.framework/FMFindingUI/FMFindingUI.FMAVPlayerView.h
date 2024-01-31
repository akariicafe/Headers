@class NSString;

@interface FMFindingUI.FMAVPlayerView : UIView {
    void /* unknown type, empty encoding */ assetBundle;
    void /* unknown type, empty encoding */ info;
    void /* unknown type, empty encoding */ assetManager;
    void /* unknown type, empty encoding */ placeholderView;
    void /* unknown type, empty encoding */ crossDissolveDuration;
    void /* unknown type, empty encoding */ time;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ playerStartedObservation;
    void /* unknown type, empty encoding */ playerEndedObserver;
    void /* unknown type, empty encoding */ playerTimeObserver;
    void /* unknown type, empty encoding */ playingAssetName;
    void /* unknown type, empty encoding */ deviceAssetRequestWatchDogWorkItem;
    void /* unknown type, empty encoding */ isPlaying;
    void /* unknown type, empty encoding */ isShown;
    void /* unknown type, empty encoding */ disableAutoLoop;
    void /* unknown type, empty encoding */ assetName;
    void /* unknown type, empty encoding */ playingHandler;
    void /* unknown type, empty encoding */ showHideHandler;
}

@property (class, nonatomic, readonly) Class layerClass;

@property (nonatomic, readonly) NSString *accessibilityAssetName;
@property (nonatomic, readonly) NSString *description;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
