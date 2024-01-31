@interface ContactlessReaderUI.IdentityViewModel : _TtCs12_SwiftObject <ProximityReader.IdentityUI> {
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ _identityUIIsPresented;
    void /* unknown type, empty encoding */ _dismissViewController;
    void /* unknown type, empty encoding */ _disableSleep;
    void /* unknown type, empty encoding */ _screenState;
    void /* unknown type, empty encoding */ _particlesState;
    void /* unknown type, empty encoding */ _particlesPendingState;
    void /* unknown type, empty encoding */ delayParticlesSet;
    void /* unknown type, empty encoding */ _readerStateModel;
    void /* unknown type, empty encoding */ _identityInformation;
    void /* unknown type, empty encoding */ _merchantDetails;
    void /* unknown type, empty encoding */ _documentType;
    void /* unknown type, empty encoding */ _requestValidationMode;
    void /* unknown type, empty encoding */ _bottomError;
    void /* unknown type, empty encoding */ _scanQRCodeFlag;
    void /* unknown type, empty encoding */ _qrCodeScanningState;
    void /* unknown type, empty encoding */ _platterSize;
    void /* unknown type, empty encoding */ _requestedDocument;
    void /* unknown type, empty encoding */ remoteProxy;
    void /* unknown type, empty encoding */ audioManager;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ requestRestartOperation;
    void /* unknown type, empty encoding */ lastScannedQRCode;
    void /* unknown type, empty encoding */ isDifferentQRCode;
    void /* unknown type, empty encoding */ processingQRRequest;
    void /* unknown type, empty encoding */ qrCodeScannerSleepTimer;
    void /* unknown type, empty encoding */ qrCodeScannerSleepTimeout;
}

- (void)displayIdentityInformation:(id)a0;
- (void)updateUIState:(long long)a0;

@end
