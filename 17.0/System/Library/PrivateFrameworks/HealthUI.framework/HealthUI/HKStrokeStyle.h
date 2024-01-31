@class UIColor;

@interface HKStrokeStyle : NSObject <NSCopying>

@property (copy, nonatomic) UIColor *strokeColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) int lineCap;
@property (nonatomic) int lineJoin;
@property (nonatomic) long long dashStyle;
@property (nonatomic) int blendMode;

+ (id)strokeStyleWithColor:(id)a0 lineWidth:(double)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToContext:(struct CGContext { } *)a0;
- (void)applyToContext:(struct CGContext { } *)a0 dashPhase:(double)a1;

@end
