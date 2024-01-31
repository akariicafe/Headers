@class SiriLongPressButtonSource, NSString, NSArray, SBVoiceControlTransientOverlayViewController;
@protocol SiriAssertion;

@interface SBVoiceControlController : NSObject <SBVoiceControlTransientOverlayViewControllerDelegate> {
    BOOL _delayedAssistantActivationPending;
    BOOL _headsetDownDelayedActionPerformed;
    NSArray *_nextRecognitionAudioInputPaths;
    SBVoiceControlTransientOverlayViewController *_transientOverlayViewController;
    SiriLongPressButtonSource *_siriHeadsetDeviceSource;
    id<SiriAssertion> _siriPreheatAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)_prepareDelayedHeadsetAction;
- (void)voiceControlTransientOverlayViewControllerRequestsDismissal:(id)a0;
- (void)handleHeadsetButtonDownWithClickCount:(unsigned long long)a0;
- (id)_newVoiceControlTransientOverlayViewControllerWithSource:(id)a0;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)a0;
- (void)dismissTransientOverlay;
- (void)_spokenLanguageDidChange:(id)a0;
- (BOOL)handleHeadsetButtonUp;
- (void)_cancelDelayedHeadsetAction;
- (void)_assistantActivationSettingsDidChange:(id)a0;
- (id)siriBluetoothDeviceSource:(id)a0;
- (void)_performDelayedHeadsetActionForVoiceControl;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (void)headsetAvailabilityChanged;
- (void)configureVoiceControl;
- (void)bluetoothDeviceEndedVoiceControl:(id)a0;
- (BOOL)_shouldEnterVoiceControl;
- (BOOL)handleHomeButtonHeld;
- (void)_performDelayedHeadsetActionForAssistant;
- (void)_updateNextRecognitionAudioInputPaths:(id)a0;
- (void)voiceControlTransientOverlayViewControllerDidDisappear:(id)a0;
- (BOOL)handleHeadsetButtonUpNotInCall;

@end
