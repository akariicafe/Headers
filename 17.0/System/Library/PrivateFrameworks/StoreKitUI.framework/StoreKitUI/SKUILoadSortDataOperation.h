@class SSVLoadURLOperation, SKUISortDataRequest;

@interface SKUILoadSortDataOperation : SKUILoadResourceOperation

@property (weak) SSVLoadURLOperation *underlyingOperation;
@property (readonly, copy) SKUISortDataRequest *resourceRequest;

- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithResourceRequest:(id)a0;

@end
