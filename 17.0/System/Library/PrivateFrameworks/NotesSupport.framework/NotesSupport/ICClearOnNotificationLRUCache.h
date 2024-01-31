@protocol NSObject;

@interface ICClearOnNotificationLRUCache : ICAtomicLRUCache

@property (retain, nonatomic) id<NSObject> notificationToken;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMaxSize:(unsigned long long)a0 notificationName:(id)a1;

@end
