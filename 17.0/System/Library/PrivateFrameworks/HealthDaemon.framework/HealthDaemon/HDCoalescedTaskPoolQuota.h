@interface HDCoalescedTaskPoolQuota : NSObject <NSCopying> {
    long long _availableQuotaAfterLastTrigger;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) long long maximumQuota;
@property (readonly, nonatomic) double quotaRefillInterval;
@property (readonly, nonatomic) double minimumInterval;
@property (readonly, nonatomic) double lastTrigger;
@property (readonly, nonatomic) long long availableQuota;
@property (readonly, nonatomic) double timeUntilNextAvailableTrigger;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)consumeQuota;
- (id)initWithAvailableQuota:(long long)a0 maximumQuota:(long long)a1 refillInterval:(double)a2 minimumInterval:(double)a3 lastTrigger:(double)a4;

@end
