@class TIDocumentState, RTITextStyling, RTIColor, NSMutableData, NSAttributedString, RTIDocumentRequest;

@interface RTIDocumentState : NSObject <NSSecureCoding, NSCopying> {
    BOOL _clearCanSuggestOnNextDocumentState;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableData *_documentRects;
@property (readonly, nonatomic) RTIDocumentRequest *request;
@property (retain, nonatomic) TIDocumentState *documentState;
@property (nonatomic) BOOL hasText;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } caretRectInWindow;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } firstSelectionRectInWindow;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clientFrameInWindow;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } firstSelectionRectInEntitySpace;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clientFrameInEntitySpace;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedTextRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } markedTextRange;
@property (nonatomic) BOOL originatedFromSource;
@property (nonatomic) BOOL canSuggestSupplementalItemsForCurrentSelection;
@property (copy, nonatomic) NSAttributedString *textCheckingAnnotatedString;
@property (retain, nonatomic) RTITextStyling *autocorrectBubbleStyling;
@property (retain, nonatomic) RTIColor *autocorrectTextColor;
@property (retain, nonatomic) RTIColor *autocorrectTextBackgroundColor;
@property (retain, nonatomic) RTIColor *insertionPointColor;

+ (id)documentStateWithRequest:(id)a0;

- (id)init;
- (unsigned long long)characterIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 granularity:(long long)a2;
- (void)addTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 granularity:(long long)a2 isVertical:(BOOL)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })deltaForSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)rectsForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withGranularity:(long long)a1;
- (void)resetTextRects;
- (void)_enumerateDocumentRectsWithOptions:(unsigned long long)a0 block:(id /* block */)a1;
- (struct RTIRange { long long x0; long long x1; })deltaRangeForSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)enumerateRectsWithOptions:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 granularity:(long long)a2 block:(id /* block */)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 actualRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withGranularity:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withGranularity:(long long)a1 isVerticalOut:(BOOL *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withGranularity:(long long)a1 isVerticalOut:(BOOL *)a2 actualRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;

@end
