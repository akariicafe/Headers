@class CALayer, CAPackage;
@protocol OBAnimationAppearanceChangeDelegate;

@interface OBAnimationView : UIView

@property (retain, nonatomic) CALayer *packageLayer;
@property (retain, nonatomic) CAPackage *package;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredFrame;
@property double scale;
@property (weak, nonatomic) id<OBAnimationAppearanceChangeDelegate> appearanceChangeDelegate;
@property BOOL flipForRTL;

- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setPackage:(id)a0;
- (double)defaultScale;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setPackage:(id)a0 sizingTransformScale:(double)a1;

@end
