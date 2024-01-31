@class SUUIItemResourceRequest, SSVPlatformRequestOperation;

@interface SUUILoadItemResourceOperation : SUUILoadResourceOperation

@property (weak) SSVPlatformRequestOperation *underlyingOperation;
@property (readonly, copy) SUUIItemResourceRequest *resourceRequest;

- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithResourceRequest:(id)a0;

@end
