@interface ScreenTimeSettingsUI.STIntroPresetsViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ continueHandler;
    void /* unknown type, empty encoding */ introductionModel;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ updateExistingSettings;
    void /* unknown type, empty encoding */ settingsPresetViewModel;
    void /* unknown type, empty encoding */ restrictionsToPresetMappingViewModel;
    void /* unknown type, empty encoding */ presetsVC;
}

- (void)continue;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (id)initWithIntroductionModel:(id)a0 settingsPresetViewModel:(id)a1 name:(id)a2 updateExistingSettings:(BOOL)a3 onContinue:(id /* block */)a4;

@end
