@class UIDictationTipSelectionHandler, NSString, UIDictationTipInsertionHandler, UIDictationTipPresentationHandler, UIDictationTipEmojiHandler, UIDictationTipDeletionHandler, UIDictationTipModelessInputHandler, UIDictationTipReplacementHandler;

@interface UIDictationTipController : NSObject <UIDictationTipHandlerDelegate>

@property (retain, nonatomic) UIDictationTipPresentationHandler *dictationTipPresentationHandler;
@property (retain, nonatomic) UIDictationTipReplacementHandler *dictationReplacementTipHandler;
@property (retain, nonatomic) UIDictationTipDeletionHandler *dictationDeletionTipHandler;
@property (retain, nonatomic) UIDictationTipEmojiHandler *dictationEmojiTipHandler;
@property (retain, nonatomic) UIDictationTipSelectionHandler *dictationSelectionTipHandler;
@property (retain, nonatomic) UIDictationTipInsertionHandler *dictationInsertionTipHandler;
@property (retain, nonatomic) UIDictationTipModelessInputHandler *dictationTipModelessInputHandler;
@property (copy, nonatomic) id /* block */ delayedTip;
@property (nonatomic) unsigned long long dismissalReasonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dictationTipPreferenceKey:(long long)a0;

- (void)signalDictationEmojiTip:(id)a0;
- (void)resetShowModelessTipSignal;
- (void)signalDictationReplacementTip:(id)a0;
- (id)init;
- (void)markDictationTipPreferenceToShown:(long long)a0;
- (void)processUserInteractionEnded;
- (void)reset;
- (void)signalShowModelessTipIfNeeded;
- (void)logDictationTipDimissialInstrumentation;
- (void)processSoftwareKeyboardInteraction;
- (long long)currentDeletionEventCount;
- (void)resetDeletionEventCount;
- (void)recordDictationTipDeletionText:(id)a0;
- (void)showDictationTipWithTitle:(id)a0 description:(id)a1 dictationTipType:(long long)a2;
- (void)presentDelayedTipIfNeeded;
- (void)signalDictationDeletionTip:(id)a0;
- (void)finalizeSelectionTip;
- (BOOL)modelessTipShown;
- (void)incrementDictationTipDisplayCount:(long long)a0 stopFutureShowing:(BOOL)a1;
- (void)triggerModelessInputTipDictationStoppedSignal;
- (void)addDeletionEventCount:(id)a0 deletedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)replaceEmojiInStringWithEmojiDictationCommand:(id)a0;
- (void)emitTipShowingInstrumentation:(long long)a0;
- (void).cxx_destruct;
- (void)signalDictationInsertionTip:(id)a0;
- (void)signalDictationSelectionTip:(id)a0;
- (void)signalDictationSendMessageTip;
- (void)dictationCommandUsed:(unsigned long long)a0 firstTargetString:(id)a1 secondTargetString:(id)a2;
- (BOOL)dictationTipShown:(long long)a0;
- (void)finalizeTextWithTipType:(long long)a0 title:(id)a1 andTipDescription:(id)a2;
- (void)recordDictationTipReplacementText:(id)a0;
- (long long)getDictationTipSignaled;
- (void)signalDictationClearAllTip;

@end
