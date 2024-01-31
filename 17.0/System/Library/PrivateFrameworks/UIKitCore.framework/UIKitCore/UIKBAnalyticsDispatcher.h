@class NSString;

@interface UIKBAnalyticsDispatcher : NSObject

@property (nonatomic) unsigned long long nextCandidateReplacementSource;
@property (copy, nonatomic) NSString *nextCandidateReplacementRemovedText;
@property (copy, nonatomic) NSString *nextCandidateReplacementInsertedText;
@property (copy, nonatomic) NSString *nextCandidateReplacementPostCandidateInsertedText;
@property (nonatomic) BOOL analyticsSkipDidKeyPress;

+ (id)currentInputMode;
+ (id)sharedInstance;
+ (void)keyplaneSwitched:(int)a0;
+ (id)allowedValuesForTextEditingPreferredFieldName:(id)a0;
+ (void)didInsertText:(id)a0 relativeRangeBefore:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 selectedTextBefore:(id)a2 withLanguage:(id)a3;
+ (void)candidateViewExtended:(id)a0 direction:(id)a1;
+ (void)hapticEventEngineDuration:(double)a0 startCount:(unsigned long long)a1 actionCount:(unsigned long long)a2;
+ (void)floatingKeyboardMoved:(id)a0 toPosition:(struct CGPoint { double x0; double x1; })a1 touchPosition:(struct CGPoint { double x0; double x1; })a2;
+ (void)emojiPopoverSummoned:(id)a0 appendsEmoji:(BOOL)a1;
+ (void)globeKeySelected;
+ (void)didDeleteBackwardText:(id)a0;
+ (void)sessionActionAnalyticsEnded:(id)a0;
+ (void)didCandidateReplacement;
+ (void)handwritingResized:(id)a0;
+ (void)globeKeyEducationShown:(double)a0;
+ (void)deleteKeySelected:(int)a0;
+ (void)emojiInsertedByMethod:(id)a0 inputType:(id)a1;
+ (void)keyboardAnalyticsDispatchWithSelector:(SEL)a0 withTrigger:(id)a1;
+ (void)dispatchFloatingKeyboardEventOfType:(id)a0 trigger:(id)a1 pinnedToEdge:(id)a2 position:(struct CGPoint { double x0; double x1; })a3 touchUpPosition:(struct CGPoint { double x0; double x1; })a4;
+ (void)globeKeyLongPress;
+ (void)floatingKeyboardSummonedEvent:(id)a0 trigger:(id)a1 finalPosition:(struct CGPoint { double x0; double x1; })a2;
+ (void)analyticsDispatchEventTextEditingOperation:(id)a0 trigger:(id)a1;
+ (void)keyboardShortcutInvokedWithKeyCommand:(id)a0 keyEvent:(id)a1 keyboardProperties:(id)a2;
+ (void)didRevisionBubbleTap;
+ (void)didCandidateReplacementWithRemovedText:(id)a0 insertedText:(id)a1;
+ (void)setKeyboardTrialParameters:(id)a0;
+ (void)keyboardCameraSessionEndedForTextContentType:(id)a0 didFindText:(BOOL)a1 didInsertText:(BOOL)a2 sender:(id)a3;
+ (id)allowedValuesForType:(id)a0;
+ (id)preferredEventName:(id)a0;
+ (void)decrementAllowCursorMovementCount;
+ (void)sessionAnalyticsEnded:(id)a0;
+ (void)incrementAllowCursorMovementCount;
+ (void)editingSessionEnded:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)resetCandidateReplacementVariables;

@end
