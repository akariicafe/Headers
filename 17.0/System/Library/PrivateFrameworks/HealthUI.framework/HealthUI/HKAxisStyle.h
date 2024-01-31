@class HKStrokeStyle, HKAxisLabelStyle, HKTickStyle, HKFillStyle;

@interface HKAxisStyle : NSObject <NSCopying>

@property (retain, nonatomic) HKStrokeStyle *gridLineStyle;
@property (retain, nonatomic) HKStrokeStyle *minorGridLineStyle;
@property (retain, nonatomic) HKStrokeStyle *referenceGridLineStyle;
@property (retain, nonatomic) HKStrokeStyle *axisLineStyle;
@property (retain, nonatomic) HKTickStyle *tickStyle;
@property (retain, nonatomic) HKAxisLabelStyle *labelStyle;
@property (nonatomic) unsigned long long tickPositions;
@property (nonatomic) unsigned long long axisLabelPosition;
@property (nonatomic) BOOL showGridLines;
@property (retain, nonatomic) HKFillStyle *fillStyle;
@property (nonatomic) double fillInnerPadding;
@property (nonatomic) double fillOuterPadding;
@property (retain, nonatomic) HKStrokeStyle *borderStyleForFill;
@property (nonatomic) long long location;

+ (id)defaultStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
