@class UISearchController, NSString, NSArray;

@interface AXUISettingsSearchableBaseListController : AXUISettingsBaseListController <UISearchResultsUpdating, UISearchBarDelegate> {
    BOOL _needsSpecifierRefresh;
    NSString *_cachedSearchTextWhileDeactivating;
}

@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSArray *allSpecifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchBarTextDidEndEditing:(id)a0;
- (void)viewDidLoad;
- (id)specifiers;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void).cxx_destruct;
- (void)_loadAllSpecifiersIfNeeded;
- (BOOL)_specifierIsGroupSpecifier:(id)a0;
- (void)deactivateAndPersistSearchText;
- (id)makeSpecifiers;
- (void)setNeedsSpecifierRefresh;
- (BOOL)shouldShowSpecifier:(id)a0 withSearchText:(id)a1;

@end
