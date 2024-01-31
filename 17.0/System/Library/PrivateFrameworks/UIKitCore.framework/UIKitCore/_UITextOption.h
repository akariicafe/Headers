@class UILayoutGuide, NSString, UIImageView, NSArray, UILabel, UIView, NSLayoutConstraint;

@interface _UITextOption : UIView

@property (retain, nonatomic) NSString *textChoice;
@property (retain, nonatomic) UILabel *contentsLabel;
@property (retain, nonatomic) UIImageView *symbolImageView;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) double horizontalPadding;
@property (retain, nonatomic) NSArray *insetConstraints;
@property (retain, nonatomic) NSLayoutConstraint *minimumLabelWidth;
@property (retain, nonatomic) UILayoutGuide *accessorySymbolSpacingGuide;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } currentEdgeInsets;
@property (nonatomic) unsigned long long state;
@property (nonatomic) long long type;
@property (nonatomic) NSString *originalText;

- (id)viewForLastBaselineLayout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)textColor;
- (void)updateContentView;
- (void).cxx_destruct;
- (id)imageName;
- (id)buttonImage;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForType:(long long)a0 dividerWidth:(double)a1;
- (id)fontForLabel;
- (id)initWithTitle:(id)a0 type:(long long)a1;
- (double)insetMultiplierForContentSizeCategory:(id)a0;
- (double)leadingSpace;
- (void)showSeparator:(BOOL)a0;
- (id)textToUse;
- (void)updateText:(id)a0 type:(long long)a1;

@end
