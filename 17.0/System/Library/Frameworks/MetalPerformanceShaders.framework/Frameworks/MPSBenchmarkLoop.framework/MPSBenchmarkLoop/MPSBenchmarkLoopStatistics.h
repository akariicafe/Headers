@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface MPSBenchmarkLoopStatistics : NSObject {
    void *_values;
    double _sum;
    double _sumOfSquares;
    unsigned long long _numOfUniqueSamples;
    unsigned long long _ignoreNextN;
    NSObject<OS_dispatch_semaphore> *_statisticsSemaphore;
}

@property (readonly, nonatomic) double mean;
@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) unsigned long long numberOfSamples;
@property (readonly, nonatomic) double standardDeviation;
@property (readonly, nonatomic) double standardDeviationOfMean;
@property (readonly, nonatomic) double convergenceAtStandardDeviation;
@property (retain, nonatomic) NSString *label;

+ (id)new;

- (id)init;
- (void)addValue:(double)a0;
- (void)reset;
- (void)dealloc;
- (id)debugDescription;
- (void)removeLastValue;
- (void)addSumOfNValues:(double)a0 n:(unsigned long long)a1;
- (double)getValueAtIndex:(unsigned long long)a0;
- (BOOL)hasConverged;
- (void)ignoreNextNValues:(unsigned long long)a0;

@end
