@interface WFSetListeningModeAction : WFAction

- (id)routeDescriptor;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)errorFromRoutePickerError:(id)a0;
- (id)errorUserInfoForRoutePickerErrorCode:(long long)a0;

@end
