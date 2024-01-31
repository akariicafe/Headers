@class NSString;

@interface MX_DeviceManagementPolicyDidChangeObserver : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deviceManagementPolicyDidChange:(id)a0;

@end
