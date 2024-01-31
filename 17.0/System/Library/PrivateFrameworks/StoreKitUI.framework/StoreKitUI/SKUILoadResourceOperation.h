@class SKUIResourceRequest, SKUIClientContext, NSLock;

@interface SKUILoadResourceOperation : NSOperation {
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    id /* block */ _outputBlock;
    SKUIResourceRequest *_request;
}

@property (nonatomic, setter=_setLoadReason:) long long _loadReason;
@property (readonly, copy) SKUIResourceRequest *resourceRequest;
@property (retain) SKUIClientContext *clientContext;
@property (copy) id /* block */ outputBlock;

- (id)init;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (id)_initSKUILoadResourceOperation;
- (id)initWithResourceRequest:(id)a0;

@end
