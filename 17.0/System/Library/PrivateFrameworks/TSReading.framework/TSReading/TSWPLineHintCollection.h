@interface TSWPLineHintCollection : TSPObject {
    struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; int x2; } *mHints;
    TSWPLineHintCollection *mContainingCollection;
}

@property (readonly, nonatomic) const struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; int x2; } *hints;
@property (readonly, nonatomic) unsigned long long hintsCount;
@property (readonly, nonatomic) BOOL valid;
@property (readonly, nonatomic) BOOL hasColumnIndices;

- (void)dealloc;
- (BOOL)checkSubCollectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)descriptionWithStorage:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })hintRangeForColumnIndex:(unsigned long long)a0 frameBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 charIndex:(unsigned long long)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })hintRangeForLineStartingAtHintIndex:(unsigned long long)a0;
- (id)initWithContainingCollection:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 context:(id)a2;
- (id)newSubCollectionWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)p_columnIndexForHintIndex:(unsigned long long)a0;

@end
