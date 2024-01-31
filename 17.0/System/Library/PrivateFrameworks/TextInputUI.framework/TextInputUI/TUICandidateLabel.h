@class NSString, UIFont, UIColor;

@interface TUICandidateLabel : UIView

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic) long long lineBreakMode;

+ (double)lineWidthForText:(id)a0 font:(id)a1 layoutOrientation:(long long)a2;

- (id)accessibilityLabel;
- (void)commonInit;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct __CTLine { } *)createLineFromAttributedText:(id)a0;
- (unsigned int)lineTruncationType;

@end
