@interface AMSAuthorizeMachineProtocolHandler : AMSURLProtocolHandler

@property (copy, nonatomic) id /* block */ reconfigureRequestHandler;

- (void).cxx_destruct;
- (void)reconfigureNewRequest:(id)a0 originalTask:(id)a1 redirect:(BOOL)a2 error:(id *)a3;

@end
