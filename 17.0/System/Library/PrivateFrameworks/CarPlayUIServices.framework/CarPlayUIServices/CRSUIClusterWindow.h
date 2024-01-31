@class CRSUIInstrumentClusterSettingsDiffInspector, NSString, CARObserverHashTable;

@interface CRSUIClusterWindow : CRSUIWindow <CRSUIClusterZoomActionDelegate, _UISceneSettingsDiffAction>

@property (retain, nonatomic) CARObserverHashTable *observers;
@property (retain, nonatomic) CRSUIInstrumentClusterSettingsDiffInspector *clusterSettingsDiffInspector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)itemType;
- (void)commonInit;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (void).cxx_destruct;
- (id)_clusterSettings;
- (void)addClusterSettingsObserver:(id)a0;
- (unsigned long long)compassSetting;
- (unsigned long long)etaSetting;
- (void)handleZoomInDirection:(long long)a0;
- (unsigned long long)layoutJustification;
- (void)removeClusterSettingsObserver:(id)a0;
- (unsigned long long)speedLimitSetting;

@end
