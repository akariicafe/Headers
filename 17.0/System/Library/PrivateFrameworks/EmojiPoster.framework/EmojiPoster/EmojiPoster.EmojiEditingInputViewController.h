@interface EmojiPoster.EmojiEditingInputViewController : UIViewController <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ navBar;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ emoji;
    void /* unknown type, empty encoding */ textField;
    void /* unknown type, empty encoding */ emojiCountLabel;
    void /* unknown type, empty encoding */ keyboardVC;
    void /* unknown type, empty encoding */ delegate;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)viewIsAppearing:(BOOL)a0;
- (void)didTapCloseButton;
- (void)didTapDeleteButton;

@end
