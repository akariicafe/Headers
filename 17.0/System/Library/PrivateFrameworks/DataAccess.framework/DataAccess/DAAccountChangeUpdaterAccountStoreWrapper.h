@class NSString, ACAccountStore;

@interface DAAccountChangeUpdaterAccountStoreWrapper : NSObject <DAAccountChangeHandlerAccountStoreUpdater> {
    ACAccountStore *_store;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccountStore:(id)a0;
- (void)updateAccount:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)removeAccount:(id)a0 completion:(id /* block */)a1;
- (void)addAccount:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
