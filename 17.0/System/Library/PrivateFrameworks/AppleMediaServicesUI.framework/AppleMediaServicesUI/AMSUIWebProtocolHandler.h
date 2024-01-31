@protocol AMSUIWebProtocolDelegate;

@interface AMSUIWebProtocolHandler : AMSURLProtocolHandler

@property (weak, nonatomic) id<AMSUIWebProtocolDelegate> delegate;

- (void).cxx_destruct;
- (void)reconfigureNewRequest:(id)a0 originalTask:(id)a1 redirect:(BOOL)a2 error:(id *)a3;

@end
