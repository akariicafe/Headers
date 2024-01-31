@class NSArray, NSString, TSUColor;

@interface TSDMutableTransformGradient : TSDTransformGradient <TSDGradientStopContainer>

@property (nonatomic) struct CGPoint { double x0; double x1; } startPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } endPoint;
@property (nonatomic) struct CGSize { double x0; double x1; } baseNaturalSize;
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
- (void)setEndPoint:(struct CGPoint { double x0; double x1; })a0 inShapeWithNaturalSize:(struct CGSize { double x0; double x1; })a1;
- (void)setGradientAngleInDegrees:(double)a0;
- (void)setGradientStops:(id)a0;
- (void)setInflectionOfStopAtIndex:(unsigned long long)a0 toInflection:(double)a1;
- (void)setStartPoint:(struct CGPoint { double x0; double x1; })a0 inShapeWithNaturalSize:(struct CGSize { double x0; double x1; })a1;
- (void)swapStopAtIndex:(unsigned long long)a0 withStopAtIndex:(unsigned long long)a1;
- (void)upgradeIfNecessaryWithBaseNaturalSize:(struct CGSize { double x0; double x1; })a0;

@end
