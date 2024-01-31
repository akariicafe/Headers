@class UILabel, UIFont;

@interface CAMFocalLengthLabel : UIView

@property (readonly, nonatomic) UILabel *_unitLabel;
@property (readonly, nonatomic) UILabel *_numeralLabel;
@property (retain, nonatomic) UIFont *_numeralFont;
@property (retain, nonatomic) UIFont *_unitFont;
@property (nonatomic) struct CGSize { double width; double height; } _numeralSize;
@property (nonatomic) struct CGSize { double width; double height; } _unitSize;
@property (nonatomic) long long focalLength;

- (void)setFocalLength:(long long)a0 animated:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateUnitText;
- (void)_updateFontsAndTextAnimated:(BOOL)a0;
- (void)_updateNumeralTextAnimated:(BOOL)a0;

@end
