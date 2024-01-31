@class NSString;
@protocol _UIColorPickerRemoteViewControllerHost;

@interface _UIColorPickerRemoteViewController : _UIRemoteViewController <_UIColorPickerViewProvidingDelegate>

@property (weak, nonatomic) id<_UIColorPickerRemoteViewControllerHost> _delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (BOOL)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_pickerDidDismissEyedropper;
- (void)_pickerDidFinish;
- (void)_pickerDidFloatEyedropper;
- (void)_pickerDidSelectColor:(id)a0 colorSpace:(id)a1 isVolatile:(BOOL)a2;
- (void)_pickerDidShowEyedropper;

@end
