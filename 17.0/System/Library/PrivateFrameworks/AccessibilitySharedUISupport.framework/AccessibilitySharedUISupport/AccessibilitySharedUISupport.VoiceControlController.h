@interface AccessibilitySharedUISupport.VoiceControlController : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _enabled;
    void /* unknown type, empty encoding */ _currentOverlay;
    void /* unknown type, empty encoding */ _listeningStatus;
    void /* unknown type, empty encoding */ _heySiriEnabled;
    void /* unknown type, empty encoding */ _dictationStatus;
    void /* unknown type, empty encoding */ _dictatedString;
    void /* unknown type, empty encoding */ _commandWindowStatus;
    void /* unknown type, empty encoding */ _recognizedCommandIdentifier;
    void /* unknown type, empty encoding */ _numberForPracticeButton;
    void /* unknown type, empty encoding */ _numberForNextButton;
    void /* unknown type, empty encoding */ _numberForPrevButton;
    void /* unknown type, empty encoding */ _phoneticAlternative;
    void /* unknown type, empty encoding */ _gridRectangle;
    void /* unknown type, empty encoding */ _gridPath;
    void /* unknown type, empty encoding */ _gridPathCommand;
    void /* unknown type, empty encoding */ _gridDrill;
    void /* unknown type, empty encoding */ handlerQueue;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ cancelPendingRetries;
    void /* unknown type, empty encoding */ hasPendingRetry;
    void /* unknown type, empty encoding */ connectionRetryCount;
    void /* unknown type, empty encoding */ hasValidConnection;
    void /* unknown type, empty encoding */ _voiceTriggerStatusChanged;
    void /* unknown type, empty encoding */ _commandAndControlEnabledChanged;
}

- (void)_updateSettingsWithNotification:(id)a0;

@end
