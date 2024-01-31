@interface TSWPPadding : NSObject

@property (nonatomic) double topInset;
@property (nonatomic) double leftInset;
@property (nonatomic) double bottomInset;
@property (nonatomic) double rightInset;

+ (id)padding;
+ (id)paddingWithTopInset:(double)a0 leftInset:(double)a1 bottomInset:(double)a2 rightInset:(double)a3;

- (id)init;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)initWithTopInset:(double)a0 leftInset:(double)a1 bottomInset:(double)a2 rightInset:(double)a3;

@end
