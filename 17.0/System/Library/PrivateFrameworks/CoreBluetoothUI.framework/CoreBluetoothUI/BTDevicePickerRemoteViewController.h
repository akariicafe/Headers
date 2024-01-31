@protocol BTDevicePickerRemoteViewControllerHost;

@interface BTDevicePickerRemoteViewController : _UIRemoteViewController <BTDevicePickerRemoteViewControllerHost>

@property (weak, nonatomic) id<BTDevicePickerRemoteViewControllerHost> _delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)discoveredDevice:(id)a0 deviceAddress:(id)a1;
- (void)didDismissWithResult:(long long)a0 deviceAddress:(id)a1;

@end
