@class UITapGestureRecognizer, NSString, UISegmentedControl, UIView, UILabel;
@protocol NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewControllerViewDelegate;

@interface NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewControllerView : UIView <UIGestureRecognizerDelegate> {
    UIView *_unmanagedView;
    UISegmentedControl *_unmanagedSegmentControl;
    UILabel *_unmanagedTitleLabel;
    UITapGestureRecognizer *_tapGestureRecongizer;
    UILabel *_overflowingLabel;
}

@property (weak, nonatomic) id<NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewControllerViewDelegate> delegate;
@property (nonatomic) BOOL containsUnmanagedContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_unmanagedViewTapped;

@end
