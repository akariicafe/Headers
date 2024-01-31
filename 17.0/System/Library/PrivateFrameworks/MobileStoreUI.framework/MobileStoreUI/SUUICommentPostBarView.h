@class SUUICommentPostBarTextField, NSString, UILabel, UIButton;
@protocol SUUICommentDelegate;

@interface SUUICommentPostBarView : UIView <UITextFieldDelegate> {
    UIButton *_postButton;
    SUUICommentPostBarTextField *_postTextField;
    UILabel *_asLabel;
    UIButton *_asNameButton;
    NSString *_asText;
}

@property (weak, nonatomic) id<SUUICommentDelegate> delegate;
@property (copy, nonatomic) NSString *commenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tintColorDidChange;
- (BOOL)resignFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setPlaceholderText:(id)a0;
- (id)_asLabel;
- (id)_asNameButton;
- (void)_changeCommenter:(id)a0;
- (void)_post:(id)a0;
- (void)_postComment;
- (void)setAsText:(id)a0;
- (void)setPostButtonText:(id)a0;
- (void)setPostButtonVisible:(BOOL)a0;

@end
