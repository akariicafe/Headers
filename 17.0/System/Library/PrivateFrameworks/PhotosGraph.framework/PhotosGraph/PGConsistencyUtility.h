@interface PGConsistencyUtility : NSObject

+ (BOOL)_doubleValue:(double)a0 isEqualTo:(double)a1 toleranceFactor:(long long)a2;
+ (BOOL)properties:(id)a0 areConsistentWithProperties:(id)a1 toleranceFactor:(long long)a2;

@end
