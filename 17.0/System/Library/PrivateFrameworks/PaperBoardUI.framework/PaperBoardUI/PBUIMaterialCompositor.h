@protocol PBUIRenderer;

@interface PBUIMaterialCompositor : NSObject <PBUIWallpaperEffectCompositor>

@property (retain, nonatomic) id<PBUIRenderer> renderer;
@property (nonatomic) double downsampleFactor;

- (id)init;
- (void).cxx_destruct;
- (id)applyEffect:(id)a0 toImage:(id)a1;

@end
