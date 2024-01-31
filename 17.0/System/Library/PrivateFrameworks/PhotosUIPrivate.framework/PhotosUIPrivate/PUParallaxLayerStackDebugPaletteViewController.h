@class PUParallaxLayerStackDebugPaletteView, UISegmentedControl;

@interface PUParallaxLayerStackDebugPaletteViewController : UIViewController

@property (retain, nonatomic) UISegmentedControl *switchControl;
@property (retain, nonatomic) PUParallaxLayerStackDebugPaletteView *colorBGPaletteView;
@property (retain, nonatomic) PUParallaxLayerStackDebugPaletteView *colorWashSinglePaletteView;
@property (retain, nonatomic) PUParallaxLayerStackDebugPaletteView *colorWashDuotonePaletteView;
@property (retain, nonatomic) PUParallaxLayerStackDebugPaletteView *greenScreenMutedPaletteView;
@property (retain, nonatomic) PUParallaxLayerStackDebugPaletteView *greenScreenVibrantPaletteView;
@property (retain, nonatomic) PUParallaxLayerStackDebugPaletteView *customPaletteView;

- (id)init;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)addSwitchableView:(id)a0;
- (void)modeChanged:(id)a0;

@end
