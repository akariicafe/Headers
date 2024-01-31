@interface PDSUserTracker : NSObject

@property (copy, nonatomic) id /* block */ accountStoreBlock;

+ (id)standardAccountStore;

- (id)init;
- (void).cxx_destruct;
- (id)_accountForUser:(id)a0 withError:(id *)a1;
- (id)initWithAccountStoreBlock:(id /* block */)a0;
- (void)refreshCredentialsForUser:(id)a0 withError:(id *)a1 completion:(id /* block */)a2;
- (id)tokenAndIdentifier:(id *)a0 forUser:(id)a1 withError:(id *)a2;
- (BOOL)validUser:(id)a0 withError:(id *)a1;

@end
