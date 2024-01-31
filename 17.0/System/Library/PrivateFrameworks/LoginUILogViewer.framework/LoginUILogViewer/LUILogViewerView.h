@class UIStackView, UILabel, UIView, UISearchBar, UIButton;
@protocol LUILogViewerViewDelegate;

@interface LUILogViewerView : UIView

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *contentHolderView;
@property (retain, nonatomic) UIView *filterView;
@property (retain, nonatomic) UIButton *logButton;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UIStackView *buttonStack;
@property (retain, nonatomic) UIButton *filterButton;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (retain, nonatomic) UILabel *searchResultLabel;
@property (retain, nonatomic) UIButton *leftCaretButton;
@property (retain, nonatomic) UIButton *rightCaretButton;
@property (weak, nonatomic) id<LUILogViewerViewDelegate> delegate;

- (void)_setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)closeButtonTapped:(id)a0;
- (id)_createCloseButton;
- (id)_createButtonWithTitle:(id)a0 action:(SEL)a1;
- (id)_createClearButton;
- (id)_createFilterButton;
- (id)_createLeftCaretButton;
- (id)_createLogButton;
- (id)_createRightCaretButton;
- (id)_createSearchBar;
- (id)_createSearchResultLabel;
- (void)_highlightButton:(id)a0 highlight:(BOOL)a1;
- (void)clearButtonTapped:(id)a0;
- (void)filterButtonTapped:(id)a0;
- (void)highlightFilterButton:(BOOL)a0;
- (void)highlightLogButton:(BOOL)a0;
- (void)leftCaretButtonTapped:(id)a0;
- (void)logButtonTapped:(id)a0;
- (void)resetSearchResultLabel;
- (void)rightCaretButtonTapped:(id)a0;
- (void)switchClearButtonTitle:(BOOL)a0;
- (void)updateSearchResultLabelWithTotalResult:(unsigned long long)a0 currentIndex:(unsigned long long)a1;

@end
