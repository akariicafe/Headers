@class UIColor;

@interface _UIListContentImageView : UIImageView {
    BOOL _hadStroke;
}

@property (retain, nonatomic, setter=_setStrokeColor:) UIColor *_strokeColor;
@property (nonatomic, setter=_setStrokeWidth:) double _strokeWidth;

- (void)_registerTraitChanges;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)_updateStroke;
- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0 highlightedImage:(id)a1;

@end
