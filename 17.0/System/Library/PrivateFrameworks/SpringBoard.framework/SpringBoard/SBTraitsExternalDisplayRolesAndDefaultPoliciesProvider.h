@class NSString;

@interface SBTraitsExternalDisplayRolesAndDefaultPoliciesProvider : NSObject <TRAArbiterStagesRolesProvider, SBTraitsOrientationPolicySpecifierDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)defaultIsolationDrivenRoles;
- (id)ambientPresentationStageRoles;
- (id)defaultActiveOrientationBelowDrivenRoles;
- (id)zOrderStageRoles;
- (id)defaultDeviceOrientationDrivenRoles;
- (id)defaultOtherParticipantDrivenRoles;
- (id)orientationStageRoles;
- (id)userInterfaceStyleStageRoles;
- (id)defaultKeyboardFocusDrivenRoles;

@end
