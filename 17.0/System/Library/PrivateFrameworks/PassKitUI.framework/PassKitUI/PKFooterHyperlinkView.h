@class UIColor, NSString, PKHyperlinkTextView, NSAttributedString;

@interface PKFooterHyperlinkView : UITableViewHeaderFooterView <UITextViewDelegate> {
    PKHyperlinkTextView *_textView;
    NSString *_text;
}

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIColor *linkTextColor;
@property (copy, nonatomic) id /* block */ action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (id)text;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)addFooterStyleAttributes:(id)a0;

@end
