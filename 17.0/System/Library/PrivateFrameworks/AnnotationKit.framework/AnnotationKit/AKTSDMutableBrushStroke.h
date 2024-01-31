@class UIColor, NSString;

@interface AKTSDMutableBrushStroke : AKTSDBrushStroke

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double width;
@property (nonatomic) int join;
@property (nonatomic) double miterLimit;
@property (copy, nonatomic) NSString *strokeName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
