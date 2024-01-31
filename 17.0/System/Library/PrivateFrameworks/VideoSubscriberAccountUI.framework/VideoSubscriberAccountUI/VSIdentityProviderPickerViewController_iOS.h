@class NSString, VSIdentityProviderTableViewDataSource, VSIdentityProvider, VSOnboardingInfoCenter, UISearchController, VSIdentityProviderFilter, NSDictionary, NSArray, VSSearchBarDelegate, VSFontCenter, VSStorefrontFilter, UITableViewHeaderFooterView;
@protocol VSIdentityProviderPickerViewControllerDelegate;

@interface VSIdentityProviderPickerViewController_iOS : UITableViewController <VSIdentityProviderPickerViewController>

@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) VSOnboardingInfoCenter *onboardingInfoCenter;
@property (retain, nonatomic) VSIdentityProviderFilter *filter;
@property (retain, nonatomic) VSSearchBarDelegate *searchBarDelegate;
@property (retain, nonatomic) VSIdentityProviderTableViewDataSource *unfilteredDataSource;
@property (retain, nonatomic) VSIdentityProviderTableViewDataSource *filteredDataSource;
@property (retain, nonatomic) VSFontCenter *fontCenter;
@property (retain, nonatomic) VSIdentityProvider *selectedIdentityProvider;
@property (nonatomic) BOOL sectionContentInsetInitialized;
@property (retain, nonatomic) NSDictionary *providersByStorefrontCountryCode;
@property (retain, nonatomic) NSArray *tvProviderSupportedStorefronts;
@property (retain, nonatomic) NSArray *identityProvidersToDisplay;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) VSStorefrontFilter *storefrontFilter;
@property (retain, nonatomic) UITableViewHeaderFooterView *firstSectionHeaderView;
@property (weak, nonatomic) id<VSIdentityProviderPickerViewControllerDelegate> delegate;
@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed;
@property (copy, nonatomic) NSArray *identityProviders;
@property (nonatomic) unsigned long long additionalProvidersMode;
@property (copy, nonatomic) NSString *requestingAppDisplayName;
@property (copy, nonatomic) NSString *resourceTitle;
@property (copy, nonatomic) NSString *requestedStorefrontCountryCode;
@property (copy, nonatomic) NSArray *allStorefronts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)init;
- (void)setSectionContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithStyle:(long long)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)setLayoutMarginsFollowReadableWidth:(BOOL)a0;
- (void)tableViewDidFinishReload:(id)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void)_cancelButtonPressed:(id)a0;
- (void)_updateSectionContentInsetWithAnimation:(BOOL)a0;
- (void)_showPrivacySheet:(id)a0;
- (id)_createTableHeaderContentConfiguration:(id)a0;
- (void)_didPickAdditionalIdentityProviders;
- (void)_didPickIdentityProvider:(id)a0;
- (void)_didPickStorefront:(id)a0;
- (void)_dismissSearchController;
- (void)_performSelectionForIdentityProvider:(id)a0;
- (BOOL)_shouldInsetListView;
- (void)_showAboutPrivacy:(id)a0;
- (id)_titleForTableHeaderView;
- (id)_titleForViewController;
- (void)_updateTableHeaderTitle;
- (void)deselectSelectedProviderAnimated:(BOOL)a0;
- (id)filteredTableView;
- (void)resizeFooterViewIfNeeded;
- (void)setRequestedStorefrontCountryCode:(id)a0 defaultToDeveloperProviders:(BOOL)a1;
- (id)titleForTableFooterView;

@end
