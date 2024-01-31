@class MovingAverage, NSString, NetworkQualityConfiguration, NSDate;

@interface SaturationDetection : NSObject {
    MovingAverage *_movingAvg;
    MovingAverage *_instAvg;
    long long _instValues;
    float _currentAverage;
    float _saturationValue;
    BOOL _saturated;
    NetworkQualityConfiguration *_config;
    float _scalingFactor;
    NSDate *_start;
    long long _minRuntime;
    NSString *name;
}

- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (BOOL)add:(float)a0;
- (float)getAverage;
- (float)getSaturation;
- (id)initWithConfig:(id)a0 withScalingFactor:(float)a1;

@end
