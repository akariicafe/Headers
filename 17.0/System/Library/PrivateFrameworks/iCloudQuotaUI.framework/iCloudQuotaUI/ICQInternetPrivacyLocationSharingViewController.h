@class NSString, ICQInternetPrivacyViewModel, ICQInternetPrivacyLocationSharingSpecifierProvider;

@interface ICQInternetPrivacyLocationSharingViewController : PSListController <AAUISpecifierProviderDelegate>

@property (retain, nonatomic) ICQInternetPrivacyLocationSharingSpecifierProvider *specifierProvider;
@property (retain, nonatomic) ICQInternetPrivacyViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)specifierProvider:(id)a0 willBeginLoadingSpecifier:(id)a1;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)specifierProvider:(id)a0 showViewController:(id)a1;
- (id)specifiers;
- (void)reloadSpecifiersForProvider:(id)a0 oldSpecifiers:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)specifierProvider:(id)a0 didFinishLoadingSpecifier:(id)a1;
- (void)_setupNavigationBar;

@end
