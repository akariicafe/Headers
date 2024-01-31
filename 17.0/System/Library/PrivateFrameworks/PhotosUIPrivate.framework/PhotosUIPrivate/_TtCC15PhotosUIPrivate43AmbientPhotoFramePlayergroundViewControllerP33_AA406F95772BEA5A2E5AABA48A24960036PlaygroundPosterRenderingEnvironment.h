@class NSURL;

@interface _TtCC15PhotosUIPrivate43AmbientPhotoFramePlayergroundViewControllerP33_AA406F95772BEA5A2E5AABA48A24960036PlaygroundPosterRenderingEnvironment : NSObject <PUWallpaperRenderingEnvironment> {
    void /* unknown type, empty encoding */ assetDirectory;
}

@property (nonatomic, readonly) long long pu_backlightLuminance;
@property (nonatomic, readonly) BOOL pu_snapshot;
@property (nonatomic, readonly) BOOL pu_preview;
@property (nonatomic, readonly) long long pu_significantEventsCounter;
@property (nonatomic, readonly) BOOL pu_playground;
@property (nonatomic, readonly) BOOL pu_callServices;
@property (nonatomic, readonly) NSURL *pu_assetDirectory;
@property (nonatomic, readonly) long long pu_contentsType;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } pu_floatingObscurableBounds;
@property (nonatomic, readonly) long long pu_deviceOrientation;

- (id)init;
- (void).cxx_destruct;
- (BOOL)pu_isPlayground;
- (BOOL)pu_isCallServices;
- (BOOL)pu_isPreview;
- (BOOL)pu_isSnapshot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pu_titleBoundsForLayout:(unsigned long long)a0;

@end
