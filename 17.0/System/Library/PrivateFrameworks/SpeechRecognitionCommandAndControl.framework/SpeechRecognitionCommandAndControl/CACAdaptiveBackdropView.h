@class CAFilter;

@interface CACAdaptiveBackdropView : UIView

@property (retain, nonatomic) CAFilter *gaussianBlurFilter;
@property (retain, nonatomic) CAFilter *luminanceMapFilter;
@property (retain, nonatomic) CAFilter *colorMatrix;

+ (Class)layerClass;
+ (id)contrastAdaptiveBackdropViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isContrasted:(BOOL)a1;

@end
