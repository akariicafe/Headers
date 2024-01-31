@class NSString;

@interface TwoPartTextLabel : UILabel {
    NSString *_secondTextPart;
    struct CGSize { double width; double height; } _part2Size;
    double _minPart2Width;
}

@property (nonatomic) BOOL strikethroughPart1;
@property (nonatomic) BOOL strikethroughPart2;

- (id)init;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)hasTwoParts;
- (struct CGSize { double x0; double x1; })idealSize;
- (double)rightmostDisplayedPartWidth;
- (void)setMinimumPart2Width:(double)a0;
- (void)setTextPart1:(id)a0;
- (void)setTextPart1:(id)a0 part2:(id)a1;
- (struct CGSize { double x0; double x1; })textPart2Size;

@end
