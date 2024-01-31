@class SearchUIRowModel, NSArray, SearchUIDragSource, NSString, UIView;
@protocol SearchUIFeedbackDelegateInternal;

@interface SearchUITableViewCell : UITableViewCell <SearchUIBackgroundColorViewProtocol, SearchUIKeyboardableNavigationProtocol>

@property (retain, nonatomic) SearchUIRowModel *rowModel;
@property (retain, nonatomic) UIView *platterView;
@property (nonatomic) BOOL isExpanded;
@property (weak, nonatomic) id<SearchUIFeedbackDelegateInternal> delegate;
@property (retain, nonatomic) UIView *sizingContainer;
@property (retain, nonatomic) SearchUIDragSource *dragSource;
@property (readonly) NSArray *visibleResults;
@property (readonly, nonatomic) UIView *leadingView;
@property (readonly, nonatomic) UIView *leadingTextView;
@property (nonatomic) int sfSeparatorStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } customEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifierForResult:(id)a0;
+ (BOOL)canCellExpandWithResults:(id)a0;
+ (id)cellViewForRowModel:(id)a0 feedbackDelegate:(id)a1;
+ (double)distanceToTopOfAppIconsForMultiResultCell;

- (void)tlk_updateForAppearance:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (id)init;
- (void)willMoveToWindow:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)returnKeyPressed;
- (id)viewContainingContent;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)isExpandable;
- (void)didMoveToWindow;
- (void)updateWithResult:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setAnimating:(BOOL)a0 clippingAdjacentCells:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_customInsetSize;
- (void)updateExpanded:(BOOL)a0;
- (BOOL)canSetupKeyboardHandler;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (id)keyboardCardSectionForFocus;
- (id)keyboardResultForFocus;
- (BOOL)navigateKeyboardDown;
- (BOOL)navigateKeyboardLeft;
- (BOOL)navigateKeyboardRight;
- (BOOL)navigateKeyboardUp;
- (void)removeKeyboardHandler;
- (void)setupKeyboardHandler;
- (BOOL)supportsRecycling;
- (void)tabKeyPressed;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (void)updateWithResults:(id)a0;

@end
