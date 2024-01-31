@class NSString;

@interface _UISceneOpenItemProvidersBSActionsHandler : NSObject <_UISceneBSActionHandler, _UISceneBSActionSubstituting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_launchOptionsFromActions:(id)a0 forFBSScene:(id)a1 uiSceneSession:(id)a2 transitionContext:(id)a3;
- (id)_respondToActions:(id)a0 forFBSScene:(id)a1 inUIScene:(id)a2 fromTransitionContext:(id)a3;
- (id)URLContextsFetchedFromItemProviders:(id)a0 collectionIdentifier:(id)a1 contentOwner:(long long)a2 payload:(id)a3;
- (id)URLContextsFromOpenItemProvidersActions:(id)a0 payload:(id)a1;
- (id)_UIActionTypesForSubstitution;
- (id)_substituteActionsForAction:(id)a0 forFBSScene:(id)a1 inUIScene:(id)a2 fromTransitionContext:(id)a3;
- (id)bestUTIForAppFromProviderRegisteredTypeIdentifiers:(id)a0;
- (BOOL)currentAppSupportsOpenInPlace;
- (BOOL)currentAppSupportsReceivingMultipleItems;
- (id)dragContinuationFromEndpoint:(id)a0;
- (id)itemCollectionFromDragContinuation:(id)a0;
- (id)itemProvidersFromPBItemCollection:(id)a0;
- (id)openURLOptionsFromBasePayload:(id)a0 sourceProcessHandle:(id)a1 dragContentOwner:(long long)a2;
- (id)uniqueFileNameWithStakedClaims:(id)a0 hint:(id)a1 extension:(id)a2;

@end
