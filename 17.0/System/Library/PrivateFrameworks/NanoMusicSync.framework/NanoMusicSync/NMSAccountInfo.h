@class ACAccountStore, ACAccount, NSObject;
@protocol OS_dispatch_queue;

@interface NMSAccountInfo : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    ACAccountStore *_accountStore;
    ACAccount *_activeAccount;
}

@property (class, readonly) NMSAccountInfo *activeStoreAccountInfo;

@property (readonly, nonatomic) ACAccount *activeAccount;

- (id)init;
- (void)dealloc;
- (void)_handleAccountStoreDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)_updateActiveAccount;
- (void)preloadActiveAccount;

@end
