@class PXTouchingUIGestureRecognizer, PXFeedContentLayout, PXFeedViewModel, UITapGestureRecognizer, PXFeedTitleLayout, PXGView, PXGSplitLayout, UIHoverGestureRecognizer, PXGViewCoordinator, NSString;
@protocol NSObject, PXGAXResponder, NSCopying;

@interface PXFeedView : UIView <UIGestureRecognizerDelegate, PXTouchingUIGestureRecognizerDelegate, PXGAXResponder, PXTapToRadarDiagnosticProvider>

@property (readonly, nonatomic) PXTouchingUIGestureRecognizer *touchingGestureRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) UIHoverGestureRecognizer *hoverGesture;
@property (readonly, nonatomic) PXGSplitLayout *splitLayout;
@property (readonly, nonatomic) PXFeedTitleLayout *titleLayout;
@property (readonly, nonatomic) PXFeedContentLayout *feedContentLayout;
@property (copy, nonatomic) id /* block */ currentTouchCompletion;
@property (copy, nonatomic) id /* block */ currentHoverCompletion;
@property (retain, nonatomic) id<NSObject, NSCopying> hoveredItemObjectID;
@property (readonly, nonatomic) PXFeedViewModel *viewModel;
@property (readonly, nonatomic) PXGView *tungstenView;
@property (readonly, nonatomic) PXGViewCoordinator *tungstenViewCoordinator;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXGAXResponder> axNextResponder;

- (id)itemPlacementControllerForItemReference:(id)a0;
- (void)_handleTap:(id)a0;
- (void)_handleChangeToModifySelectionWithUserInfo:(id)a0;
- (BOOL)handlePrimaryInteractionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)regionOfInterestForObjectReference:(id)a0;
- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (BOOL)axGroup:(id)a0 didRequestToPerformAction:(long long)a1 userInfo:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (id)axContainingScrollViewForAXGroup:(id)a0;
- (void).cxx_destruct;
- (void)_handleHover:(id)a0;
- (void)_handleTouch:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_handleHoverEventAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_installGestureRecognizers;
- (void)beginTouchingAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)endTouching;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathClosestToIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 inDirection:(unsigned long long)a1;
- (void)scrollObjectReference:(id)a0 toScrollPosition:(unsigned long long)a1;
- (void)touchingUIGestureRecognizerWillBeginTouching:(id)a0;
- (void)touchingUIGestureRecognizerWillEndTouching:(id)a0;

@end
