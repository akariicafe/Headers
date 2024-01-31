@class _UIPreviewInteractionController, NSString, UIView, UIGestureRecognizer, UIViewController;
@protocol UIViewControllerPreviewingDelegate;

@interface _UIViewControllerPreviewingContext : NSObject <_UIPreviewInteractionControllerDelegate, UIViewControllerPreviewing_Internal>

@property (retain, nonatomic) UIView *sourceView;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) _UIPreviewInteractionController *previewInteractionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIViewControllerPreviewingDelegate> delegate;
@property (retain, nonatomic) UIView *customViewForInteractiveHighlight;
@property (readonly, nonatomic) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;

- (void)unregister;
- (void).cxx_destruct;
- (id)initWithSourceView:(id)a0 viewController:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredSourceViewRectInCoordinateSpace:(id)a0;
- (void)previewInteractionController:(id)a0 commitViewController:(id)a1;
- (void)previewInteractionController:(id)a0 didDismissViewController:(id)a1 committing:(BOOL)a2;
- (id)previewInteractionController:(id)a0 viewControllerForPreviewingAtLocation:(struct CGPoint { double x0; double x1; })a1 inCoordinateSpace:(id)a2 presentingViewController:(id *)a3;
- (void)previewInteractionController:(id)a0 willDismissViewController:(id)a1;
- (void)previewInteractionController:(id)a0 willPresentViewController:(id)a1;
- (void)previewInteractionController:(id)a0 willPresentViewController:(id)a1 forLocation:(struct CGPoint { double x0; double x1; })a2 inSourceView:(id)a3;

@end
