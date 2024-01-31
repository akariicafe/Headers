@class ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface ASKRestrictions : NSObject {
    long long _maximumAppContentRating;
    BOOL _isAppInstallationAllowed;
    BOOL _isAppUninstallationAllowed;
    BOOL _isRunningInStoreDemoMode;
    BOOL _hasManagedAppleID;
    BOOL _isAccountModificationRestricted;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) long long maximumAppContentRating;
@property (readonly, nonatomic) BOOL isAppInstallationAllowed;
@property (readonly, nonatomic) BOOL isAppUninstallationAllowed;
@property (readonly, nonatomic) BOOL isRunningInStoreDemoMode;
@property (readonly, nonatomic) BOOL hasManagedAppleID;
@property (readonly, nonatomic) BOOL isAccountModificationRestricted;

- (id)initWithAccountStore:(id)a0;
- (void)dealloc;
- (void)updateRestrictionsAndNotifyIfNeeded;
- (void).cxx_destruct;
- (void)updateRestrictionsWithCompletionBlock:(id /* block */)a0;

@end
