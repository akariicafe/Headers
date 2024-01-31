@class ICSecureKeyDeliveryRequest;

@interface ICSecureKeyDeliveryRequestOperation : ICAsyncOperation

@property (copy, nonatomic) ICSecureKeyDeliveryRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void).cxx_destruct;
- (id)_createDefaultProtocolRequestBodyUsingPlaybackContextData:(id)a0;
- (id)_createPodcastLicenseProtocolRequestBodyUsingPlaybackContextData:(id)a0;
- (void)_createServerPlaybackContextWithCompletion:(id /* block */)a0;
- (id)_createSimplifiedProtocolRequestBodyUsingPlaybackContextData:(id)a0;

@end
