@interface PassKitUI.InStoreTopUpTokenModel : NSObject <PKAccountServiceObserver> {
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ _displayableError;
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ accountService;
    void /* unknown type, empty encoding */ paymentWebService;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)didUpdateInStoreTopUpToken:(id)a0 forAccountIdentifier:(id)a1;

@end
