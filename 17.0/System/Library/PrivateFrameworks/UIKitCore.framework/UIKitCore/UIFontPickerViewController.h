@class NSArray, NSString, UIFontDescriptor, UIFontPickerViewControllerConfiguration;
@protocol _UIFontPickerViewHostingImpl, _UIRemoteSheet, UIFontPickerViewControllerDelegate;

@interface UIFontPickerViewController : UIViewController <_UIRemoteSheetContaining, _UIFontPickerViewControllerHost, BSDescriptionProviding> {
    id<_UIFontPickerViewHostingImpl> _hostingImpl;
}

@property (retain, nonatomic, setter=_setSelectedFontDescriptors:) NSArray *_selectedFontDescriptors;
@property (readonly, nonatomic) BOOL _presentingViewController;
@property (readonly, copy, nonatomic) UIFontPickerViewControllerConfiguration *configuration;
@property (weak, nonatomic) id<UIFontPickerViewControllerDelegate> delegate;
@property (retain, nonatomic) UIFontDescriptor *selectedFontDescriptor;
@property (readonly, nonatomic) id<_UIRemoteSheet> _remoteSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_useSceneBackedFontPicker;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissViewControllerWithTransition:(int)a0 completion:(id /* block */)a1;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithCoder:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (void)_commonFontPickerViewControllerInitUsingScene:(BOOL)a0;
- (id)_initWithConfiguration:(id)a0 useSceneBackedImplementation:(BOOL)a1;
- (void)_pickerDidCancel;
- (void)_pickerDidSelectFont:(id)a0;
- (void)_viewControllerPresentationDidInitiate;

@end
