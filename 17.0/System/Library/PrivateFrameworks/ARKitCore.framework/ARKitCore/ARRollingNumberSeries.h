@interface ARRollingNumberSeries : NSObject {
    double *_series;
    unsigned long long _currentIndex;
    double _sumVariance;
}

@property (readonly, nonatomic) unsigned long long windowSize;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) double sum;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double average;
@property (readonly, nonatomic) double variance;

- (void)clear;
- (void)dealloc;
- (id)initWithWindowSize:(unsigned long long)a0;
- (void)appendNumber:(double)a0;

@end
