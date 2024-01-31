@class UIPanGestureRecognizer, NSString, NSAttributedString, UITapGestureRecognizer;
@protocol CKBalloonTextViewInteractionDelegate;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate, CKBalloonTextViewProtocol, UIGestureRecognizerDelegate, UITextViewDelegate>

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIPanGestureRecognizer *dragGestureRecognizer;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } _selectedRange;
@property (nonatomic) char selectionColorType;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKBalloonTextViewInteractionDelegate> interactionDelegate;
@property (nonatomic, getter=isFakeSelected) BOOL fakeSelected;
@property (nonatomic) BOOL shouldAdjustInsetsForMinimumSize;

+ (struct CGSize { double x0; double x1; })_textKit1_sizeThatFits:(struct CGSize { double x0; double x1; })a0 attributedText:(id)a1 maximumNumberOfLines:(unsigned long long)a2 lineBreakMode:(long long)a3 isReplyPreview:(BOOL)a4 outTextAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a5 outIsSingleLine:(BOOL *)a6;
+ (struct CGSize { double x0; double x1; })_textKit2_sizeThatFits:(struct CGSize { double x0; double x1; })a0 attributedText:(id)a1 maximumNumberOfLines:(unsigned long long)a2 lineBreakMode:(long long)a3 isReplyPreview:(BOOL)a4 outTextAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a5 outIsSingleLine:(BOOL *)a6;
+ (void)_commonTextViewContainerSetup:(id)a0;
+ (id)makeTextView;
+ (id)makeTextViewUsingTextKit1;
+ (id)makeTextViewUsingTextKit2;
+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 attributedText:(id)a1 maximumNumberOfLines:(unsigned long long)a2 lineBreakMode:(long long)a3 isReplyPreview:(BOOL)a4 outTextAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a5 outIsSingleLine:(BOOL *)a6;

- (void)_interactionStoppedFromPreviewItemController:(id)a0;
- (id)selectionHighlightColor;
- (BOOL)canBecomeFocused;
- (void)registerForEvents;
- (BOOL)resignFirstResponder;
- (void)copy:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)_interactionStartedFromPreviewItemController:(id)a0;
- (void)didMoveToWindow;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)_showsEditMenu;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)viewDidMoveToSuperview;
- (void)_displayAttributedTextIfPossible:(id)a0 applyHyphenation:(BOOL)a1;
- (id)_fakeSelectionBackgroundColor;
- (void)_removeFakeSelectionBackgroundColor;
- (void)_setFakeSelectionBackgroundColor;
- (void)_setFakeSelectionBackgroundColorForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_textWithHyphenationAppliedForAttributedText:(id)a0;
- (void)_updateFakeSelectionBackgroundColor:(id)a0;
- (void)panGestureRecognized:(id)a0;
- (void)setBalloonTextSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 isSingleLine:(BOOL *)a2 isReplyPreview:(BOOL)a3;

@end
