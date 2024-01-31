@class NSString;

@interface SBApplicationDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL forcesMedusaAdoption;
@property (readonly, nonatomic) BOOL ignoresDeclaredNetworkUsage;
@property (readonly, nonatomic) BOOL shouldAllowScreenshotsInLoginWindow;
@property (nonatomic) NSString *bundleIdentifierToForceHomeAffordanceInset;
@property (readonly, nonatomic) BOOL shouldAllowUseOfNonRecapPPT;
@property (readonly, nonatomic) BOOL laserForLaunchPPT;
@property (readonly, nonatomic) BOOL shouldShowInternalApplications;
@property (readonly, nonatomic) BOOL shouldShowNonDefaultSystemApplications;

- (void)_bindAndRegisterDefaults;

@end
