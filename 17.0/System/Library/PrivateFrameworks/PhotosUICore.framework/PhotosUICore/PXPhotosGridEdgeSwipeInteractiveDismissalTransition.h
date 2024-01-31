@class UIScreenEdgePanGestureRecognizer, UIViewController;
@protocol PXPhotosGridEdgeSwipeInteractiveDismissalDelegate;

@interface PXPhotosGridEdgeSwipeInteractiveDismissalTransition : UIPercentDrivenInteractiveTransition {
    BOOL isRTL;
}

@property (readonly, nonatomic) UIScreenEdgePanGestureRecognizer *edgeSwipeGesture;
@property (readonly, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) id<PXPhotosGridEdgeSwipeInteractiveDismissalDelegate> delegate;

- (void)startInteractiveTransition:(id)a0;
- (void).cxx_destruct;
- (void)_handleEdgeSwipeGesture:(id)a0;
- (BOOL)_shouldCompleteTransition;
- (id)initWithEdgeSwipeGesture:(id)a0 viewController:(id)a1;

@end
