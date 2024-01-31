@class AFClientLite, NSObject;
@protocol OS_dispatch_group, SiriPresentationPineBoardMainScreenViewControllerDelegate;

@interface SiriPresentationPineBoardMainScreenViewController : SiriPresentationViewController {
    NSObject<OS_dispatch_group> *_requestDictationFromSiriGroup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dictationInProgressLock;
    BOOL _didRequestDictationStart;
    BOOL _shouldListenForSceneActivation;
    BOOL _shouldRequestDictation;
}

@property (nonatomic, getter=_buttonDownTimestamp, setter=_setButtonDownTimestamp:) double buttonDownTimestamp;
@property (retain, nonatomic) AFClientLite *clientLite;
@property (weak, nonatomic) id<SiriPresentationPineBoardMainScreenViewControllerDelegate> siriPresentationControllerDelegate;

- (void)setNextAssistantRecognitionStrings:(id)a0;
- (void).cxx_destruct;
- (void)setNextVoiceRecognitionAudioInputPaths:(id)a0;
- (id)initWithIdentifier:(long long)a0 hostedPresentationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_forwardHIDButtonEventWithUsagePage:(unsigned int)a0 usage:(unsigned int)a1 type:(long long)a2 senderID:(unsigned long long)a3;
- (BOOL)_getValueForShouldRequestDictation;
- (void)_prewarmFlamesWithPresentationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_prewarmSiriVideoFlowDelegatePlugin;
- (BOOL)_shouldShowSetupViewController;
- (double)_thresholdForTriggeringABCInLaunch;
- (void)siriViewController:(id)a0 didChangePresentationPeekMode:(unsigned long long)a1;
- (void)siriViewController:(id)a0 didChangePresentationVisualState:(unsigned long long)a1;
- (void)siriViewController:(id)a0 didReceiveButtonUpWithRequestOptions:(id)a1;
- (void)siriViewController:(id)a0 sceneDidActivateWithIdentifier:(id)a1;
- (id)siriViewController:(id)a0 willStartRequestWithOptions:(id)a1;
- (void)siriViewControllerDidChangeToListeningMode:(id)a0;
- (void)siriViewControllerDidDeactivateScene:(id)a0;
- (void)siriViewControllerDidPresentKeyboard:(id)a0;

@end
