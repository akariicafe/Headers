@class UIImageSymbolConfiguration, MRUOutputDeviceAsset, UIView;

@interface MRUContinuousSliderView : CCUIContinuousSliderView

@property (nonatomic) double referenceGlyphScale;
@property (readonly, nonatomic) UIView *materialView;
@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (readonly, nonatomic) MRUOutputDeviceAsset *outputDeviceAsset;

- (void)setOutputDeviceAsset:(id)a0 state:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)setGlyphScale:(double)a0;

@end
