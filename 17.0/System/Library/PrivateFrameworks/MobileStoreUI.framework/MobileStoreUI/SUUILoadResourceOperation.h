@class SUUIResourceRequest, NSLock, SUUIClientContext;

@interface SUUILoadResourceOperation : NSOperation {
    SUUIClientContext *_clientContext;
    NSLock *_lock;
    id /* block */ _outputBlock;
    SUUIResourceRequest *_request;
}

@property (nonatomic, setter=_setLoadReason:) long long _loadReason;
@property (readonly, copy) SUUIResourceRequest *resourceRequest;
@property (retain) SUUIClientContext *clientContext;
@property (copy) id /* block */ outputBlock;

- (id)init;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithResourceRequest:(id)a0;
- (id)_initSUUILoadResourceOperation;

@end
