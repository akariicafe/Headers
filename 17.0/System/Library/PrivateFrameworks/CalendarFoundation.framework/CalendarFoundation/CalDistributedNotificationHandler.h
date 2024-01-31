@interface CalDistributedNotificationHandler : NSObject {
    SEL _selector;
}

@property (readonly, weak) id observer;

- (id)initWithObserver:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;
- (BOOL)handleNotification:(id)a0;

@end
