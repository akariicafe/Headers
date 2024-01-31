@class CPMemoryOwner;

@interface CPCharSequence : NSObject <NSCopying, CPCopying, CPDisposable> {
    unsigned int length;
    struct CPPDFChar **charArray;
    unsigned int previousSize;
    unsigned int size;
    CPMemoryOwner *sharedMemory;
    BOOL wasMerged;
}

- (void)dealloc;
- (void)dispose;
- (unsigned int)length;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)map:(void /* function */ *)a0 whereNeighborsWith:(id)a1 passing:(void *)a2;
- (void)addChar:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGSize { double x0; double x1; } x6; struct CPPDFStyle *x7; double x8; int x9; long long x10; } *)a0;
- (void)addCharsFromSequence:(id)a0;
- (void)resize:(unsigned int)a0;
- (void)addChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGSize { double x0; double x1; } x6; struct CPPDFStyle *x7; double x8; int x9; long long x10; } *)a0 length:(unsigned int)a1 ifTrue:(void /* function */ *)a2 passing:(void *)a3;
- (double)averageRotation;
- (void)addChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGSize { double x0; double x1; } x6; struct CPPDFStyle *x7; double x8; int x9; long long x10; } *)a0 length:(unsigned int)a1;
- (void)sortBy:(void /* function */ *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsFrom:(unsigned int)a0 length:(unsigned int)a1;
- (struct CPPDFChar **)charArray;
- (struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGSize { double x0; double x1; } x6; struct CPPDFStyle *x7; double x8; int x9; long long x10; } *)charAtIndex:(unsigned int)a0;
- (void)copyToSubsequence:(id)a0 from:(unsigned int)a1 length:(unsigned int)a2;
- (void)copyToSubsequence:(id)a0 ifTrue:(void /* function */ *)a1 passing:(void *)a2;
- (id)initSuper;
- (id)initWithChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGSize { double x0; double x1; } x6; struct CPPDFStyle *x7; double x8; int x9; long long x10; } *)a0 length:(unsigned int)a1;
- (id)initWithSizeFor:(unsigned int)a0;
- (BOOL)map:(void /* function */ *)a0 passing:(void *)a1;
- (BOOL)mapToPairs:(void /* function */ *)a0 passing:(void *)a1;
- (BOOL)mapToPairsWithIndex:(void /* function */ *)a0 passing:(void *)a1;
- (BOOL)mapWithIndex:(void /* function */ *)a0 from:(unsigned int)a1 length:(unsigned int)a2 passing:(void *)a3;
- (BOOL)mapWithIndex:(void /* function */ *)a0 passing:(void *)a1;
- (void)merge:(id)a0 by:(void /* function */ *)a1;
- (void)mergeByAnchorXIncreasingYDecreasing:(id)a0;
- (void)mergeByAnchorYDecreasingXIncreasing:(id)a0;
- (id)newSubsequenceFrom:(unsigned int)a0 length:(unsigned int)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedBounds;
- (void)removeAllChars;
- (void)removeChar;
- (void)removeCharAtIndex:(unsigned int)a0;
- (void)removeFrom:(unsigned int)a0;
- (BOOL)removeSubsequences:(id)a0 whereTrue:(void /* function */ *)a1 passing:(void *)a2;
- (BOOL)removeToSubsequence:(id)a0 ifTrue:(void /* function */ *)a1 passing:(void *)a2;
- (void)replaceCharAtIndex:(unsigned int)a0 withChar:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGSize { double x0; double x1; } x6; struct CPPDFStyle *x7; double x8; int x9; long long x10; } *)a1;
- (void)sortByAnchorXIncreasingYDecreasing;
- (void)sortByAnchorYDecreasingXIncreasing;
- (void)sortByAnchorYDecreasingXIncreasingApprox;
- (void)splitToSubsequences:(id)a0 whereTrue:(void /* function */ *)a1 passing:(void *)a2;
- (BOOL)wasMerged;

@end
