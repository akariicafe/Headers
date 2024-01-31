@class NSString;

@interface WFOOPControllerExitingState : WFOOPControllerState <WFState>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canTransitionToState:(id)a0;
- (unsigned long long)stage;

@end
