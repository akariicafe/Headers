@class STRegionRatings, NSObject;
@protocol STContentPrivacyViewModelCoordinator;

@interface STContentPrivacyMediaRestrictionsDetailController : PSListController

@property (retain) STRegionRatings *regionRatings;
@property (retain, nonatomic) NSObject<STContentPrivacyViewModelCoordinator> *coordinator;

- (void)dealloc;
- (id)specifiers;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_getSpecifierValueForItem:(id)a0 viewModel:(id)a1 restrictionValues:(id)a2;
- (id)defaultLinkListSpecifierWithConfiguration:(id)a0 key:(id)a1;
- (id)defaultLinkListSpecifierWithConfiguration:(id)a0 key:(id)a1 titlesByValue:(id)a2 sortByTitle:(BOOL)a3;
- (id)defaultLinkListSpecifierWithItem:(id)a0 titlesByValue:(id)a1 sortByTitle:(BOOL)a2;
- (id)defaultSwitchSpecifierWithConfiguration:(id)a0 key:(id)a1;
- (id)getItemSpecifierValue:(id)a0;
- (id)initWithRegionRatings:(id)a0;
- (id)radioGroupSpecifierWithName:(id)a0 footerText:(id)a1 item:(id)a2;
- (void)setItemSpecifierValue:(id)a0 specifier:(id)a1;
- (void)showWebFilterRestrictions:(id)a0;

@end
