@class ICStoreRequestContext, ICLightweightMusicSubscriptionStatusResponse;

@interface ICLightweightMusicSubscriptionStatusRequest : ICRequestOperation {
    ICLightweightMusicSubscriptionStatusResponse *_response;
}

@property (copy, nonatomic) ICStoreRequestContext *requestContext;

- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;
- (void)_finishWithExtendedSubscriptionStatusResponse:(id)a0 error:(id)a1;

@end
