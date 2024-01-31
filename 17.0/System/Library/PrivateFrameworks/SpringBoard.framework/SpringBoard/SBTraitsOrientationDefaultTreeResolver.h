@class NSString, NSMutableDictionary, NSNumber, TRASettingsValidator;

@interface SBTraitsOrientationDefaultTreeResolver : SBTraitsOrientationStageComponent <TRAPreferencesStageResolving> {
    TRASettingsValidator *_settingsValidator;
    NSMutableDictionary *_mapResolverCache;
}

@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)_targetOrientationForResolutionInfo:(id)a0 validatedInputs:(id)a1 rawInputs:(id)a2 participant:(id)a3 parent:(id)a4;
- (id)_mapResolverForTargetOrientation:(long long)a0 currentOrientation:(long long)a1;
- (void)resolveStagePreferencesWithContext:(id)a0 preferencesTree:(id)a1;
- (id)initWithComponentOrder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_node:(id)a0 validatesNewSettings:(id)a1;

@end
