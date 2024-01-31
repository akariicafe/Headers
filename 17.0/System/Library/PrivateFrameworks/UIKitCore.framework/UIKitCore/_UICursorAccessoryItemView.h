@class NSString, UIImageView, UIImage, UILabel, _UIShapeView;

@interface _UICursorAccessoryItemView : UIControl {
    UILabel *_labelView;
    UIImageView *_imageView;
    _UIShapeView *_backgroundView;
}

@property (nonatomic) unsigned long long style;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) double horizontalPadding;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) unsigned long long roundedEdges;
@property (nonatomic) BOOL collapsed;
@property (nonatomic) struct { NSString *label; UIImage *image; unsigned long long type; } content;

+ (id)_makeImageView;
+ (id)_makeLabelView;

- (void)cancelTrackingWithEvent:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_recomputeColors;

@end
