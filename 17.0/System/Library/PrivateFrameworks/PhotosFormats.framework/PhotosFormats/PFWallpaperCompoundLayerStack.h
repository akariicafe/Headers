@class PFPosterLayout, PFParallaxLayerStack;

@interface PFWallpaperCompoundLayerStack : NSObject

@property (readonly, nonatomic) PFParallaxLayerStack *portraitLayerStack;
@property (readonly, nonatomic) PFParallaxLayerStack *landscapeLayerStack;
@property (readonly, nonatomic) PFPosterLayout *layout;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

- (void).cxx_destruct;
- (id)backgroundBackfillLayer;
- (id)compoundLayerStackByUpdatingParallaxDisabled:(BOOL)a0;
- (id)compoundLayerStackByUpdatingPortraitDepthEnabled:(BOOL)a0 landscapeDepthEnabled:(BOOL)a1;
- (id)compoundLayerStackByUpdatingSettlingEffectEnabled:(BOOL)a0;
- (id)initWithPortraitLayerStack:(id)a0 landscapeLayerStack:(id)a1;

@end
