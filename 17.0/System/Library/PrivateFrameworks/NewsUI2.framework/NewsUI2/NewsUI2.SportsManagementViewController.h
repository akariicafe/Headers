@interface NewsUI2.SportsManagementViewController : UIViewController <UITableViewDelegate, UISearchBarDelegate> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ searchController;
    void /* unknown type, empty encoding */ searchBar;
    void /* unknown type, empty encoding */ selectionProvider;
    void /* unknown type, empty encoding */ overscrollView;
}

- (void)searchBarCancelButtonClicked:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)viewDidLoad;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (void)dismissVC;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
