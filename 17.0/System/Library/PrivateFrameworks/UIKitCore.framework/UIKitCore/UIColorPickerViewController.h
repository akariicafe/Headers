@class UIColor, NSArray, _UIColorPickerViewControllerConfiguration, _UIColorPickerColorQueue, NSString, UIPresentationController, UIViewController;
@protocol UIColorPickerViewControllerDelegate, _UIColorPickerViewHostingImpl;

@interface UIColorPickerViewController : UIViewController <_UIColorPickerColorQueueDelegate, _UIColorPickerViewProvidingDelegate> {
    UIPresentationController *_presentationController;
    struct { unsigned char delegateImplementsDidSelectColorContinuous : 1; unsigned char delegateImplementsDidSelectColor : 1; unsigned char delegateImplementsDidDeselectColorSPI : 1; } _flags;
    id<_UIColorPickerViewHostingImpl> _hostingImpl;
}

@property (retain, nonatomic) _UIColorPickerColorQueue *colorQueue;
@property (retain, nonatomic, setter=_setChildViewController:) UIViewController *_childViewController;
@property (readonly, copy, nonatomic) _UIColorPickerViewControllerConfiguration *configuration;
@property (copy, nonatomic, setter=_setRemoteConfiguration:) _UIColorPickerViewControllerConfiguration *_remoteConfiguration;
@property (nonatomic, setter=_setShouldUseDarkGridInDarkMode:) BOOL _shouldUseDarkGridInDarkMode;
@property (nonatomic, setter=_setUserInterfaceStyleForGrid:) long long _userInterfaceStyleForGrid;
@property (copy, nonatomic, setter=_setSuggestedColors:) NSArray *_suggestedColors;
@property (retain, nonatomic, setter=_setSelectedColor:) UIColor *_selectedColor;
@property (nonatomic, setter=_setAllowsNoColor:) BOOL _allowsNoColor;
@property (nonatomic, setter=_setSupportsEyedropper:) BOOL _supportsEyedropper;
@property (nonatomic, setter=_setShowsGridOnly:) BOOL _showsGridOnly;
@property (weak, nonatomic) id<UIColorPickerViewControllerDelegate> delegate;
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) BOOL supportsAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_useSceneBackedColorPicker;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)encodeWithCoder:(id)a0;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void)didMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (id)_defaultColor;
- (void)_updateConfiguration;
- (void)setTitle:(id)a0;
- (void)willMoveToParentViewController:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)__setSelectedColor:(id)a0 notifyingViewService:(BOOL)a1;
- (void)_colorPickerDidUpdatePreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_commonUIColorPickerViewControllerInit;
- (void)_dequeue_pickerDidSelectColor:(id)a0 colorSpace:(id)a1 isVolatile:(BOOL)a2;
- (struct CGSize { double x0; double x1; })_formSheetSizeForWindowWithSize:(struct CGSize { double x0; double x1; })a0 screenSize:(struct CGSize { double x0; double x1; })a1;
- (void)_pickerDidDismissEyedropper;
- (void)_pickerDidFinish;
- (void)_pickerDidFloatEyedropper;
- (void)_pickerDidSelectColor:(id)a0 colorSpace:(id)a1 isVolatile:(BOOL)a2;
- (void)_pickerDidShowEyedropper;
- (void)_presentationController:(id)a0 prepareAdaptivePresentationController:(id)a1;
- (id)_remoteSheet;
- (void)_selectDefaultColorIfNecessary;
- (void)_updateConfigurationIfNeeded;
- (void)beginAppearanceTransition:(BOOL)a0 animated:(BOOL)a1;

@end
