@class PSSpecifier;

@interface AUDeveloperSettingsOverrideController : PSListController {
    PSSpecifier *_locationRadioGroup;
    PSSpecifier *_customerSpecifier;
    PSSpecifier *_publicSeedSpecifier;
    PSSpecifier *_customerStagingSpecifier;
    PSSpecifier *_descriptionSpecifier;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (void)updateDescriptionForSpecifier:(id)a0;

@end
