@class UIColor, NSString, UIView;

@interface CPSLabelWithPlaceholder : UILabel {
    UIView *_placeholderView;
    NSString *_text;
}

@property (retain, nonatomic) UIColor *placeholderColor;
@property (nonatomic) double placeholderWidth;

- (void)setAttributedText:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (struct CGSize { double x0; double x1; })_desiredPlaceholderSize;
- (void)_placeholderInputsDidChange;

@end
