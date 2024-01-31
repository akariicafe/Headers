@class NSString, NSPointerArray, ACAccount, NSObject, AMSObservable;
@protocol OS_dispatch_queue;

@interface AMSAccountsChangedObservable : NSObject

@property (class, readonly, nonatomic) NSPointerArray *createdObservables;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *createdObservablesAccessQueue;
@property (class, readonly, nonatomic) AMSAccountsChangedObservable *sharedInstance;
@property (class, readonly, nonatomic) AMSAccountsChangedObservable *sharedLocalAccountInstance;

@property (retain, nonatomic) AMSObservable *observable;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } notificationsLock;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSString *accountTypeIdentifier;

+ (void)_processChangedAccount:(id)a0;

- (id)initWithAccount:(id)a0;
- (void)unsubscribe:(id)a0;
- (void)dealloc;
- (void)_accountStoreDidChange:(id)a0;
- (void)_processChangedAccount:(id)a0;
- (BOOL)_shouldNotifyObserversForChangedAccount:(id)a0;
- (id)_initWithAccount:(id)a0 accountTypeIdentifier:(id)a1;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountTypeIdentifier:(id)a0;

@end
