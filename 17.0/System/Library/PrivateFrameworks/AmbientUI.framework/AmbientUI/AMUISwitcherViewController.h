@class BSCompoundAssertion, NSArray, NSString, BSUIScrollView, NSLayoutConstraint, NSMutableDictionary, _AMUISwitcherTransitionContext;
@protocol AMUISwitcherDelegate, AMUISwitcherLayout, AMUISwitcherDataSource;

@interface AMUISwitcherViewController : UIViewController <AMUISwitcherLayout, BSUIScrollViewDelegate> {
    BSUIScrollView *_scrollView;
    long long _lastScrollMethod;
    NSLayoutConstraint *_horizontalTrailingSpacerConstraint;
    NSLayoutConstraint *_verticalTrailingSpacerConstraint;
    BOOL _firstLayout;
    long long _topItemIndex;
    NSMutableDictionary *_visibleItems;
    NSMutableDictionary *_knownItems;
    _AMUISwitcherTransitionContext *_currentTransition;
    BSCompoundAssertion *_unsettledAssertions;
}

@property (weak, nonatomic) id<AMUISwitcherDataSource> dataSource;
@property (weak, nonatomic) id<AMUISwitcherDelegate> delegate;
@property (readonly, weak, nonatomic) id<AMUISwitcherLayout> layout;
@property (readonly, copy, nonatomic) NSArray *visibleIndices;
@property (readonly, copy, nonatomic) NSArray *visibleItems;
@property (readonly, nonatomic, getter=isScrollingInteractively) BOOL scrollingInteractively;
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (readonly, nonatomic) long long switcherAxis;
@property (readonly, nonatomic, getter=isCircular) BOOL circular;
@property (readonly, nonatomic) double spacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidScroll:(id)a0 withContext:(struct { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; })a1;
- (void)updateViewConstraints;
- (void)reload;
- (struct CGSize { double x0; double x1; })_pageSize;
- (void)scrollViewDidEndScrolling:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillMoveToWindow:(id)a0;
- (id)initWithLayout:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)scrollToItem:(id)a0 animated:(BOOL)a1;
- (long long)_indexOfItem:(id)a0;
- (void)reloadItemAtIndex:(long long)a0;
- (void)_noteTransitionProgressIfNeeded;
- (id)_switcherLayout;
- (id)_accessibilityIdentifierPrefix;
- (BOOL)_beginTransitionIfNeededFromRecord:(id)a0 toRecord:(id)a1;
- (void)_detachItemRecord:(id)a0;
- (BOOL)_endTransitionIfNeeded;
- (long long)_indexOfItemWithIdentifier:(id)a0;
- (void)_noteTransitionFrom:(id)a0 to:(id)a1 progress:(double)a2;
- (double)_presentationProgressForItemIndex:(long long)a0;
- (BOOL)_scrollToIndex:(long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_sendTransitionUpdate;
- (BOOL)_shouldAdjustForRTL;
- (void)_updateForUnsettled:(BOOL)a0;
- (void)_updateTrailingSpacerConstraints;
- (id)acquireUnsettledAssertionForReason:(id)a0;
- (double)presentationProgressForIdentifier:(id)a0;
- (double)presentationProgressForItem:(id)a0;
- (void)reloadItemWithIdentifier:(id)a0;
- (BOOL)scrollToIdentifier:(id)a0 animated:(BOOL)a1;
- (void)switcher:(id)a0 updateItem:(id)a1 view:(id)a2 forPresentationProgress:(double)a3;

@end
