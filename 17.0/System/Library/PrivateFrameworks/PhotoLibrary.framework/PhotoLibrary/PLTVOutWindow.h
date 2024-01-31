@class UIView;

@interface PLTVOutWindow : UIWindow {
    UIView *_backgroundView;
    UIView *_videoView;
}

- (id)init;
- (void)dealloc;
- (id)videoView;
- (BOOL)setVideoView:(id)a0;
- (BOOL)_setupTargetScreen:(id)a0;

@end
