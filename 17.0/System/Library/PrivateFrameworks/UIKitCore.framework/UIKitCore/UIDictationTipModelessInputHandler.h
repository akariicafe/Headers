@protocol UIDictationTipHandlerDelegate;

@interface UIDictationTipModelessInputHandler : NSObject

@property (weak, nonatomic) id<UIDictationTipHandlerDelegate> delegate;
@property (nonatomic) BOOL modelessInputTipDictationStoppedSignal;
@property (nonatomic) BOOL softwareKeyboardInteractionAfterDictationStoppedSignal;
@property (nonatomic) BOOL shouldAttemptToShowModelessTip;

- (BOOL)shouldShowModelessInputTip;
- (void)resetDictationTipModelessHandlerSignalFlags;
- (void)processUserInteractionEnded;
- (void)processSoftwareKeyboardInteraction;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)triggerAttemptToShowModelessTipFlag;
- (void)userInteractionEndedDuringModelessInputTipDictationStoppedSignal;
- (void)showModelessInputTip;

@end
