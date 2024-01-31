@class NSArray, NSDate;

@interface _ICResultCache : NSObject {
    NSArray *_cachedResults;
    NSDate *_start;
    double _ttlInSeconds;
}

- (void)clear;
- (void)addResults:(id)a0;
- (id)searchWithTrigger:(id)a0;
- (BOOL)fuzzyMatchItem:(id)a0 withValue:(id)a1;
- (id)initWithTTL:(double)a0;
- (id)searchWithValue:(id)a0;
- (void).cxx_destruct;

@end
