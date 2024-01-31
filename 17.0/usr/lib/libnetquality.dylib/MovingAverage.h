@class NSMutableArray;

@interface MovingAverage : NSObject {
    unsigned long long _arraySize;
    NSMutableArray *_values;
    float _currentAverage;
    float _scalingFactor;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithSize:(unsigned long long)a0 withScalingFactor:(float)a1;
- (float)add:(float)a0 overflow:(BOOL)a1;
- (float)getAvg;
- (float)getStdDev;

@end
