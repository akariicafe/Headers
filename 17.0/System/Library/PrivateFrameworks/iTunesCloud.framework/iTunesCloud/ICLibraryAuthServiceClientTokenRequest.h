@class ICStoreRequestContext, ICLibraryAuthServiceClientTokenResponse;

@interface ICLibraryAuthServiceClientTokenRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    ICLibraryAuthServiceClientTokenResponse *_response;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithStoreRequestContext:(id)a0;

@end
