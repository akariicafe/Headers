@class NSString, _UISceneHostingController, UIColorPickerViewController;
@protocol _UIRemoteSheet;

@interface _UIColorPickerSceneHostingImpl : NSObject <_UISceneHostingControllerDelegate, _UIColorPickerViewProvidingDelegate, _UIColorPickerViewHostingImpl> {
    _UISceneHostingController *_hostingController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIColorPickerViewController *delegateColorPickerViewController;
@property (readonly, nonatomic) id<_UIRemoteSheet> _remoteSheet;

- (void).cxx_destruct;
- (void)_pickerDidDismissEyedropper;
- (void)_pickerDidFinish;
- (void)_pickerDidFloatEyedropper;
- (void)_pickerDidSelectColor:(id)a0 colorSpace:(id)a1 isVolatile:(BOOL)a2;
- (void)_pickerDidShowEyedropper;
- (void)clientDidUpdatePreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)clientIsReady;
- (void)setRemoteConfiguration:(id)a0;
- (void)setRemoteSelectedColor:(id)a0;
- (void)setupRemoteHosting;

@end
