@class NSString, SBFDeviceLockOutController, NSHashTable;
@protocol BSInvalidatable;

@interface SBLiquidDetectionUISceneController : SBSystemUISceneController <SBFLiquidDetectionBlockProvider> {
    id<BSInvalidatable> _suppressSystemGestures;
    id<BSInvalidatable> _suppressSystemAperture;
    id<BSInvalidatable> _disableIdleTimer;
    BOOL _presenting;
    NSHashTable *_observers;
    SBFDeviceLockOutController *_lockOutController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_setupInfo;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addLiquidDetectionObserver:(id)a0;
- (BOOL)isLiquidDetectionBlocked;
- (void)removeLiquidDetectionObserver:(id)a0;
- (void)scenePresenter:(id)a0 didPresentScene:(id)a1;
- (id)initWithSceneWorkspaceIdentifier:(id)a0 clientProcessIdentity:(id)a1 sceneVendingPolicy:(long long)a2 traitsRole:(id)a3 jobLabel:(id)a4 level:(double)a5;
- (void)scenePresenter:(id)a0 willDismissScene:(id)a1;
- (void)setDefaultPresenter:(id)a0;

@end
