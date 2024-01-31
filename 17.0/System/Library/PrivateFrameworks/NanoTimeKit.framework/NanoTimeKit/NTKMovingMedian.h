@class NSString, NSMutableArray;

@interface NTKMovingMedian : NSObject <NTKMovingStatistic>

@property (retain, nonatomic) NSMutableArray *values;
@property (nonatomic) double currentValue;
@property (nonatomic) unsigned long long sampleSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSampleSize:(unsigned long long)a0;
- (void)addNewValue:(double)a0;

@end
