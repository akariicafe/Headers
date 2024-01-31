@class NSMutableDictionary;

@interface IDSRateLimiter : NSObject

@property (nonatomic) long long limit;
@property (nonatomic) double timeLimit;
@property (retain, nonatomic) NSMutableDictionary *cacheMap;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (void)cleanupExpiredItems;
- (BOOL)underLimitForItem:(id)a0;
- (void)clearItem:(id)a0;
- (double)timeToUnderLimit:(id)a0;
- (void)noteItem:(id)a0;
- (id)description;
- (void)clearAllItems;
- (void).cxx_destruct;
- (id)initWithLimit:(long long)a0 timeLimit:(double)a1;
- (id)_unlockedDescription;

@end
