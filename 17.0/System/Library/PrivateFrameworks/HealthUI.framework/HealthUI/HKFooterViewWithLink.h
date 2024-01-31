@class NSString, UITextView;
@protocol UITextViewDelegate;

@interface HKFooterViewWithLink : UITableViewHeaderFooterView <UITextViewDelegate>

@property (retain, nonatomic) UITextView *footerTextView;
@property (weak, nonatomic) id<UITextViewDelegate> textViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultReuseIdentifier;

- (void)_setupConstraints;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithReuseIdentifier:(id)a0 markdown:(id)a1;
- (void)updateWithMarkdown:(id)a0;
- (id)_createAttributedMarkdown:(id)a0;
- (id)_createAttributedTextWithFullText:(id)a0 linkRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 link:(id)a2;
- (void)_setUpFooterTextViewWithBodyText:(id)a0 linkText:(id)a1 link:(id)a2;
- (void)_setUpFooterTextViewWithFullText:(id)a0 linkRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 link:(id)a2;
- (void)_setUpTextView;
- (id)getTextViewDelegate;
- (id)initWithReuseIdentifier:(id)a0 bodyText:(id)a1 linkText:(id)a2 link:(id)a3;
- (id)initWithReuseIdentifier:(id)a0 fullText:(id)a1 linkRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 link:(id)a3;

@end
