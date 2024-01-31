@class ICStoreRequestContext;

@interface ICSagaGetAccountStatusRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    BOOL _isEnabled;
    BOOL _canSubscribe;
    BOOL _isSubscriber;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithStoreRequestContext:(id)a0;

@end
