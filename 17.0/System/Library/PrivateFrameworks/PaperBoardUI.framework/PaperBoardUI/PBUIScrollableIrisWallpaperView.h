@class NSString, AVAsset, NSURL, UIGestureRecognizer, PBUILivePhotoPlayerView;
@protocol PBUIIrisWallpaperPlayerDelegate;

@interface PBUIScrollableIrisWallpaperView : PBUIScrollableStaticWallpaperView <UIGestureRecognizerDelegate, PBUILivePhotoPlayerViewDelegate, PBUIIrisWallpaperPlaying> {
    AVAsset *_video;
    PBUILivePhotoPlayerView *_playerView;
    long long _playbackState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PBUIIrisWallpaperPlayerDelegate> irisDelegate;
@property (readonly, nonatomic) long long irisPlaybackState;
@property (readonly, nonatomic) BOOL isIrisInteracting;
@property (readonly, nonatomic) double stillTimeInVideo;
@property (readonly, nonatomic) UIGestureRecognizer *irisGestureRecognizer;
@property (readonly, copy, nonatomic) NSURL *videoFileURL;

- (id)_newImageView;
- (void)dealloc;
- (void)playerViewPlaybackStateDidChange:(id)a0;
- (void)playerViewIsInteractingDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 wallpaperVideo:(id)a2 variant:(long long)a3;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
