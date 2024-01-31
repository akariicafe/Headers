@class UIResponder, UITextRange, DOMRange;
@protocol UITextInputPrivate;

@interface UITextSelection : NSObject

@property (readonly, weak, nonatomic) UIResponder<UITextInputPrivate> *document;
@property (retain, nonatomic) UITextRange *selectedRange;
@property (nonatomic) long long granularity;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isCommitting;
@property (readonly, nonatomic) BOOL willSelectionChange;
@property (retain, nonatomic) UITextRange *base;
@property (retain, nonatomic) UITextRange *initialExtent;
@property (readonly, nonatomic, getter=_domRange) DOMRange *domRange;

- (void)clearSelection;
- (void)setSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectAtEndOfDocument;
- (void)selectAll;
- (id)selectedText;
- (void)collapseSelection;
- (void)selectionChanged;
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;
- (void)aggressivelyExpandSelectionToSmartSelectionContainingCaretSelection;
- (void)alterSelection:(struct CGPoint { double x0; double x1; })a0 granularity:(long long)a1;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)wordContainingCaretSelection;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint { double x0; double x1; })a0 baseIsStart:(BOOL)a1;
- (void)dealloc;
- (void)alterSelectionGranularity:(long long)a0;
- (void)commit;
- (id)selectionRects;
- (void)setHybridSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRect;
- (BOOL)isRangedSelectionSpanningDocument;
- (BOOL)pointAtEndOfLine:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint { double x0; double x1; })a0 baseIsStart:(BOOL)a1 allowFlipping:(BOOL)a2;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (void)invalidate;
- (void)smartExtendRangedSelection:(int)a0 downstream:(BOOL)a1;
- (void)extendSelectionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setSelectionWithFirstPoint:(struct CGPoint { double x0; double x1; })a0 secondPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectAtBeginOfDocument;
- (void)setRangedSelectionBaseToCurrentSelection;
- (id)underlineRectsForRange:(id)a0;
- (void)setGranularRangedSelectionWithExtentPoint:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)offsetInMarkedText;
- (id)_boundedOrInvertedSelectionRangeForExtent:(id)a0 forPoint:(struct CGPoint { double x0; double x1; })a1 fromPosition:(id)a2 inDirection:(long long)a3;
- (BOOL)_allowsSelectionInversion;
- (void)moveCaretToBoundaryOfWhitespaceOrLine;
- (void).cxx_destruct;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)clearRangedSelectionInitialExtent;
- (BOOL)pointAtStartOfLine:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)hasEditableSelection;
- (id)initWithDocument:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })closestCaretRectForPoint:(struct CGPoint { double x0; double x1; })a0 inSelection:(BOOL)a1;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (void)increaseSelectionGranularity;
- (struct CGPoint { double x0; double x1; })clipPoint:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
