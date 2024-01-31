@protocol STRestrictionsDataSourceProtocol;

@interface STRestrictionsToPresetMappingViewModel : NSObject <ScreenTimeSettingsUI.STRestrictionsToPresetMappingViewModelProtocol>

@property (retain) id<STRestrictionsDataSourceProtocol> restrictionsDataSource;

+ (id)boolPresetKeys;
+ (id)presetKeys;

- (void).cxx_destruct;
- (id)initWithRestrictionsDataSource:(id)a0;
- (id)_presetForValuesByRestriction:(id)a0;
- (id)_restrictionsWithValuesByRestriction:(id)a0 presetKeys:(id)a1;
- (void)loadPresetMatchingCurrentRestrictionsWithCompletionHandler:(id /* block */)a0;

@end
