@class NSArray, NSString, UITextField, UIActivityIndicatorView, GKReachability;
@protocol GKNicknameControllerDelegate;

@interface GKNicknameController : NSObject <UITextFieldDelegate>

@property (nonatomic) BOOL nicknameWasEdited;
@property (nonatomic) BOOL nicknameChangeWasCommitted;
@property (retain, nonatomic) GKReachability *reachability;
@property (retain, nonatomic) NSArray *suggestedNicknames;
@property (retain, nonatomic) NSString *defaultNickname;
@property (retain, nonatomic) UITextField *nickname;
@property (nonatomic) BOOL shouldShakeTextFieldOnError;
@property (nonatomic) BOOL shouldUseSuggestedNicknameOnDefaultNickname;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (weak) id<GKNicknameControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (id)init;
- (void)reset;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void).cxx_destruct;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidBecomeFirstResponder:(id)a0;
- (void)textFieldDidResignFirstResponder:(id)a0;
- (void)didSelectSuggestion:(id)a0;
- (void)commitNicknameChanges:(id /* block */)a0;
- (void)displayNicknameSuggestions;
- (void)loadSuggestedNicknames:(id /* block */)a0;
- (void)nicknameTextChanged:(id)a0;
- (void)shakeNicknameTextFieldWithCompletionBlock:(id /* block */)a0;
- (void)startObservingKeyboardEvents;
- (void)stopObservingKeyboardEvents;
- (void)updateReturnKeyEnabledState;

@end
