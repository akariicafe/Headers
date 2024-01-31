@class NSString, UIColorPickerViewController, _UIColorPickerRemoteViewController, NSExtension;
@protocol _UIRemoteSheet, NSCopying;

@interface _UIColorPickerRVCHostingImpl : NSObject <_UIColorPickerRemoteViewControllerHost, _UIColorPickerViewHostingImpl>

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying> extensionRequestIdentifier;
@property (retain, nonatomic) _UIColorPickerRemoteViewController *remoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIColorPickerViewController *delegateColorPickerViewController;
@property (readonly, nonatomic) id<_UIRemoteSheet> _remoteSheet;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_colorPickerDidUpdatePreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_colorPickerViewServiceDidTerminateWithError:(id)a0;
- (void)_pickerDidDismissEyedropper;
- (void)_pickerDidFinish;
- (void)_pickerDidFloatEyedropper;
- (void)_pickerDidSelectColor:(id)a0 colorSpace:(id)a1 isVolatile:(BOOL)a2;
- (void)_pickerDidShowEyedropper;
- (void)_tryLaunchingExtension:(long long)a0;
- (void)setRemoteConfiguration:(id)a0;
- (void)setRemoteSelectedColor:(id)a0;
- (void)setupRemoteHosting;

@end
