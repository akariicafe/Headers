@class HKUnit, _HKDateIntervalCollection, NSArray, NSMutableDictionary, NSDateInterval, NSMutableArray, NSNumber, HKQuantityType;

@interface HDValueHistogramCollectionCalculator : NSObject {
    HKUnit *_canonicalUnit;
    NSArray *_valueRangesInCanonicalUnit;
    NSMutableArray *_currentIntervalCountsByValueRange;
    NSDateInterval *_currentInterval;
    NSNumber *_currentIntervalIndex;
    NSMutableDictionary *_finalizedHistogramsByDateIntervalIndex;
}

@property (readonly, copy, nonatomic) HKQuantityType *quantityType;
@property (readonly, copy, nonatomic) NSArray *quantityRanges;
@property (readonly, copy, nonatomic) _HKDateIntervalCollection *intervalCollection;

- (id)result;
- (void).cxx_destruct;
- (void)addSampleValue:(double)a0 startTime:(double)a1;
- (id)initWithQuantityType:(id)a0 quantityRanges:(id)a1 intervalCollection:(id)a2;

@end
