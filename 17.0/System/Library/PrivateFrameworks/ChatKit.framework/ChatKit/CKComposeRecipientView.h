@protocol CKComposeRecipientViewDelegate;

@interface CKComposeRecipientView : CNComposeRecipientTextView

@property (weak, nonatomic) id<CKComposeRecipientViewDelegate> layoutDelegate;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (void)reset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)atomTextViewDidBecomeFirstResponder:(id)a0;

@end
