@interface CDPWebAccessNotificationHandler : NSObject {
    BOOL _isObservingWebAccessStatus;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void)_stopObservingWebAccessStateChangeNotification;
- (void)startObservingWebAccessStateChangeNotification;

@end
