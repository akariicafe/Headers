@class WLQRCode;

@interface WLQRCodeViewController : WLQRCodeController {
    BOOL _initialized;
}

@property (retain, nonatomic) WLQRCode *qrcode;

- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)initQRCode;

@end
