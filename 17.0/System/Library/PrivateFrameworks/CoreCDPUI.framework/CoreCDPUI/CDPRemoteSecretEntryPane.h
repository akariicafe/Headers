@class CDPDevice, CDPRemoteValidationEscapeOffer, UIButton;

@interface CDPRemoteSecretEntryPane : CDPPassphraseEntryPane {
    UIButton *_footerButton;
}

@property (retain, nonatomic) CDPRemoteValidationEscapeOffer *escapeOffer;
@property (nonatomic) unsigned long long remoteSecretType;
@property (retain, nonatomic) CDPDevice *device;
@property BOOL remoteAccountRecovery;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)_createFooterButton;
- (double)keyboardHeightOffset;
- (id)_headerStringForDevice:(id)a0 localDeviceClass:(id)a1;
- (void)didFinishResizingHeaderView;
- (void)didFinishResizingPinView;

@end
