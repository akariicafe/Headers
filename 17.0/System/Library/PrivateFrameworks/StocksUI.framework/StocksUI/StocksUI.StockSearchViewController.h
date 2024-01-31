@class UISplitViewController;

@interface StocksUI.StockSearchViewController : UIViewController <UISearchControllerDelegate, UISearchBarDelegate, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ blueprintSelectionProvider;
    void /* unknown type, empty encoding */ searchAction;
    void /* unknown type, empty encoding */ userActivityManager;
    void /* unknown type, empty encoding */ keyboardInputMonitor;
    void /* unknown type, empty encoding */ commands;
    void /* unknown type, empty encoding */ stockSearchMode;
    void /* unknown type, empty encoding */ searchBar;
}

@property (nonatomic, readonly) UISplitViewController *splitViewController;

- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)didPresentSearchController:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
