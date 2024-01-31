@class NSString, UIKBArbiterClientFocusContext, TRAArbiter, TRAArbitrationInputs, SBMedusa1oSettings;
@protocol SBWindowSceneDelegate;

@interface SBTraitsPipelineManager : NSObject <TRAArbiterStagesRolesProvider, TRAArbiterDrawingDataSource, TRAArbiterInputsDataSource> {
    SBMedusa1oSettings *_medusaSettings;
}

@property (weak, nonatomic) TRAArbiter *arbiter;
@property (weak, nonatomic) id<SBWindowSceneDelegate> sceneDelegate;
@property (retain, nonatomic) UIKBArbiterClientFocusContext *keyboardFocusContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TRAArbitrationInputs *inputs;

- (id)defaultOrientationAnimationSettingsAnimatable:(BOOL)a0;
- (id)init;
- (void)userInterfaceStyleDidUpdateWithAnimationSettings:(id)a0 fence:(id)a1;
- (id)ambientPresentationStageRoles;
- (void)setupDefaultPipelineForArbiter:(id)a0;
- (void).cxx_destruct;
- (id)zOrderStageRoles;
- (id)initWithArbiter:(id)a0 sceneDelegate:(id)a1;
- (id)orientationStageRoles;
- (id)userInterfaceStyleStageRoles;
- (id)newBlockBasedOrientationPolicySpecifier:(id /* block */)a0 forParticipant:(id)a1;
- (id)newBlockBasedOrientationPolicySpecifier:(id /* block */)a0 forRole:(id)a1;

@end
