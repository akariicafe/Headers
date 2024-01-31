@interface ANSystemNotificationObserver : NSObject

@property (copy) id /* block */ observerHandler;

+ (id)observer:(id /* block */)a0;

- (id)init;
- (void)dealloc;
- (void)startObservingNotifications;
- (void)_languageDidChange;
- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)removeNotificationObservers;

@end
