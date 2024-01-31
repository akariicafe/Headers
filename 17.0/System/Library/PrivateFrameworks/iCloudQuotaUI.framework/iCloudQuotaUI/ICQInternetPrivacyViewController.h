@class ICQInternetPrivacyDetailSpecifierProvider, ICQInternetPrivacyViewModel, NSString;
@protocol ICQInternetPrivacyDelegate;

@interface ICQInternetPrivacyViewController : PSListController <AAUISpecifierProviderDelegate, ICQInternetPrivacyDetailDelegate>

@property (retain, nonatomic) ICQInternetPrivacyDetailSpecifierProvider *detailSpecifierProvider;
@property (retain, nonatomic) ICQInternetPrivacyViewModel *viewModel;
@property (weak, nonatomic) id<ICQInternetPrivacyDelegate> specifierDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)specifierProvider:(id)a0 willBeginLoadingSpecifier:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)specifierProvider:(id)a0 showViewController:(id)a1;
- (id)specifiers;
- (BOOL)isEnabled;
- (void)reloadSpecifiersForProvider:(id)a0 oldSpecifiers:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)specifierProvider:(id)a0 didFinishLoadingSpecifier:(id)a1;
- (void)showAlert:(id)a0;
- (void)statusDidChange;
- (void)_setupNavigationBar;
- (void)insertSpecifier:(id)a0 afterSpecifierNamed:(id)a1 animated:(BOOL)a2;
- (void)reloadSpecifierForProvider:(id)a0 identifier:(id)a1;
- (id)initWithViewModel:(id)a0 accountManager:(id)a1;
- (void)presentIncompatibleSitesHelp;
- (void)presentLearnMoreFrom:(id)a0;
- (void)presentSystemStatus;

@end
