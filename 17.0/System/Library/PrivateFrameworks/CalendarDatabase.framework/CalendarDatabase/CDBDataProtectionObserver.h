@class NSString, CalDeviceLockObserver;

@interface CDBDataProtectionObserver : NSObject

@property (class, readonly, nonatomic) NSString *stateChangedNotificationName;

@property (retain, nonatomic) CalDeviceLockObserver *deviceLockObserver;
@property (copy, nonatomic) id /* block */ stateChangedCallback;
@property (readonly, nonatomic) BOOL dataIsAccessible;

- (id)init;
- (void)_deviceLockStateChanged;
- (void).cxx_destruct;

@end
