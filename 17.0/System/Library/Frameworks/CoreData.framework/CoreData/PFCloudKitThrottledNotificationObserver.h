@class NSString;

@interface PFCloudKitThrottledNotificationObserver : NSObject {
    _Atomic int _notificationIteration;
    NSString *_assertionLabel;
    NSString *_label;
    long long _notificationStalenessInterval;
    id /* block */ _notificationHandlerBlock;
}

- (void)dealloc;
- (id)initWithLabel:(id)a0 handlerBlock:(id /* block */)a1;

@end
