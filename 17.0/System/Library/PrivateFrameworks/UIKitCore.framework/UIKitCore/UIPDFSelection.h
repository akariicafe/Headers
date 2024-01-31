@class UIPDFPage;

@interface UIPDFSelection : NSObject {
    UIPDFPage *_page;
    struct CGPDFSelection { } *_cgSelection;
    BOOL _dirty;
    struct __CFString { } *_string;
    long long _cachedStartIndex;
    long long _cachedEndIndex;
}

@property (nonatomic) struct { long long location; long long length; } stringRange;

- (id)page;
- (id)init;
- (void)dealloc;
- (id)textAtIndex:(unsigned long long)a0;
- (unsigned long long)startIndex;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (id)string;
- (id)description;
- (id)initWithSelection:(id)a0;
- (id)archive;
- (struct { long long x0; long long x1; })extent;
- (unsigned long long)endIndex;
- (BOOL)isEmpty;
- (id)initWithPage:(id)a0 fromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (struct CGPDFSelection { } *)CGSelection;
- (id)attributedStringAtIndex:(unsigned long long)a0;
- (double)baseLineAtIndex:(unsigned long long)a0;
- (id)containingTextLine;
- (void)copyToPasteboard;
- (unsigned long long)extendAtEnd:(unsigned long long)a0;
- (unsigned long long)extendAtStart:(unsigned long long)a0;
- (void)extendToParagraph;
- (BOOL)getBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a1 index:(unsigned long long)a2;
- (id)htmlAtIndex:(unsigned long long)a0;
- (id)initWithPage:(id)a0 cgSelection:(struct CGPDFSelection { } *)a1;
- (id)initWithPage:(id)a0 fromArchive:(id)a1;
- (BOOL)isNonEmpty;
- (BOOL)isWord;
- (unsigned long long)numberOfRectangles;
- (struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })rectangleAtIndex:(unsigned long long)a0 scale:(double)a1 inset:(double)a2;
- (id)selectionExtendedToLineBoundaries;

@end
