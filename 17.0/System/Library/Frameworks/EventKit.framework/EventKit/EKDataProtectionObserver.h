@class NSString, CDBDataProtectionObserver;

@interface EKDataProtectionObserver : NSObject

@property (class, readonly, nonatomic) NSString *stateChangedNotificationName;

@property (retain, nonatomic) CDBDataProtectionObserver *dataProtectionObserver;
@property (copy, nonatomic) id /* block */ stateChangedCallback;
@property (readonly, nonatomic) BOOL dataIsAccessible;

- (id)init;
- (void)_dataProtectionStateChanged;
- (void).cxx_destruct;

@end
