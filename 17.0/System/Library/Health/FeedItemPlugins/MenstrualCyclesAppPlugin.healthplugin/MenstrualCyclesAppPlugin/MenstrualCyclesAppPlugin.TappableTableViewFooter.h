@interface MenstrualCyclesAppPlugin.TappableTableViewFooter : UITableViewHeaderFooterView <UITextViewDelegate> {
    void /* unknown type, empty encoding */ footerTextView;
    void /* unknown type, empty encoding */ highlightedText;
    void /* unknown type, empty encoding */ tapCompletion;
}

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithCoder:(id)a0;

@end
