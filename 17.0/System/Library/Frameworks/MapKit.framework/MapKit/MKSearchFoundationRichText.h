@interface MKSearchFoundationRichText : SFRichText

@property (copy, nonatomic) id /* block */ completionHandlers;

- (BOOL)isRichTextResolved;
- (void)setFormattedTextPieces:(id)a0;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (void)loadRichTextWithCompletionHandler:(id /* block */)a0;
- (id)initWithString:(id)a0;
- (id)initRichTextTitleWithMapItem:(id)a0 resultsType:(unsigned long long)a1;
- (void)_invokeCompletionHandlers;

@end
