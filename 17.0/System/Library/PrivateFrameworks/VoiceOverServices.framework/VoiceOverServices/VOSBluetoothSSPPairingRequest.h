@class UIAlertController, VOSBluetoothDevice, PSSpecifier;

@interface VOSBluetoothSSPPairingRequest : NSObject {
    VOSBluetoothDevice *_device;
    PSSpecifier *_specifier;
    id _delegate;
    int _pairingStyle;
    UIAlertController *_alert;
}

@property (copy, nonatomic) id /* block */ pairingAcceptedBlock;
@property (copy, nonatomic) id /* block */ pairingFailedBlock;

- (void)dismiss;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)showWithWindow:(id)a0;
- (id)_sanitizeNameForAlert:(id)a0;
- (void)hidPairingResult:(id)a0;
- (id)initWithDevice:(id)a0 andSpecifier:(id)a1;
- (int)pairingStyle;
- (void)setPairingStyle:(int)a0 andPasskey:(id)a1;

@end
