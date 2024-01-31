@class SSVLoadURLOperation, SUUIArtworkRequest;

@interface SUUILoadArtworkResourceOperation : SUUILoadResourceOperation

@property (weak) SSVLoadURLOperation *underlyingOperation;
@property (readonly, copy) SUUIArtworkRequest *resourceRequest;

- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithResourceRequest:(id)a0;

@end
