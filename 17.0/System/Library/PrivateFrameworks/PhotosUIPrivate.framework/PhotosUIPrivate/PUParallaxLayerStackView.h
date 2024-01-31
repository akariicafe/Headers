@class PUParallaxLayerStackViewModel;

@interface PUParallaxLayerStackView : UIView

@property (retain, nonatomic) PUParallaxLayerStackViewModel *viewModel;
@property (nonatomic) struct CGPoint { double x; double y; } motionVector;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateContainerFrame;

@end
