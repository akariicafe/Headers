@class UIScrollView;

@interface _TtC11NotesEditorP33_B1771FC5B77E2D60FA249C310C92C62226PaperDocumentContainerView : UIView <ICNestedScrollable, UIScrollViewDelegate, _UIScrollViewScrollObserver, UIGestureRecognizerDelegate, PKToolPickerObserver> {
    void /* unknown type, empty encoding */ textAttachmentView;
    void /* unknown type, empty encoding */ inlineView;
    void /* unknown type, empty encoding */ thumbnailView;
    void /* unknown type, empty encoding */ stickyHeaderEnabled;
    void /* unknown type, empty encoding */ showThumbnails;
    void /* unknown type, empty encoding */ headerContentView;
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ headerContainer;
    void /* unknown type, empty encoding */ scrollViewDelegateMultiplexer;
    void /* unknown type, empty encoding */ collapseThumbnailsConstraint;
    void /* unknown type, empty encoding */ stickyHeaderConstraint;
    void /* unknown type, empty encoding */ pushStickyHeaderAwayConstraint;
    void /* unknown type, empty encoding */ shadowView;
    void /* unknown type, empty encoding */ headerShadowOpacity;
    void /* unknown type, empty encoding */ didStartObservingTextView;
    void /* unknown type, empty encoding */ lastLayoutBounds;
    void /* unknown type, empty encoding */ doubleTapEater;
    void /* unknown type, empty encoding */ nestedScrollViewInteraction;
    void /* unknown type, empty encoding */ inLayoutSubviews;
}

@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) BOOL isZoomed;
@property (nonatomic, readonly) BOOL isLocked;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameInContainingScrollView;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } scrollBounds;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } adjustedContentInset;

- (void)_observeScrollViewDidScroll:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)scrollViewDidZoom:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)toolPickerVisibilityDidChange:(id)a0;
- (void)updatePaletteVisibility;
- (void)pdfViewMightHaveZoomed:(id)a0;
- (void)pdfViewSelectedPageThumbnail:(id)a0;

@end
