@class UIView;

@interface _TtCC15PhotosUIPrivate43AmbientPhotoFramePlayergroundViewControllerP33_AA406F95772BEA5A2E5AABA48A24960025AmbientPlaygroundRenderer : NSObject <PUWallpaperRenderer> {
    void /* unknown type, empty encoding */ playgroundViewController;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) UIView *foregroundView;
@property (nonatomic, readonly) UIView *floatingView;

- (id)init;
- (void).cxx_destruct;
- (id)pu_extendRenderSessionForReason:(id)a0;
- (void)pu_noteContentSignificantlyChanged;
- (void)pu_updatePreferences:(id /* block */)a0;

@end
