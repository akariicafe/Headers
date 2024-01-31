@class PSTextFieldSpecifier, NSIndexPath, PSSpecifier;

@interface AUDeveloperSettingsLocationListController : PSListController {
    PSSpecifier *_locationRadioGroup;
    PSSpecifier *_basejumperSpecifier;
    PSSpecifier *_customBuildSpecifier;
    PSSpecifier *_customerSpecifier;
    PSSpecifier *_customerStagingSpecifier;
    PSSpecifier *_internalSeedSpecifier;
    PSSpecifier *_livabilitySpecifier;
    PSSpecifier *_publicSeedSpecifier;
    PSSpecifier *_customBasejumperBuildGroup;
    PSSpecifier *_customLivabilityBuildGroup;
    PSTextFieldSpecifier *_customTrainSpecifier;
    PSTextFieldSpecifier *_customBuildNumberSpecifier;
    BOOL _showingCustomBasejumperBuildSpecifiers;
    BOOL _showingCustomLivabilityBuildSpecifiers;
    NSIndexPath *_lastSelectedIndexPath;
    unsigned long long _defaultSpecifierListLength;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)specifiers;
- (id)trainName;
- (void).cxx_destruct;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void)setTrainName:(id)a0;
- (id)buildName;
- (void)setBuildName:(id)a0;
- (void)showCustomSpecifiersForSelectedSpecifier:(id)a0 show:(BOOL)a1 animated:(BOOL)a2;

@end
