@class NSString, NSAttributedString, VSRecognitionSession;

@interface VSRecognitionAction : NSObject {
    NSString *_resultString;
    NSString *_statusString;
    union { NSString *stringValue; NSAttributedString *attributedStringValue; } _spokenString;
    VSRecognitionSession *_session;
    unsigned char _spokenStringIsAttributed : 1;
}

- (void)dealloc;
- (id)perform;
- (id)cancel;
- (id)_session;
- (int)completionType;
- (void)_setSession:(id)a0;
- (void)_continueAfterDeferredStart;
- (BOOL)_hasDeferredStartCallback;
- (void)completeWithNextAction:(id)a0 error:(id)a1;
- (id)resultDisplayString;
- (BOOL)sensitiveActionsEnabled;
- (void)setResultDisplayString:(id)a0;
- (void)setSpokenFeedbackAttributedString:(id)a0;
- (void)setSpokenFeedbackString:(id)a0;
- (void)setStatusDisplayString:(id)a0;
- (id)spokenFeedbackAttributedString;
- (id)spokenFeedbackString;
- (id)statusDisplayString;

@end
