@class NSDictionary, WLKURLRequestProperties;

@interface WLKUTSNetworkRequestOperation : WLKNetworkRequestOperation {
    NSDictionary *_responseDictionary;
}

@property (nonatomic) unsigned long long environmentHash;
@property (retain, nonatomic) WLKURLRequestProperties *requestProperties;
@property BOOL didHandleInvalidConfig;

- (id)responseDictionary;
- (id)init;
- (id)shortDescription;
- (void).cxx_destruct;
- (id)initWithRequestProperties:(id)a0;
- (void)processResponse;
- (void)configureSession;
- (void)handleResult:(id)a0 error:(id)a1;
- (void)prepareURLRequest:(id /* block */)a0;

@end
