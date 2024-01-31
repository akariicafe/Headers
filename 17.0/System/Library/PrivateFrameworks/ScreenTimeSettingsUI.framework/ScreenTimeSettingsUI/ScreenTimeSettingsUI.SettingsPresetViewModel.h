@interface ScreenTimeSettingsUI.SettingsPresetViewModel : NSObject {
    void /* unknown type, empty encoding */ dsid;
    void /* unknown type, empty encoding */ childAge;
    void /* unknown type, empty encoding */ restrictionsToPresetMappingViewModel;
    void /* unknown type, empty encoding */ restrictionsDataSource;
    void /* unknown type, empty encoding */ agePresetsAnalytics;
    void /* unknown type, empty encoding */ isInitialSetup;
    void /* unknown type, empty encoding */ _availablePresets;
    void /* unknown type, empty encoding */ _ratings;
    void /* unknown type, empty encoding */ _selectedPresetIndex;
    void /* unknown type, empty encoding */ _restrictions;
    void /* unknown type, empty encoding */ _showLoadingIndicator;
}

- (id)init;
- (void)loadWithCompletionHandler:(void (^)(void))a0;
- (void).cxx_destruct;
- (id)initWithDsid:(id)a0 childAge:(id)a1 isInitialSetup:(BOOL)a2 restrictionsToPresetMappingViewModel:(id)a3 restrictionsDataSource:(id)a4 agePresetsAnalytics:(id)a5;

@end
