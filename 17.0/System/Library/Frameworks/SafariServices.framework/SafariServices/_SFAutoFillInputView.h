@class NSString, _SFTextSuggestion, UILabel, NSMutableArray, UIButton;
@protocol _SFAutoFillInputViewDelegate;

@interface _SFAutoFillInputView : UIInputView {
    _SFTextSuggestion *_suggestion;
    NSString *_hostString;
    NSString *_credentialSource;
    NSString *_customTitle;
    UILabel *_explanationLabel;
    UIButton *_keyboardButton;
    UIButton *_otherPasswordsButton;
    UIButton *_fillCredentialButton;
    NSMutableArray *_dynamicConstraints;
}

@property (weak, nonatomic) id<_SFAutoFillInputViewDelegate> delegate;

- (void)traitCollectionDidChange:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_fillCredential:(id)a0;
- (void)_showMorePasswords:(id)a0;
- (void)_showStandardKeyboard:(id)a0;
- (void)_updateDynamicConstraints;
- (void)_updateFillCredentialButtonLabelMetrics;
- (id)initWithHostString:(id)a0 credentialSource:(id)a1 suggestion:(id)a2 customTitle:(id)a3;
- (void)updateSuggestionIfNecessary:(id)a0;

@end
