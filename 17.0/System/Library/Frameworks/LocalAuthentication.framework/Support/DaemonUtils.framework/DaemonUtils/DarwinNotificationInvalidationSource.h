@class NSString;

@interface DarwinNotificationInvalidationSource : PreflightCacheInvalidationSource {
    int _token;
}

@property (readonly, nonatomic) NSString *notificationName;

- (void)dealloc;
- (void).cxx_destruct;
- (id)invalidationReason;
- (id)initWithPreflightCache:(id)a0 notificationName:(const char *)a1;

@end
