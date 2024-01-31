@class PSUIDataUsageCategorySpecifier, PSSpecifier;

@interface PSUIDataUsageCategoryListController : PSListController

@property (retain, nonatomic) PSSpecifier *spinnerSpecifier;
@property (retain, nonatomic) PSUIDataUsageCategorySpecifier *parentSpecifier;

- (BOOL)shouldReloadSpecifiersOnResume;
- (id)init;
- (id)specifiers;
- (void).cxx_destruct;
- (BOOL)shouldShowSpinner;

@end
