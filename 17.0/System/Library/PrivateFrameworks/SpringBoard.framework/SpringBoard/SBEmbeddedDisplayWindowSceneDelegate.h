@class SBTraitsEmbeddedDisplayPipelineManager, SBProductivityGestureController, SBTraitsWindowParticipantDelegate;

@interface SBEmbeddedDisplayWindowSceneDelegate : SBAbstractWindowSceneDelegate {
    SBTraitsWindowParticipantDelegate *_traitsWindowParticipantsDelegate;
    SBTraitsEmbeddedDisplayPipelineManager *_traitsEmbeddedPipelineManager;
    SBProductivityGestureController *_productivityGestureController;
}

+ (id)_individuallyManagedRoles;
+ (id)_windowWillBecomeHiddenExemptRoles;

- (id)init;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (BOOL)_shouldHandleWindowWillBecomeHiddenForRole:(id)a0;
- (BOOL)_shouldManageParticipantWithRole:(id)a0;
- (id)_pipelineManager;
- (id)_traitsDelegateForWindowRole:(id)a0;
- (void)initializeProductivityGestureControllerIfNecessary;
- (void).cxx_destruct;
- (void)_configureForConnectingWindowScene:(id)a0 windowSceneContext:(id)a1;

@end
