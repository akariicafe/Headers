@interface SwiftUI.HostingScrollView : UIKitScrollViewBase <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ viewType;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ responder;
    void /* unknown type, empty encoding */ layoutDirection;
    void /* unknown type, empty encoding */ onScrollToTopGesture;
    void /* unknown type, empty encoding */ descendantScrollableAxes;
    void /* unknown type, empty encoding */ helper;
    void /* unknown type, empty encoding */ pendingContext;
    void /* unknown type, empty encoding */ lastAdjustedContentInsets;
    void /* unknown type, empty encoding */ animationTarget;
    void /* unknown type, empty encoding */ animationOffset;
    void /* unknown type, empty encoding */ safeAreaTransitionState;
    void /* unknown type, empty encoding */ configuration;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, readonly) BOOL _shouldScrollToContentBeginningInRightToLeft;

+ (BOOL)_isFromSwiftUI;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_focusScrollBoundaryMetricsForItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;

@end
