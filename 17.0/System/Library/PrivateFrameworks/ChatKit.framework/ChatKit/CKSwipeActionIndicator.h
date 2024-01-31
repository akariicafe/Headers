@interface CKSwipeActionIndicator : UIImageView

@property (nonatomic) double currentScale;
@property (nonatomic) double currentHorizontalTranslation;
@property (nonatomic) double blurRadius;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)initWithImage:(id)a0;
- (void)_swipeActionIndicatorInit;
- (void)setTransformForScale:(double)a0 horizontalTranslation:(double)a1;

@end
