@interface OverallMemoryUsage : NSObject

+ (id)accumulateMemoryAcrossPrioritiesWithFootprints:(id)a0 withComparator:(id /* block */)a1;

- (id)init;
- (id)memoryUsedAtOrAboveEachPriority;
- (void)addProcessFootprint:(unsigned long long)a0 withPriority:(int)a1;
- (id)memoryAvailableAtOrBelowEachPriority;
- (id)memoryUsageAtEachPriority;
- (id)systemMemoryStatsDictionary;

@end
