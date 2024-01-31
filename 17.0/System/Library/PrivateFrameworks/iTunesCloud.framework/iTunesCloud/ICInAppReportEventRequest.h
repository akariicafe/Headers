@class ICStoreRequestContext, NSString, NSDictionary;

@interface ICInAppReportEventRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    NSString *_messageIdentifier;
    NSDictionary *_params;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithStoreRequestContext:(id)a0 messageIdentifier:(id)a1 params:(id)a2;

@end
