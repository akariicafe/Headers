@class NSArray, NSString, TSUColor;

@interface TSDMutableAngleGradient : TSDAngleGradient <TSDGradientStopContainer>

@property (nonatomic) double gradientAngleInDegrees;
@property (nonatomic) double gradientAngle;
@property (nonatomic) unsigned long long gradientType;
@property (nonatomic) double opacity;
@property (nonatomic) BOOL isAdvancedGradient;
@property (retain, nonatomic) NSArray *gradientStops;
@property (retain, nonatomic) TSUColor *firstColor;
@property (retain, nonatomic) TSUColor *lastColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setOpacity:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setGradientType:(unsigned long long)a0;
- (id)insertStopAtFraction:(double)a0 withColor:(id)a1;
- (void)evenlyDistributeStops;
- (void)insertGradientStop:(id)a0;
- (id)insertStopAtFraction:(double)a0;
- (void)moveStopAtIndex:(unsigned long long)a0 toFraction:(double)a1;
- (void)removeStop:(id)a0;
- (id)removeStopAtIndex:(unsigned long long)a0;
- (void)reverseStopOrder;
- (void)setColorOfStopAtIndex:(unsigned long long)a0 toColor:(id)a1;
- (void)setGradientAngle:(double)a0;
- (void)setGradientAngleInDegrees:(double)a0;
- (void)setGradientStops:(id)a0;
- (void)setInflectionOfStopAtIndex:(unsigned long long)a0 toInflection:(double)a1;
- (void)setIsAdvancedGradient:(BOOL)a0;
- (void)swapStopAtIndex:(unsigned long long)a0 withStopAtIndex:(unsigned long long)a1;

@end
