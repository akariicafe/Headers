@interface PaperKit.CRTextStorage : CRTextStorageBase {
    void /* unknown type, empty encoding */ viewAttributedString;
    void /* unknown type, empty encoding */ mergeableString;
    void /* unknown type, empty encoding */ darkMode;
    void /* unknown type, empty encoding */ isFixingAttributes;
}

- (id)init;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (id)initWithAttributedString:(id)a0;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentsOfMarkdownFileAtURL:(id)a0 options:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (id)initWithData:(id)a0 options:(id)a1 documentAttributes:(id *)a2 error:(id *)a3;
- (id)initWithMarkdown:(id)a0 options:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (id)initWithMarkdownString:(id)a0 options:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (id)mutableAttributedString;
- (void)fixAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 options:(id)a1 documentAttributes:(id *)a2 error:(id *)a3;
- (id)initWithFileURL:(id)a0 options:(id)a1 documentAttributes:(id *)a2 error:(id *)a3;
- (id)initWithAttachment:(id)a0 attributes:(id)a1;

@end
