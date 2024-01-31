@class ICStoreRequestContext, NSString, ICStoreURLRequest;

@interface ICSongDownloadDoneRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    NSString *_downloadIdentifier;
    unsigned long long _songID;
    ICStoreURLRequest *_storeURLRequest;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithRequestContext:(id)a0 downloadIdentifier:(id)a1 songID:(unsigned long long)a2;

@end
