@class NSString;

@interface _UICubicPolyTangent : NSObject <_UISettingsKeyObserver>

@property (nonatomic) double initialLinearGain;
@property (nonatomic) double parabolicGain;
@property (nonatomic) double cubicGain;
@property (nonatomic) double quarticGain;
@property (nonatomic) double tangentLineSpeed;
@property (nonatomic) double tangentSqrtSpeed;
@property (nonatomic) double tangentCbrtSpeed;
@property (nonatomic) double tangentHyperCbrtSpeed;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyboardTrackpadCurve;

- (id)init;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (int)RootPowerOfEarliestTangent:(int)a0;
- (double)piecewiseCubicAcceleratedSpeed:(double)a0;
- (double)clipForIOFixedMath:(double)a0 polynomialPower:(int)a1 tangencyStartingAt:(double)a2;
- (void)clipGainsForIOFixedMathWithTangency;
- (double)gainForPower:(int)a0;
- (double)quarticDerivative:(double)a0;
- (double)quarticFunction:(double)a0;
- (double)quarticTangentFunction:(double)a0 powerOfEarliestTangent:(int)a1;
- (double)tangentSpeedForPower:(int)a0;

@end
