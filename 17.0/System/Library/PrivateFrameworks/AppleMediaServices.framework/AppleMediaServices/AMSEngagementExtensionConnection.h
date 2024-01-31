@interface AMSEngagementExtensionConnection : NSObject <_EXMainConnectionHandler>

@property (readonly) id principalObject;

- (void)performRequestWithObject:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void).cxx_destruct;
- (id)initWithPrincipalObject:(id)a0;

@end
