@class SBMainWorkspace, SBRecentAppLayouts, SBApplicationController, SBPlatformController;

@interface SBMainDisplayLayoutStateManager : SBLayoutStateManager

@property (readonly, nonatomic) SBPlatformController *_platformController;
@property (readonly, nonatomic) SBMainWorkspace *_mainWorkspace;
@property (readonly, nonatomic) SBRecentAppLayouts *_recentAppLayouts;
@property (readonly, nonatomic) SBApplicationController *_applicationController;

+ (id)_initialLayoutStateWithDisplayOrdinal:(long long)a0 isDisplayExternal:(BOOL)a1;
+ (Class)_layoutStateClass;

- (BOOL)_doesSceneIDSpecifyPrimaryScene:(id)a0 forApplicationIdentifier:(id)a1 sceneSessionRole:(id)a2;
- (id)_applicationSceneEntityFromApplicationBundleIdentifier:(id)a0 uniqueIdentifier:(id)a1 displayIdentity:(id)a2;
- (id)_sceneIDIfAppLayoutContainsPrimarySceneIDForBundleIdentifier:(id)a0 bundleIdentifier:(id)a1 sceneSessionRole:(id)a2;
- (id)_mostRecentAppLayoutMatchingAnyUniqueIdentifier:(id)a0 chamoisWindowingUIEnabled:(BOOL)a1 multitaskingSupported:(BOOL)a2;
- (BOOL)_hasAppLayoutBeenUserKilledWithinThresholdToCreateNewScene:(id)a0;
- (id)layoutStateForApplicationTransitionContext:(id)a0;
- (id)defaultSceneIdentifierForBundleIdentifier:(id)a0 targetContentIdentifier:(id)a1 allowCanMatches:(BOOL)a2 preferNewScene:(BOOL)a3 visibleSceneIdentifiers:(id)a4 excludingSceneIdentifiers:(id)a5 sceneSessionRole:(id)a6;
- (id)_sceneManagerForDisplayIdentity:(id)a0;
- (id)primarySceneIdentifierForBundleIdentifier:(id)a0 sceneSessionRole:(id)a1 displayIdentity:(id)a2;
- (id)_switcherControllerForDisplayIdentity:(id)a0;
- (id)_layoutStateForDisplayIdentity:(id)a0;
- (id)defaultSceneIdentifierForBundleIdentifier:(id)a0 targetContentIdentifier:(id)a1 allowCanMatches:(BOOL)a2 preferNewScene:(BOOL)a3 visibleSceneIdentifiers:(id)a4 excludingSceneIdentifiers:(id)a5 sceneSessionRole:(id)a6 preferredDisplay:(id)a7;
- (id)_mostRecentAppLayoutForBundleIdentifier:(id)a0 ignoringUniqueIdentifiers:(id)a1 chamoisWindowingUIEnabled:(BOOL)a2 multitaskingSupported:(BOOL)a3;
- (id)_layoutStateForApplicationTransitionContext:(id)a0;

@end
