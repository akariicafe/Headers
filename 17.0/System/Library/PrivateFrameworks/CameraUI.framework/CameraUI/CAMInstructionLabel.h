@class UIColor, NSString, UIActivityIndicatorView, UILabel, NSAttributedString;
@protocol CAMInstructionLabelDelegate;

@interface CAMInstructionLabel : UIView

@property (readonly, nonatomic) UILabel *_label;
@property (copy, nonatomic) NSAttributedString *_attributedText;
@property (retain, nonatomic) UIActivityIndicatorView *_activityIndicatorView;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } _textInsets;
@property (readonly, nonatomic) UIColor *_textColor;
@property (readonly, nonatomic) double _backgroundAlpha;
@property (readonly, nonatomic) NSString *_symbolPrefixName;
@property (readonly, nonatomic) NSString *_symbolSuffixName;
@property (copy, nonatomic) NSString *text;
@property (weak, nonatomic) id<CAMInstructionLabelDelegate> delegate;
@property (nonatomic) long long style;
@property (nonatomic) BOOL useModeDialFontSize;

- (void)_updateLabel;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateAttributedText;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_textAttributes;
- (double)_defaultCornerRadius;
- (void)_updateLayer;
- (double)_backgroundColorWhiteValue;
- (BOOL)_wantsPrefixActivityIndicatorView;

@end
