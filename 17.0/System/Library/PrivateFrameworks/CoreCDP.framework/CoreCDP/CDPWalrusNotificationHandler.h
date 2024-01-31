@interface CDPWalrusNotificationHandler : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerLock;
    BOOL _isObservingWalrusStatus;
}

@property (readonly, nonatomic) BOOL isObservingWalrusStatus;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)startObservingWalrusStateChangeNotification;
- (void)_stopObservingWalrusStateChangeNotification;

@end
