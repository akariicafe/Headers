@class NSArray;

@interface UITextViewPrintFormatter : UIViewPrintFormatter {
    struct { unsigned char initializedUsedRects : 1; } _textViewPrintFormatterFlags;
    NSArray *_pageData;
}

- (id)color;
- (void)setAttributedText:(id)a0;
- (void)setTextAlignment:(long long)a0;
- (id)_textView;
- (id)font;
- (long long)textAlignment;
- (id)attributedText;
- (void)setColor:(id)a0;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (void)setFont:(id)a0;
- (long long)_recalcPageCount;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPageAtIndex:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPageAtIndex:(long long)a0;
- (id)_pageData;

@end
