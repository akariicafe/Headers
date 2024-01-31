@interface iCloudMailAccountUI.LegacyMailAccountCreator : NSObject <RUILoaderDelegate, RUIObjectModelDelegate> {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ appleAccount;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ completionHandler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationController;
    void /* unknown type, empty encoding */ objectModels;
    void /* unknown type, empty encoding */ $__lazy_storage_$_ruiLoader;
}

- (void)loader:(id)a0 didReceiveHTTPResponse:(id)a1 forRequest:(id)a2;
- (void)loader:(id)a0 receivedObjectModel:(id)a1 topActionSignal:(id)a2;
- (void)objectModel:(id)a0 pressedButton:(id)a1 attributes:(id)a2;
- (void)objectModel:(id)a0 pressedLink:(id)a1 httpMethod:(id)a2;
- (id)parentViewControllerForObjectModel:(id)a0;
- (id)sessionConfigurationForLoader:(id)a0;
- (long long)supportedInterfaceOrientationsForObjectModel:(id)a0 page:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
