@class ICStoreRequestContext, ICIAMSynchronizeMessagesResponse;

@interface ICInAppMessageSyncRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    ICIAMSynchronizeMessagesResponse *_syncResponse;
    unsigned long long _fromRevision;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithStoreRequestContext:(id)a0 fromRevision:(unsigned long long)a1;

@end
