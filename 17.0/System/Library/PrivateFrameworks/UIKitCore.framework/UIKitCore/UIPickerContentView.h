@class UILabel, UIImageView;

@interface UIPickerContentView : UIView {
    UILabel *_titleLabel;
    UIImageView *_checkView;
    struct { unsigned char checked : 1; unsigned char highlighted : 1; } _pickerContentViewFlags;
}

@property (nonatomic, getter=isChecked) BOOL checked;
@property (readonly, nonatomic) UILabel *titleLabel;

+ (double)_checkmarkOffset;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (BOOL)_isSelectable;
- (id)checkedColor;
- (double)labelWidthForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
