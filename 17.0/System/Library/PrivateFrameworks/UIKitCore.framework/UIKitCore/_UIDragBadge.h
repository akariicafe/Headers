@class UILabel, UIImageView;

@interface _UIDragBadge : UIView

@property (readonly, nonatomic) UILabel *_label;
@property (readonly, nonatomic) UIImageView *_imageView;
@property (nonatomic) long long style;
@property (nonatomic) long long itemCount;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } anchorPointForAlignment;

- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)_updateForStyle;
- (void)_updateLabelTextFromItemCount;

@end
