@class NSSet, NSArray, HFActionSetSuggestionFilter, HMActionSet, HMHome;

@interface HFActionSetSuggestionVendor : NSObject

@property (class, readonly, copy, nonatomic) NSSet *supportedBuiltInActionSetTypes;

@property (readonly, nonatomic) NSArray *services;
@property (readonly, nonatomic) HFActionSetSuggestionFilter *filter;
@property (readonly, nonatomic) HMActionSet *actionSet;
@property (readonly, nonatomic) HMHome *home;

- (id)init;
- (id)build;
- (void).cxx_destruct;
- (id)_actionBuildersForBuiltInActionSetWithType:(id)a0 outDependentServiceTypes:(out id *)a1;
- (id)_actionBuildersForCustomActionSet;
- (id)_actionBuildersForCustomActionSetWithService:(id)a0;
- (id)_actionBuildersToSetLightbulbBrightness:(double)a0;
- (id)_actionBuildersToSetLightbulbColorWithPaletteColor:(id)a0;
- (id)_actionBuildersToSetPowerState:(BOOL)a0 forServicesOfTypes:(id)a1;
- (id)_actionBuildersToSetTargetBlindsPositionOpen:(BOOL)a0;
- (id)_actionBuildersToSetTargetDoorState:(long long)a0 forServicesOfTypes:(id)a1;
- (id)_actionBuildersToSetTargetLockState:(long long)a0 forServicesOfTypes:(id)a1;
- (id)_actionBuildersToSetTargetSecuritySystemState:(long long)a0;
- (id)_controlItemValueSourceForService:(id)a0;
- (id)_deriveActionForPrimaryCharacteristic:(id)a0;
- (id)_deriveActionForPrimaryCharacteristic:(id)a0 candidateServices:(id)a1 targetThreshold:(double)a2;
- (id)_deriveActionForSecondaryCharacteristic:(id)a0 candidateServices:(id)a1;
- (id)buildWithOutDependentServiceTypes:(out id *)a0;
- (id)initWithHome:(id)a0 actionSet:(id)a1;
- (id)initWithHome:(id)a0 actionSet:(id)a1 filter:(id)a2;

@end
