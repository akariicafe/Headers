@class PNPDeviceState, NSString, UIView, UILabel, UIButton;
@protocol PNPAirplaneModeBluetoothViewDelegate;

@interface PNPAirplaneModeView : UIView <PNPDeviceStateConfigurable> {
    PNPDeviceState *_deviceState;
    UIView *_contentAreaView;
    UILabel *_deviceNameLabel;
    UIButton *_turnOnBluetoothButton;
    NSString *_currentString;
    NSString *_pencilStatusString;
}

@property (weak, nonatomic) id<PNPAirplaneModeBluetoothViewDelegate> bluetoothDelegate;
@property (copy, nonatomic) PNPDeviceState *deviceState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_applePencilOff;
- (id)_applePencilOn;
- (id)_bluetoothOnString;
- (id)_turnOnString;
- (void)turnOnBluetooth:(id)a0;

@end
