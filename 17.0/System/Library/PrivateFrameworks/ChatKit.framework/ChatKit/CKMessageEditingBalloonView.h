@class NSString, NSDictionary, CKMessageEditingBalloonTextView, NSAttributedString;
@protocol CKMessageEditingBalloonViewDelegate;

@interface CKMessageEditingBalloonView : CKTextBalloonView <UITextViewDelegate>

@property (retain, nonatomic) CKMessageEditingBalloonTextView *messageEditingBalloonTextView;
@property (retain, nonatomic) NSDictionary *typingAttributes;
@property (weak, nonatomic) id<CKMessageEditingBalloonViewDelegate> editingBalloonViewDelegate;
@property (readonly, nonatomic) NSAttributedString *currentCompositionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasBackground;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidChange:(id)a0;
- (BOOL)textViewShouldBeginEditing:(id)a0;

@end
