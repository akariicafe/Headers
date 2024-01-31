@class NSString, UITextView, NSAttributedString;

@interface NTKCFaceDetailDescriptionCell : NTKCDetailTableViewCell <UITextViewDelegate>

@property (retain, nonatomic) UITextView *textView;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (id)init;
- (double)rowHeight;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)layoutSubviews;
- (id)_fontDescriptor;
- (void)_fontSizeDidChange;

@end
