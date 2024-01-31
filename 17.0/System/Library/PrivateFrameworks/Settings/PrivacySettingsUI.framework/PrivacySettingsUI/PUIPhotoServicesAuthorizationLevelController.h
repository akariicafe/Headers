@class NSString, NSDictionary, NSBundle, NSArray, PSSpecifier;

@interface PUIPhotoServicesAuthorizationLevelController : PSListItemsController {
    NSArray *_limitedLibrarySectionSpecifiers;
    NSArray *_pickerUsageSectionSpecifiers;
    PSSpecifier *_limitedLibraryRowSpecifier;
}

@property (copy, nonatomic) NSString *serviceKey;
@property (retain, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSBundle *entityBundle;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)specifiers;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)_addLimitedLibrarySection;
- (void)_addPickerUsageSectionIfNeeded;
- (unsigned long long)_currentTCCAuthorizationRight;
- (void)_handleUpgradePromptNotification:(id)a0;
- (id)_limitedLibrarySectionSpecifiers;
- (id)_locationSetting:(id)a0;
- (id)_parentTCCSpecifiers;
- (id)_pickerUsageSectionSpecifiers;
- (void)_presentImagePickerForModifyingSelection;
- (void)_removeLimitedLibrarySectionIfPresent;
- (void)_removePickerUsageSectionIfPresent;
- (id)footerStringForSpecifiers:(id)a0;

@end
