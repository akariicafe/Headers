@class UIWindowScene, SBBacklightPlatformProvider, NSString, SBBacklightSignificantUserInteractionMonitor, SBAlwaysOnPolicyCoordinator;

@interface SBBacklightServicesPlatformProvider : NSObject <BLSHServicePlatformProvider>

@property (weak, nonatomic) UIWindowScene *windowScene;
@property (retain, nonatomic) SBBacklightSignificantUserInteractionMonitor *significantUserInteractionMonitor;
@property (readonly, nonatomic) SBAlwaysOnPolicyCoordinator *alwaysOnPolicyCoordinator;
@property (readonly, nonatomic) SBBacklightPlatformProvider *backlightPlatformProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
