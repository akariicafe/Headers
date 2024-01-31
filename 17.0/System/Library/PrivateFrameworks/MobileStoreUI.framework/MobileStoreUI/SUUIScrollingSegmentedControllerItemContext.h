@class UIScrollView, UIViewController;
@protocol SUUIScrollingSegmentedControllerItemContextDelegate;

@interface SUUIScrollingSegmentedControllerItemContext : NSObject {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _appliedContentInsetsAdjustment;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _desiredContentInsetsAdjustment;
    UIScrollView *_insetAdjustedContentScrollView;
}

@property (weak, nonatomic) id<SUUIScrollingSegmentedControllerItemContextDelegate> delegate;
@property (readonly, nonatomic) UIViewController *viewController;

- (id)init;
- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (void)_applyNewContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 withOldContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 toContentScrollView:(id)a2;
- (void)applyNewContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)updateAppliedContentInsetsAdjustment;

@end
