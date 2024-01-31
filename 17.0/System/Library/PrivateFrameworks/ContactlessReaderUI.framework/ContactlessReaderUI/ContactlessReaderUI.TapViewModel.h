@interface ContactlessReaderUI.TapViewModel : _TtCs12_SwiftObject <ProximityReader.TapUI> {
    void /* unknown type, empty encoding */ remoteProxy;
    void /* unknown type, empty encoding */ _tapUIIsPresented;
    void /* unknown type, empty encoding */ _showPIN;
    void /* unknown type, empty encoding */ _transactionDetails;
    void /* unknown type, empty encoding */ _readerStateModel;
    void /* unknown type, empty encoding */ _particlesState;
    void /* unknown type, empty encoding */ _showCancelButton;
    void /* unknown type, empty encoding */ _vasMerchantNames;
    void /* unknown type, empty encoding */ _tapUIError;
    void /* unknown type, empty encoding */ _centerState;
    void /* unknown type, empty encoding */ _orientationInverted;
    void /* unknown type, empty encoding */ _centerTextKey;
    void /* unknown type, empty encoding */ _axTransactionContextLabel;
    void /* unknown type, empty encoding */ _axTransactionContextValue;
    void /* unknown type, empty encoding */ axOngoingAnnouncement;
    void /* unknown type, empty encoding */ closeAfterAXAnnouncement;
    void /* unknown type, empty encoding */ showPINAfterAXAnnouncement;
    void /* unknown type, empty encoding */ voiceOverIsRunning;
    void /* unknown type, empty encoding */ notificationObservers;
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ playSound;
    void /* unknown type, empty encoding */ rotationManager;
    void /* unknown type, empty encoding */ proximitySensorObserver;
    void /* unknown type, empty encoding */ sensorObscured;
    void /* unknown type, empty encoding */ proximityCounter;
    void /* unknown type, empty encoding */ cardTearCounter;
    void /* unknown type, empty encoding */ transientCenterStateTimer;
    void /* unknown type, empty encoding */ subscriptions;
}

- (void)closeUI;
- (void)closeUIImmediate;
- (void)requiresCardPIN:(id)a0;
- (void)updateWithTransactionEvent:(long long)a0;
- (void)vasReadSuccessWithMerchantNames:(id)a0;

@end
