@class ACAccount, NSObject;
@protocol OS_dispatch_queue;

@interface PLAccountStore : ACAccountStore {
    NSObject<OS_dispatch_queue> *_queue;
    ACAccount *_cachedPrimaryAppleAccount;
}

@property (readonly, weak) ACAccount *cachedPrimaryAppleAccount;

+ (id)pl_sharedAccountStore;

- (id)init;
- (void)dealloc;
- (void)accountDidChange:(id)a0;
- (void)clearCachedProperties;
- (void).cxx_destruct;

@end
