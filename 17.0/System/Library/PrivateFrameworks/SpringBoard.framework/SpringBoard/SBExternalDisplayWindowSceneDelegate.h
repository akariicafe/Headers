@class FBSDisplayLayoutPublisher, SBWindowSceneStatusBarSettingsAssertion, SBTraitsExternalDisplayPipelineManager, SBTraitsWindowParticipantDelegate, SBExternalDisplayWallpaperController, FBApplicationUpdateScenesTransaction, SBExternalDisplayCoverSheetController;
@protocol BSDefaultObserver;

@interface SBExternalDisplayWindowSceneDelegate : SBAbstractWindowSceneDelegate {
    FBApplicationUpdateScenesTransaction *_transaction;
    SBTraitsWindowParticipantDelegate *_traitsWindowParticipantsDelegate;
    SBTraitsExternalDisplayPipelineManager *_traitsExternalPipelineManager;
    SBExternalDisplayWallpaperController *_wallpaperController;
    SBExternalDisplayCoverSheetController *_coverSheetController;
    SBWindowSceneStatusBarSettingsAssertion *_showStatusBarAssertion;
    id<BSDefaultObserver> _displayModeSettingsToken;
    FBSDisplayLayoutPublisher *_displayLayoutPublisher;
}

+ (id)_individuallyManagedRoles;

- (id)init;
- (void)sceneDidDisconnect:(id)a0;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (BOOL)_shouldManageParticipantWithRole:(id)a0;
- (id)_pipelineManager;
- (id)_traitsDelegateForWindowRole:(id)a0;
- (void).cxx_destruct;
- (void)_configureForConnectingWindowScene:(id)a0 windowSceneContext:(id)a1;

@end
