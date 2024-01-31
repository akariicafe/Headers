@class UIWindowScene, NSString, SBTraitsSceneParticipantDelegate, FBSDisplayConfiguration, NSMutableDictionary, NSNumber, NSMutableArray;
@protocol SBSystemUISceneBindingProviding, SBScenePresentingDelegate;

@interface SBSystemUISceneDefaultPresenter : NSObject <SBScenePresenting, BSDescriptionProviding> {
    NSMutableArray *_presentedScenes;
    SBTraitsSceneParticipantDelegate *_currentParticipantDelegate;
    id<SBScenePresentingDelegate> _presentingDelegate;
    NSMutableDictionary *_sceneToWindowMap;
    NSMutableDictionary *_sceneToPresentationBinderMap;
    NSMutableDictionary *_displayConfigurationToPresentationBinderMap;
}

@property (readonly, weak, nonatomic) UIWindowScene *targetWindowScene;
@property (readonly, weak, nonatomic) FBSDisplayConfiguration *targetDisplayConfiguration;
@property (readonly, weak, nonatomic) id<SBSystemUISceneBindingProviding> bindingProvider;
@property (copy, nonatomic) NSNumber *preferredWindowLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPresentingDelegate:(id)a0;
- (id)init;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)_initWithPresentationBinderProvider:(id)a0 targetDisplayConfiguration:(id)a1;
- (void)_addSceneToPresentationBinder:(id)a0;
- (void)_invalidatePresentationBinderForDisplayConfiguration:(id)a0;
- (id)_presentationBinderForDisplayConfiguration:(id)a0;
- (void)_removeSceneFromPresentationBinder:(id)a0;
- (id)dismissScene:(id)a0;
- (id)hostingBinderForScene:(id)a0;
- (id)hostingWindowForScene:(id)a0;
- (id)initWithPresentationBinderProvider:(id)a0;
- (id)initWithPresentationBinderProvider:(id)a0 targetDisplayConfiguration:(id)a1;
- (id)initWithTargetDisplayConfiguration:(id)a0;
- (id)initWithWindowHostingPresentationOnWindowScene:(id)a0;
- (id)presentScene:(id)a0 viewControllerBuilderBlock:(id /* block */)a1;
- (void)scene:(id)a0 didChangeTraitsParticipantDelegate:(id)a1;
- (void)scene:(id)a0 hasVisibleContent:(BOOL)a1;
- (void)sceneDidChangeDisplayIdentity:(id)a0;

@end
