@class NSHashTable;
@protocol UITextCursorAssertionControllerSubject;

@interface UITextCursorAssertionController : NSObject {
    NSHashTable *_assertions;
}

@property (weak, nonatomic) id<UITextCursorAssertionControllerSubject> subject;

- (id)activeInputModeAssertionWithReason:(id)a0;
- (id)dictationIndicatorAssertionWithReason:(id)a0 userInfo:(id)a1;
- (void)dealloc;
- (id)nonBlinkingAssertionWithReason:(id)a0;
- (id)nonVisibleAssertionWithReason:(id)a0;
- (id)nonBlinkingGhostAssertionWithReason:(id)a0;
- (void).cxx_destruct;
- (id)capslockAssertionWithReason:(id)a0;
- (id)debugDescription;
- (void)_endTrackingAssertion:(id)a0;
- (id)deleteIndicatorAssertionWithReason:(id)a0;
- (id)inputModeSelectorAssertionWithReason:(id)a0 userInfo:(id)a1;
- (id)_createAssertionWithReason:(id)a0 options:(unsigned long long)a1 userInfo:(id)a2;
- (void)_updateSubjectWithAssertionState;
- (void)_beginTrackingAssertion:(id)a0;

@end
