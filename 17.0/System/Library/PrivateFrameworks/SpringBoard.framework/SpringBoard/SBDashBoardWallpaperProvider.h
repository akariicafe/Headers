@class NSString;

@interface SBDashBoardWallpaperProvider : NSObject <CSWallpaperProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createCoverSheetWallpaperView;
- (void)wallpaperClientWillAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (id)setWallpaperFloatingLayerContainerView:(id)a0 forReason:(id)a1 withAnimationFactory:(id)a2;
- (id)createWallpaperFloatingViewForReason:(id)a0 ignoreReplica:(BOOL)a1;
- (id)suspendWallpaperAnimationForReason:(id)a0;
- (void)wallpaperClientDidRotateFromInterfaceOrientation:(long long)a0;
- (void)wallpaperClientWillRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (id)createCoverSheetWallpaperViewWithTransformOptions:(unsigned long long)a0;

@end
