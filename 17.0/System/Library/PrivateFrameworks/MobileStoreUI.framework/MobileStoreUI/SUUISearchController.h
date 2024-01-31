@class UILabel, NSMutableString, SUUISearchBar;
@protocol SUUISearchControllerDelegate;

@interface SUUISearchController : UISearchController {
    UILabel *_suffixLabel;
    NSMutableString *_paddingString;
    SUUISearchBar *_searchBar;
}

@property (readonly, nonatomic) SUUISearchBar *searchBar;
@property (weak, nonatomic) id<SUUISearchControllerDelegate> delegate;

- (void)setActive:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_setSuffix:(id)a0;

@end
