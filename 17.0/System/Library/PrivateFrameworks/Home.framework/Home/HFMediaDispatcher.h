@class NSArray, ACAccountStore, NSHashTable;

@interface HFMediaDispatcher : NSObject

@property (retain, nonatomic) NSHashTable *appleMusicAccountObservers;
@property (copy, nonatomic) NSArray *appleMusicMagicAuthCapableAccounts;
@property (readonly, nonatomic) ACAccountStore *appleMusicAccountStore;
@property (readonly, nonatomic) BOOL isUsingiCloud;

+ (id)sharedDispatcher;

- (id)init;
- (void).cxx_destruct;
- (void)addAppleMusicAccountObserver:(id)a0;
- (void)_accountsStoreWasUpdated:(id)a0;
- (BOOL)_reloadAppleMusicMagicAuthCapableAccounts;
- (void)_setupAppleMusicAccountStoreIfNecessary;
- (void)removeAppleMusicAccountObserver:(id)a0;

@end
