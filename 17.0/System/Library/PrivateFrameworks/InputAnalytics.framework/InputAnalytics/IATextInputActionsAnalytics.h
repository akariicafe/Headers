@class IATextInputActionsSessionAction, NSUUID, IATextInputActionsServer, NSObject;
@protocol OS_dispatch_queue, IATextInputActionsAnalyticsDelegate;

@interface IATextInputActionsAnalytics : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IATextInputActionsSessionAction *lastAction;
@property (weak, nonatomic) id<IATextInputActionsAnalyticsDelegate> analyticsDelegate;
@property (retain, nonatomic) IATextInputActionsServer *server;
@property (copy, nonatomic) NSUUID *sessionIdentifier;

- (void)didUndo;
- (void)didCalloutBarReplacementForText:(id)a0 withText:(id)a1;
- (void)_didDeleteBackwardAction:(id)a0;
- (void)didDeleteBackwardText:(id)a0;
- (void)didOther;
- (void)didCandidateBarReplacementForText:(id)a0 withText:(id)a1;
- (void)didDictationEnd;
- (void)didDictationBegin:(BOOL)a0 usesMultiModalDictation:(BOOL)a1;
- (void)didRedo;
- (void).cxx_destruct;
- (void)didChangeToSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 relativeRangeBefore:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)didAutocorrectReplacementForText:(id)a0 withText:(id)a1;
- (void)didSessionEnd;
- (id)_instanceOfActionClass:(Class)a0;
- (void)didCut:(id)a0;
- (void)didSessionBegin;
- (void)didDeleteBackwardText:(id)a0 withType:(long long)a1;
- (void)_didDeleteBackwardText:(id)a0 withType:(long long)a1 shouldOverrideInputActionCountToZero:(BOOL)a2 withLanguage:(id)a3;
- (void)_didInsertTextAction:(id)a0 withLanguage:(id)a1;
- (void)didCopy:(id)a0;
- (void)didDeletionKeyPress;
- (void)didInsertText:(id)a0 withType:(long long)a1;
- (void)didInsertText:(id)a0 withType:(long long)a1 selectedTextBefore:(id)a2;
- (void)didInsertText:(id)a0 withType:(long long)a1 selectedTextBefore:(id)a2 withLanguage:(id)a3;
- (void)didInsertText:(id)a0 withType:(long long)a1 withLanguage:(id)a2;
- (void)didInsertionKeyPress;
- (void)didPaste:(id)a0;
- (void)didReplacementForText:(id)a0 withText:(id)a1 withSource:(long long)a2 withType:(long long)a3;
- (void)flushAndSetLastAction:(id)a0;
- (id)initWithAnalyticsDelegate:(id)a0;
- (void)mergeOrConsumeAction:(id)a0;

@end
