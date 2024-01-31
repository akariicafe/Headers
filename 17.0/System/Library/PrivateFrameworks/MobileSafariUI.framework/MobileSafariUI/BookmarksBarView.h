@class UIView, NSString, NSArray, SFUnifiedBarTheme, WebBookmark, SFUnifiedBarMetrics, UIButton, NSMutableArray, BookmarksNavigationController, UIColor;
@protocol _SFNavigationIntentHandling, TabGroupProvider, BookmarksBarViewDelegate, LinkPreviewProvider;

@interface BookmarksBarView : UIView <BookmarksBarLabelButtonDelegate, BookmarksNavigationControllerDelegate, UIPopoverPresentationControllerDelegate, _SFNavigationIntentHandling, SFUnifiedBarContentView> {
    NSMutableArray *_bookmarkBarLabels;
    BOOL _needsReloadBookmarkLabels;
    UIView *_separator;
    int _bookmarkBarID;
    UIButton *_moreBookmarksButton;
    WebBookmark *_moreBookmarksParent;
    unsigned int _moreBookmarksOffset;
    int _defaultProfileRootBookmarkID;
    UIButton *_buttonUsedToShowNavigationController;
    BOOL _isShowingNavigationController;
    BookmarksNavigationController *_bookmarksNavigationController;
}

@property (weak, nonatomic) id<BookmarksBarViewDelegate> delegate;
@property (weak, nonatomic) id<LinkPreviewProvider> linkPreviewProvider;
@property (weak, nonatomic) id<_SFNavigationIntentHandling> navigationIntentHandler;
@property (nonatomic) BOOL showsSeparator;
@property (retain, nonatomic) UIColor *themeColor;
@property (nonatomic) BOOL showsIcons;
@property (readonly, nonatomic) WebBookmark *currentRootBookmark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<TabGroupProvider> tabGroupProvider;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;
@property (nonatomic) double barBackgroundAlpha;
@property (readonly, nonatomic) SFUnifiedBarMetrics *barMetrics;
@property (retain, nonatomic) SFUnifiedBarTheme *barTheme;
@property (readonly, nonatomic, getter=isContentHidden) BOOL contentHidden;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (nonatomic) struct CGPoint { double x0; double x1; } midpointForCenteredContent;
@property (nonatomic) BOOL pinsScrollPositionToTrailingEdgeDuringResize;
@property (readonly, nonatomic) double preferredTopSpacing;
@property (readonly, nonatomic) double preferredBottomSpacing;
@property (readonly, nonatomic) BOOL showsSquishedContent;
@property (readonly, nonatomic) double preferredSquishedBottomSpacing;
@property (readonly, nonatomic) double topSquishedSpacingAdjustment;
@property (nonatomic) unsigned long long sizeClass;
@property (nonatomic) double squishTransformFactor;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } squishedContentInset;
@property (readonly, nonatomic) NSArray *squishedAccessoryViews;
@property (nonatomic) BOOL showsSquishedAccessoryViews;
@property (nonatomic) double themeColorVisibility;
@property (readonly, nonatomic) BOOL isCurrentlyScrollable;

- (void)dispatchNavigationIntent:(id)a0;
- (void)handleNavigationIntent:(id)a0 completion:(id /* block */)a1;
- (void)bookmarksNavigationControllerViewDidAppear:(id)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)popoverPresentationController:(id)a0 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(inout id *)a2;
- (void)bookmarksNavigationControllerViewDidDisappear:(id)a0;
- (void).cxx_destruct;
- (void)bookmarksNavigationControllerReloadDidFail:(id)a0;
- (void)_buttonTapped:(id)a0;
- (void)layoutSubviews;
- (void)_receivedBookmarksChangedNotification:(id)a0;
- (void)bookmarksBarLabelButtonDidSelectOpenInNewTab:(id)a0;
- (void)bookmarksNavigationControllerDidReload:(id)a0;
- (id)containingBookmarkForNavigationController:(id)a0;
- (void)setNeedsReloadData;

@end
