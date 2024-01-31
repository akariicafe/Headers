@class NSString, NSExtension, NSArray;

@interface SFExtensionWrapper : NSObject <WBSExtensionWrapper>

@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) Class settingsPermissionClass;
@property (readonly, copy, nonatomic) NSString *containingAppDisplayName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL canEnable;
@property (nonatomic) BOOL allowedInPrivateBrowsing;
@property (readonly, nonatomic) BOOL isContentBlocker;
@property (readonly, nonatomic) NSArray *enabledProfiles;
@property (readonly, nonatomic) NSArray *enabledNamedProfiles;
@property (readonly, nonatomic, getter=isEnabledInAnyProfile) BOOL enabledInAnyProfile;
@property (readonly, nonatomic, getter=isEnabledInAnyNamedProfile) BOOL enabledInAnyNamedProfile;
@property (readonly, nonatomic, getter=isEnabledInAllNamedProfiles) BOOL enabledInAllNamedProfiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionWrapperForContentBlockerWithComposedIdentifier:(id)a0 contentBlockerManager:(id)a1;
+ (id)extensionWrapperForWebExtensionWithComposedIdentifier:(id)a0 webExtensionsController:(id)a1;

- (void)disable;
- (long long)localizedCompare:(id)a0;
- (void)_postNotificationsToUpdateExtensionState;
- (BOOL)canLoadWithErrorString:(id *)a0;
- (BOOL)contentBlockerHasSameNameAsWebExtensionFromSameApp:(id)a0;
- (void)enableWithPresentingViewController:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isEnabledInProfile:(id)a0;

@end
