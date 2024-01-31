@class CUIPSDGradientEvaluator;

@interface CUIPSDGradient : NSObject

@property (retain) CUIPSDGradientEvaluator *evaluator;
@property double drawingAngle;
@property unsigned int gradientStyle;

+ (id)cuiPSDGradientWithColors:(id)a0 locations:(id)a1 midpointLocations:(id)a2 angle:(double)a3 isRadial:(BOOL)a4;
+ (id)cuiPSDGradientWithColors:(id)a0 locations:(id)a1 midpointLocations:(id)a2 angle:(double)a3 style:(unsigned int)a4;
+ (id)getMidpointLocationFromArray:(id)a0 atIndex:(long long)a1 withPolicy:(int)a2;

- (void)dealloc;
- (id)initWithEvaluator:(id)a0 drawingAngle:(double)a1 gradientStyle:(unsigned int)a2;

@end
