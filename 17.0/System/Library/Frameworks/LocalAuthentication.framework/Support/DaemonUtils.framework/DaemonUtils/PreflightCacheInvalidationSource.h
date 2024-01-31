@class PreflightCache;

@interface PreflightCacheInvalidationSource : NSObject

@property (nonatomic) BOOL status;
@property (readonly, weak, nonatomic) PreflightCache *cache;

+ (id)voidInvalidationSource;

- (void).cxx_destruct;
- (void)updateStatus;
- (id)invalidationReason;
- (void)handleNotificationInServerQueue;
- (void)handleNotificationWithCompletion:(id /* block */)a0;
- (id)initWithPreflightCache:(id)a0;

@end
