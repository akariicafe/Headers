@class NSString, FBSDisplayIdentity;

@interface SBSceneIdentityProvider : NSObject <SBApplicationSceneIdentityProviding> {
    FBSDisplayIdentity *_displayIdentity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sceneIdentityForApplication:(id)a0 uniqueIdentifier:(id)a1 targetContentIdentifier:(id)a2;
- (id)sceneIdentityForApplication:(id)a0 targetContentIdentifier:(id)a1 allowCanMatches:(BOOL)a2 preferNewScene:(BOOL)a3 allowSceneCreation:(BOOL)a4 visibleIdentifiers:(id)a5 preferredDisplay:(id)a6;
- (id)sceneIdentityForApplication:(id)a0 excludingIdentifiers:(id)a1;
- (id)sceneIdentityForApplication:(id)a0 uniqueIdentifier:(id)a1 targetContentIdentifier:(id)a2 sceneSessionRole:(id)a3;
- (id)sceneIdentityForApplication:(id)a0 uniqueIdentifier:(id)a1;
- (id)sceneIdentityForApplication:(id)a0;
- (id)sceneIdentityForApplication:(id)a0 targetContentIdentifier:(id)a1;
- (id)sceneIdentityForApplication:(id)a0 targetContentIdentifier:(id)a1 allowCanMatches:(BOOL)a2 preferNewScene:(BOOL)a3 visibleIdentifiers:(id)a4;
- (id)sceneIdentityForApplication:(id)a0 createPrimaryIfRequired:(BOOL)a1 sceneSessionRole:(id)a2;
- (id)_sceneIdentifierForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)newSceneIdentityForApplication:(id)a0;
- (id)initWithDisplayIdentity:(id)a0;

@end
