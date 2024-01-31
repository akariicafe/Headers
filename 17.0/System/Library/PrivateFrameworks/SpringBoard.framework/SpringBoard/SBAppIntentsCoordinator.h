@class NSString, NSArray, SBFlashlightActivityManager, SBINAppIntentsCoordinator, SBCameraActivationManager, NSDictionary, SBRingerControl, SBFocusActivityManager;

@interface SBAppIntentsCoordinator : NSObject <SBINAppIntentsCoordinatorDelegate, SBSystemActionPreviewProviding, SBSystemActionDataSourceOverriding> {
    NSArray *_allPreviewingActionIdentifiers;
    NSDictionary *_systemImageNamesForDefaultPreviewsForActionIdentifiers;
    SBINAppIntentsCoordinator *_clientCoordinator;
    SBCameraActivationManager *_cameraActivationManager;
    SBFlashlightActivityManager *_flashlightActivityManager;
    SBFocusActivityManager *_focusActivityManager;
    SBRingerControl *_ringerControl;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)appIntentsCoordinator:(id)a0 performAppIntent:(id)a1 withCompletion:(id /* block */)a2;
- (id)showPreviewForAction:(id)a0 withContext:(id)a1;
- (id)soundForPerformingActionWithIdentifier:(id)a0;
- (id)systemActionDataSource:(id)a0 overrideActionForAction:(id)a1;
- (id)systemImageNameForDefaultPreviewForActionWithIdentifier:(id)a0;
- (BOOL)wantsPreviewForActionWithIdentifier:(id)a0;

@end
