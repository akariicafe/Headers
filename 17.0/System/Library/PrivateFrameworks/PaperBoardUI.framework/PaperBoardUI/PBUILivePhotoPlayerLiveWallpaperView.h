@class ISLiveWallpaperUIView;

@interface PBUILivePhotoPlayerLiveWallpaperView : PBUILivePhotoPlayerView {
    ISLiveWallpaperUIView *_liveWallpaperView;
}

- (id)init;
- (id)gestureRecognizer;
- (long long)playbackState;
- (void).cxx_destruct;
- (id)_playerUIView;
- (void)_subclass_updateForForcingPlayback:(BOOL)a0;
- (void)_subclass_updatePlayerItemForUse:(id)a0;

@end
