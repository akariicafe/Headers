@class NSString, NSMutableDictionary, SUUIClientContext, NSOperationQueue, SUUIResourceLoader;

@interface SUUIJSImageColorAnalyzer : IKJSObject <SUUIArtworkRequestDelegate, SUUIJSImageColorAnalyzer> {
    SUUIClientContext *_clientContext;
    NSMutableDictionary *_artworkRequestIDsToManagedCallbacks;
    NSOperationQueue *_operationQueue;
    SUUIResourceLoader *_resourceLoader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)analyzeImageAtUrl:(id)a0 :(id)a1;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)initWithAppContext:(id)a0 clientContext:(id)a1;

@end
