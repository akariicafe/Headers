@class UITextView, UIStackView, UIScribbleInteraction, UIInputContextHistory, NCNotificationAction, NSString, UIButton;
@protocol NCNotificationTextInputViewDelegate;

@interface NCNotificationTextInputView : UIView <UITextViewDelegate, UIScribbleInteractionDelegate>

@property (retain, nonatomic) UIStackView *horizontalStack;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIScribbleInteraction *scribbleInteraction;
@property (weak, nonatomic) id<NCNotificationTextInputViewDelegate> delegate;
@property (retain, nonatomic) NCNotificationAction *action;
@property (retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPlaceholder:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)safeAreaInsetsDidChange;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (BOOL)canResignFirstResponder;
- (void)_buttonPressed:(id)a0;
- (void)setButtonTitle:(id)a0;
- (void)scribbleInteractionDidFinishWriting:(id)a0;
- (void)textViewDidChange:(id)a0;
- (double)_textViewHeight;
- (double)_maximumTextViewHeight;
- (double)_pencilModeHeight;
- (double)_textViewWidth;
- (void)_updateForTextChange;

@end
