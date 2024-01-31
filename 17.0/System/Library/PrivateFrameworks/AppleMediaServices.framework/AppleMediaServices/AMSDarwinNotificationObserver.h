@interface AMSDarwinNotificationObserver : NSObject

@property (readonly, nonatomic) struct __CFString { } *notificationName;
@property (copy) id /* block */ observerBlock;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNotificationName:(struct __CFString { } *)a0 additionalBehavior:(long long)a1;

@end
