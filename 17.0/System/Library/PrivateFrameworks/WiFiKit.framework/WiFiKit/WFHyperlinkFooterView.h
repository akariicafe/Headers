@class NSString, NSURL, UITextView;

@interface WFHyperlinkFooterView : UIView <UITextViewDelegate> {
    UITextView *_textView;
    NSString *_text;
    NSURL *_URL;
    struct _NSRange { unsigned long long location; unsigned long long length; } _linkRange;
}

@property (retain) NSString *text;
@property struct _NSRange { unsigned long long x0; unsigned long long x1; } linkRange;
@property (weak) id target;
@property SEL action;
@property (retain) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_linkify;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textInsets;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)preferredHeightForWidth:(double)a0;

@end
