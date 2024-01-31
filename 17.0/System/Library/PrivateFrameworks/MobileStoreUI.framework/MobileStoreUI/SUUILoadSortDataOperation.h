@class SSVLoadURLOperation, SUUISortDataRequest;

@interface SUUILoadSortDataOperation : SUUILoadResourceOperation

@property (weak) SSVLoadURLOperation *underlyingOperation;
@property (readonly, copy) SUUISortDataRequest *resourceRequest;

- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithResourceRequest:(id)a0;

@end
