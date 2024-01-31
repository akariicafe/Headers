@interface _TtCV12GameCenterUIP33_71E88C93E9376CB5FC37AECD01F72ACD17NicknameTextField11Coordinator : NSObject <GKNicknameControllerDelegate> {
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ nicknameController;
    void /* unknown type, empty encoding */ cancellableSubcriber;
}

- (id)init;
- (void)dealloc;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void).cxx_destruct;
- (void)nicknameDidBecomeFirstResponder;
- (void)nicknameDidResignFirstResponder;
- (BOOL)nicknameShouldBeginEditing;
- (void)nicknameTextDidChangeWithMessage:(id)a0;
- (void)nicknameUpdateRequestCompletedWithStatus:(id)a0 error:(id)a1;
- (void)nicknameWillbeginUpdating;

@end
