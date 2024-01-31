@class CBDiscovery, BCBatteryDevice, UIImageView, BCBatteryDeviceController, NSString, NSNumberFormatter;
@protocol HACCContentModuleDelegate;

@interface HACCStatusView : HUICCCapsuleButton <BCBatteryDeviceObserving, HACCContentModule> {
    NSNumberFormatter *_numberFormatter;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain) BCBatteryDevice *batteryDevice;
@property (retain, nonatomic) BCBatteryDeviceController *batteryController;
@property (retain) CBDiscovery *bluetoothDiscovery;
@property (nonatomic) BOOL shouldAutoExpandForAvailableHAs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;
@property (nonatomic) BOOL providesOwnSeparator;

+ (id)_backgroundUpdateQueue;

- (id)accessibilityLabel;
- (BOOL)enabled;
- (void)connectedDevicesDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)updateValue;
- (id)_productIdentifierFromBluetoothRoute:(id)a0;
- (void)_updateBatterySubtitleLabelForDevice:(id)a0;
- (void)_updateBatterySubtitleLabelForLeft:(double)a0 right:(double)a1 andAvailableEars:(int)a2;
- (id)contentValue;
- (id)liveListenImageNameFromBluetoothRoute:(id)a0;
- (struct CGSize { double x0; double x1; })liveListenImageSize:(id)a0 forProductID:(id)a1;
- (BOOL)shouldAddSeparatorForView:(id)a0;
- (BOOL)shouldAutoExpandForView:(id)a0;

@end
