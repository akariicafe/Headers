@class NSMutableSet, NSMutableDictionary;

@interface _PLExpirableSet : NSObject {
    NSMutableSet *_set;
    NSMutableDictionary *_recentTouches;
    double _secondsToExpire;
}

- (void)dealloc;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (void)addObject:(id)a0;
- (void)_touch:(id)a0;
- (BOOL)_didExpireObject:(id)a0;
- (id)initWithSecondsToExpire:(double)a0;

@end
