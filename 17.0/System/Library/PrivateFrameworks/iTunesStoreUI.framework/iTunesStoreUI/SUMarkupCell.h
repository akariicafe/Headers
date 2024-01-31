@class SUWebDocumentView;

@interface SUMarkupCell : SUTableCell {
    SUWebDocumentView *_webView;
}

- (void)setBackgroundColor:(id)a0;
- (void)dealloc;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setConfiguration:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
