@class NSSet, NSString;

@interface _EXDefaults : NSObject

@property (readonly) BOOL implementsNSExtension;
@property (readonly) BOOL queryPredicatesEvaluatedOutOfProcess;
@property (readonly) BOOL useLSDExtensionKitServiceForDiscovery;
@property (readonly) BOOL useLSDExtensionKitServiceForLaunch;
@property (readonly) BOOL preferInProcessDiscovery;
@property (readonly) BOOL useItemProviderXPCConnection;
@property (readonly) BOOL appleInternal;
@property (readonly) BOOL allowsAppleInternalComponents;
@property (readonly) BOOL supportExtensionKitConfigPath;
@property (readonly) BOOL hostRequiresEntitlements;
@property (readonly) BOOL enforceLegacyExtensionPointAllowList;
@property (readonly) BOOL allowSimulatedJetsam;
@property (readonly) BOOL allowPrototypeAPI;
@property (readonly) BOOL allowPrototypeSPI;
@property (readonly) BOOL assertOnDisallowedPrototypeAPIUse;
@property (readonly) BOOL assertOnDisallowedPrototypeSPIUse;
@property (readonly) BOOL startUIHostingSessionImmediately;
@property (readonly) BOOL enforceXPCCacheCodeSigning;
@property (readonly) NSSet *errorTypes;
@property (readonly) NSSet *plistTypes;
@property (readonly) NSSet *plistAndValueTypes;
@property (readonly) NSSet *extensionItemTypes;
@property (readonly) NSSet *itemProviderTypes;
@property (readonly) NSSet *alwaysEnabledExtensionBundleIdentifiers;
@property (readonly) NSString *defaultSandboxProfileName;
@property (readonly) BOOL forceSandbox;
@property (readonly) NSSet *allowedUnsandboxedExtensionPoints;
@property (readonly) BOOL platformShouldExhibitEmbeddedBehavior;
@property (readonly) BOOL disableLaunchdCheckinTimeout;
@property (readonly) BOOL queryAllowsDuplicates;

+ (id)sharedInstance;

- (id)_init;
- (BOOL)allowPrototypeAPI;
- (BOOL)allowPrototypeSPI;
- (BOOL)allowSimulatedJetsam;
- (id)allowedUnsandboxedExtensionPoints;
- (BOOL)allowsAppleInternalComponents;
- (id)alwaysEnabledExtensionBundleIdentifiers;
- (BOOL)assertOnDisallowedPrototypeAPIUse;
- (BOOL)assertOnDisallowedPrototypeSPIUse;
- (id)defaultSandboxProfileName;
- (BOOL)disableLaunchdCheckinTimeout;
- (BOOL)enforceLegacyExtensionPointAllowList;
- (BOOL)enforceXPCCacheCodeSigning;
- (BOOL)forceSandbox;
- (BOOL)hostRequiresEntitlements;
- (BOOL)implementsNSExtension;
- (BOOL)platformShouldExhibitEmbeddedBehavior;
- (BOOL)queryAllowsDuplicates;
- (BOOL)startUIHostingSessionImmediately;
- (BOOL)supportExtensionKitConfigPath;

@end
