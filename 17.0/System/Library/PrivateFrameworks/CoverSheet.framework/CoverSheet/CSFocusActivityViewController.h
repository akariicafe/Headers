@class NSString, NSArray, CSActivityPickerViewController, UIView;
@protocol FCActivityDescribing, CSFocusActivityViewControllerDelegate;

@interface CSFocusActivityViewController : CSCoverSheetViewControllerBase <CSFocusActivityViewDelegate, CSActivityPickerViewControllerDelegate, PTSettingsKeyObserver, CSAdjunctItemHosting> {
    struct CGSize { double width; double height; } _containerSize;
}

@property (weak, nonatomic) UIView *customFocusActivityPickerPresentingView;
@property (retain, nonatomic) id<FCActivityDescribing> activity;
@property (weak, nonatomic) id<CSFocusActivityViewControllerDelegate> delegate;
@property (readonly, nonatomic) UIView *activityIndicator;
@property (readonly, nonatomic) CSActivityPickerViewController *activityPickerViewController;
@property (readonly, nonatomic) BOOL isActivityIndicatorVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double containerCornerRadius;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

+ (Class)viewClass;

- (void)setContainerSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (id)activityPickerViewControllerRepresentedActivityForPresentation:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)_updateActivityViewBehavior;
- (void)viewDidLoad;
- (BOOL)usesBackgroundView;
- (BOOL)_canShowWhileLocked;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)_activityViewIfLoaded;
- (void).cxx_destruct;
- (id)activityPickerViewControllerRepresentedActivityForDismissal:(id)a0;
- (void)_updateActivityViewActivity;
- (void)_updatePreferredContentSize;
- (void)_updateActivityViewLegibility;
- (void)focusActivityViewIndicatorPressed:(id)a0;
- (void)presentFocusActivityPickerViewControllerFromView:(id)a0 coverSheetViewPresenting:(id)a1;
- (void)focusActivityViewIndicatorDidChangeToVisible:(BOOL)a0;
- (id)activityPickerViewControllerPresentingView:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (void)_removeActivityViewIndicatorIfNecessary;

@end
