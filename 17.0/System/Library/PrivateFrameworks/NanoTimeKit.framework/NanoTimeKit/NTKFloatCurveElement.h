@class CAMediaTimingFunction;

@interface NTKFloatCurveElement : NSObject

@property (nonatomic) double floatValue;
@property (nonatomic) double fraction;
@property (nonatomic) long long curve;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

- (void).cxx_destruct;
- (id)initWithFloatValue:(double)a0 fraction:(double)a1;

@end
