@class IOKInterestNotification;

@interface IOKInterestNotificationRef : NSObject {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
}

@property (nonatomic) IOKInterestNotification *notification;

- (id)init;
- (void)lock;
- (void)unlock;

@end
