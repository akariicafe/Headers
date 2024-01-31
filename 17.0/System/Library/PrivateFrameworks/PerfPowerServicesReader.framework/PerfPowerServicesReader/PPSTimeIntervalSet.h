@class NSDictionary, PPSTimeInterval, PPSTimeIntervalCoalescePolicy;

@interface PPSTimeIntervalSet : NSObject <NSCopying, NSFastEnumeration>

@property (readonly) PPSTimeIntervalCoalescePolicy *coalescePolicy;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSDictionary *dictionary;
@property (readonly) double duration;
@property (readonly) double endTimestamp;
@property (readonly) PPSTimeInterval *firstInterval;
@property (readonly) PPSTimeInterval *lastInterval;
@property (readonly) double maximumValue;
@property (readonly) double mean;
@property (readonly) double minimumValue;
@property (readonly) double startTimestamp;
@property (readonly) double sum;
@property (readonly) double timeWeightedMean;
@property (readonly) double timeWeightedSum;

- (id)JSONRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addTimeInterval:(id)a0;
- (id)differenceFromIntervalSet:(id)a0;
- (id)filteredIntervalSetUsingPredicate:(id)a0;
- (id)initWithCoalescePolicy:(id)a0;
- (id)initWithTimeInterval:(id)a0 coalescePolicy:(id)a1;
- (id)initWithTimeIntervalSet:(id)a0 coalescePolicy:(id)a1;
- (id)intersectingIntervalForTimeInterval:(id)a0;
- (id)intersectingIntervalForTimestamp:(double)a0;
- (id)intersectionFromIntervalSet:(id)a0;
- (BOOL)intersectsIntervalSet:(id)a0;
- (void)removeAllIntervals;
- (id)unionWithIntervalSet:(id)a0;

@end
