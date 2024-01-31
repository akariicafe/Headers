@class NSTextStorage;

@interface ICPreviewLayoutManager : ICBaseLayoutManager

@property (nonatomic) unsigned long long maxCharacterCount;
@property (retain, nonatomic) NSTextStorage *strongTextStorage;
@property (nonatomic, getter=isInsideSystemPaper) BOOL insideSystemPaper;

- (void).cxx_destruct;
- (id)linkAttributesForLink:(id)a0 forCharacterAtIndex:(unsigned long long)a1;
- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)drawTodoItemForListRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 paragraphStyle:(id)a1 atOrigin:(struct CGPoint { double x0; double x1; })a2;
- (void)drawTodosForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atOrigin:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithNote:(id)a0 maxCharacterCount:(unsigned long long)a1 textContainer:(id)a2 textController:(id)a3;
- (id)todoImageForParagraphStyle:(id)a0;

@end
