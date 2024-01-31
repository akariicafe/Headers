@class WFEditorDrawerHostingViewController, WFActionDrawerResultsController, NSString, WFEditorDrawerScrollViewDelegate;
@protocol WFActionDrawerDelegate;

@interface WFEditorDrawerViewController : UIViewController <WFActionDrawerScrollViewObserver>

@property (readonly, nonatomic) WFEditorDrawerHostingViewController *hostingViewController;
@property (readonly, nonatomic) WFEditorDrawerScrollViewDelegate *scrollViewDelegate;
@property (readonly, nonatomic) WFActionDrawerResultsController *resultsController;
@property (weak, nonatomic) id<WFActionDrawerDelegate> delegate;
@property (nonatomic) unsigned long long navigationStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void).cxx_destruct;
- (id)contentScrollViewForEdge:(unsigned long long)a0;
- (void)clearSearchBar;
- (void)didTransitionToVisibility:(unsigned long long)a0;
- (void)focusSearchBar;
- (id)initWithResultsController:(id)a0;
- (void)performScrollingTest:(id)a0;
- (void)activeScrollViewDidChange;

@end
