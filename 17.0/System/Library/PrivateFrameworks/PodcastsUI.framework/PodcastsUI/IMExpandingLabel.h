@class UITextView, NSString, NSDictionary, CAGradientLayer, UIButton;
@protocol IMExpandingLabelDelegate;

@interface IMExpandingLabel : UIView {
    CAGradientLayer *_gradientLayer;
    id _gradientClearColor;
    id _gradientSemiClearColor;
    id _gradientSolidColor;
}

@property (nonatomic) BOOL fitsWithinLineLimit;
@property (nonatomic) unsigned long long languageDirection;
@property (retain, nonatomic) UITextView *textView;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) long long textMode;
@property (retain, nonatomic) UIButton *moreButton;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic) BOOL hasGradient;
@property (nonatomic) double gradientHeight;
@property (weak, nonatomic) id<IMExpandingLabelDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)heightForWidth:(double)a0;
- (void)moreButtonTapped:(id)a0;

@end
