@interface FISimpleHistogram : NSObject {
    unsigned long long _bucketCount;
    struct { long long x0; double x1; } *_buckets;
}

- (long long)numberOfValuesInBucketAtIndex:(unsigned long long)a0;
- (id)descriptionArray;
- (void)dealloc;
- (void)addValue:(double)a0 toBucketAtIndex:(unsigned long long)a1;
- (id)debugDescription;
- (id)initWithNumberOfBuckets:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (double)valueForBucketAtIndex:(unsigned long long)a0;
- (long long)bucketCount;

@end
