@class ACAccountStore;

@interface AASignInOperationHelper : NSObject {
    ACAccountStore *_accountStore;
}

- (id)init;
- (void).cxx_destruct;
- (void)_refreshEnabledDataclassesForAccount:(id)a0;
- (void)_saveAccount:(id)a0 completion:(id /* block */)a1;
- (void)signInAccount:(id)a0 enablingDataclasses:(BOOL)a1 completion:(id /* block */)a2;

@end
