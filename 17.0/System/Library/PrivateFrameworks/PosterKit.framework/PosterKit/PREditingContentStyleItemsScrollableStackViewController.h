@class UIScrollView, UIStackView;

@interface PREditingContentStyleItemsScrollableStackViewController : PREditingContentStyleItemsViewController

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) BOOL needsScrollToSelectedItem;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (double)estimatedHeight;
- (void)layoutWithItemViews:(id)a0;
- (void)scrollToSelectedItemAnimated:(BOOL)a0;
- (void)updateInteritemSpacingIfNeeded;

@end
