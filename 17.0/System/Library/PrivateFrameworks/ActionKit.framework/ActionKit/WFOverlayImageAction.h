@interface WFOverlayImageAction : WFAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (void)getImageInputs:(id /* block */)a0 withInput:(id)a1;
- (void)runWithNoUserInterface:(id)a0;

@end
