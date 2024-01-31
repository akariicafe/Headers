@class PDFPageRangePrivate;

@interface PDFPageRange : NSObject {
    PDFPageRangePrivate *_private;
}

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)page;
- (void)setPage:(id)a0;
- (id)description;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
