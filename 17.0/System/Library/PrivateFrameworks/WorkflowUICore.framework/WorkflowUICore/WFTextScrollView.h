@class NSString, UITextView, NSObject;
@protocol UITextViewDelegate;

@interface WFTextScrollView : UIScrollView <UITextViewDelegate>

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (readonly, nonatomic) UITextView *textView;
@property (nonatomic, getter=isAdjustmentEnabled) BOOL adjustmentEnabled;
@property (weak, nonatomic) NSObject<UITextViewDelegate> *textViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFirstResponder;
- (BOOL)canBecomeFocused;
- (BOOL)resignFirstResponder;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithTextView:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textUpdated;

@end
