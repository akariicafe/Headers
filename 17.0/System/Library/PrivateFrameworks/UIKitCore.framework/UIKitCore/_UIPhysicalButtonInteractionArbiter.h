@class NSHashTable, NSString, CADisplayLink, NSMapTable, _UIViewServiceSessionActivityRecord, _UIPhysicalButtonInteraction, _UIEvaluatedObjectCache, NSCountedSet, NSMutableArray, _UIPhysicalButtonConfigurationResolutionContext, UIScene;
@protocol _UIPhysicalButtonInteractionArbiterSystemShellDelegate, BSInvalidatable;

@interface _UIPhysicalButtonInteractionArbiter : NSObject <_UIWindowLevelObserver, _UIWindowHostingSceneComponentProviding, BSDebugDescriptionProviding> {
    id /* block */ _viewServiceValidationBlock;
    id /* block */ _interactionValidationBlock;
    NSMutableArray *_uniqueConfigurationGenerationNumbers;
    id<BSInvalidatable> _stateCaptureToken;
    struct { unsigned char hasScheduledDeferredConfigurationResolution : 1; unsigned char hasScheduledDeferredConfigurationResolutionForReentrancy : 1; unsigned char configurationResolutionPaused : 1; unsigned char needsConfigurationResolutionWhenResumed : 1; unsigned char systemShellRequestedConfigurationResolution : 1; } _arbiterFlags;
    unsigned long long _resolutionStrategy;
    _UIEvaluatedObjectCache *_registeredAndSortedInteractions;
    NSCountedSet *_windowPointersObservedForLevelChanges;
    CADisplayLink *_deferredConfigurationResolutionDisplayLink;
    _UIPhysicalButtonConfigurationResolutionContext *_sceneConfigurationResolutionContext;
    NSHashTable *_systemShellWindowsRequiringResolution;
    NSMapTable *_systemShellWindowConfigurationResolutionContexts;
    _UIViewServiceSessionActivityRecord *_mostActiveViewServiceSession;
    NSHashTable *_viewServiceObservers;
    _UIPhysicalButtonInteraction *_topEvaluatedInteraction;
}

@property (weak, nonatomic) id<_UIPhysicalButtonInteractionArbiterSystemShellDelegate> systemShellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;

- (void)_sceneWillInvalidate:(id)a0;
- (id)init;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (id)initWithScene:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_actionRespondersForScene:(id)a0;
- (void).cxx_destruct;
- (void)window:(id)a0 changedFromLevel:(double)a1 toLevel:(double)a2;
- (void)_windowHostingScene:(id)a0 willMoveFromScreen:(id)a1 toScreen:(id)a2;
- (id)succinctDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (void)_deferredResolutionDisplayLinkTicked:(id)a0;
- (void)_mostActiveViewServiceSessionDidChange:(id)a0;
- (void)_windowVisibilityDidChange:(id)a0;
- (id)configurationResolutionContextForSystemShellWindow:(id)a0;
- (void)setNeedsResolutionOfPhysicalButtonConfigurationsForSystemShellDelegate:(id)a0;

@end
