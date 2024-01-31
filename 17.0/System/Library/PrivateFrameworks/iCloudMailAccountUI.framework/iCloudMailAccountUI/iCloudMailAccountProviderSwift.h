@interface iCloudMailAccountProviderSwift : NSObject {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ appleAccount;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_legacyMailCreator;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPresenter:(id)a0 appleAccount:(id)a1 accountStore:(id)a2;
- (void)presentWith:(id /* block */)a0;
- (void)presentWith:(BOOL)a0 completion:(id /* block */)a1;

@end
