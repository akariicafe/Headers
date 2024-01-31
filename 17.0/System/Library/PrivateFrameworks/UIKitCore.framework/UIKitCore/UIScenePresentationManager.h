@class NSString, _UISceneKeyboardProxyLayerForwardingPresentationScene, _UIScenePresenterOwner, NSMapTable, FBScene, UIScenePresentationContext;
@protocol UIScenePresentationManagerDelegate;

@interface UIScenePresentationManager : NSObject <BSDescriptionProviding, _UIScenePresenterOwnerDelegate, FBSceneObserver> {
    _UISceneKeyboardProxyLayerForwardingPresentationScene *_keyboardProxyPresentationEnvironment;
    _UIScenePresenterOwner *_scenePresenterOwner;
    NSMapTable *_mapLayersToPresenterOwners;
    BOOL _invalidated;
    struct { BOOL defaultPriorityBand; } _delegateFlags;
}

@property (readonly, weak, nonatomic) FBScene *scene;
@property (weak, nonatomic) id<UIScenePresentationManagerDelegate> delegate;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) UIScenePresentationContext *defaultPresentationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sceneHostingGraph;

- (void)sceneDidInvalidate:(id)a0;
- (id)init;
- (id)succinctDescriptionBuilder;
- (id)_initWithScene:(id)a0 keyboardProxyLayerManager:(id)a1 keyboardProxyPresentationEnvironment:(id)a2;
- (id)snapshotContext;
- (id)_presenterWithIdentifier:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)modifyDefaultPresentationContext:(id /* block */)a0;
- (long long)_defaultPresentationPriority;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)createPresenterForLayerTarget:(id)a0 identifier:(id)a1;
- (id)createPresenterWithIdentifier:(id)a0 priority:(long long)a1;
- (void).cxx_destruct;
- (id)_initWithScene:(id)a0;
- (void)ownerDidInvalidateLastPresenter:(id)a0;
- (id)createPresenterForLayerTarget:(id)a0 identifier:(id)a1 priority:(long long)a2;
- (id)succinctDescription;
- (id)snapshotPresentationForSnapshot:(id)a0;
- (void)sceneContentStateDidChange:(id)a0;
- (id)createPresenterWithIdentifier:(id)a0;
- (BOOL)_hasPresenterWithIdentifier:(id)a0;
- (void)owner:(id)a0 willPrioritizePresenter:(id)a1 deactivatePresenter:(id)a2;

@end
