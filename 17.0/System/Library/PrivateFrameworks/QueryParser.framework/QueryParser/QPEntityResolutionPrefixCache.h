@class NSMutableOrderedSet;

@interface QPEntityResolutionPrefixCache : NSObject {
    long long _maxCount;
    long long _minPrefixLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableOrderedSet *_cache;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)cacheGroundedToken:(id)a0;
- (BOOL)hasPreviouslyGroundedPrefixOfToken:(id)a0;
- (id)initWithMaxCount:(long long)a0 minPrefixLength:(long long)a1;

@end
