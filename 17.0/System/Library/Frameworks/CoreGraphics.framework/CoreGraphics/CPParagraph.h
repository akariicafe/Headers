@class CPParagraphListItem;

@interface CPParagraph : CPRotatedRegion {
    BOOL noIndentation;
    BOOL below;
    unsigned long long alignment;
    BOOL hasDropCap;
    id flowProperties;
    double preformatWidth;
}

@property (retain, nonatomic) CPParagraphListItem *listItem;

- (id)init;
- (void)setAlignment:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)index;
- (unsigned long long)alignment;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)accept:(id)a0;
- (void)explode;
- (double)selectionBottom;
- (BOOL)below;
- (id)flowProperties;
- (BOOL)hasDropCap;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isImageRegion;
- (BOOL)isListItemRegion;
- (BOOL)isParagraphRegion;
- (BOOL)isPreformattedWithUnitWidth:(double *)a0;
- (BOOL)isRowRegion;
- (BOOL)isShapeRegion;
- (BOOL)isTextRegion;
- (BOOL)noIndentation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })reducedBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderedBounds;
- (void)setBelow:(BOOL)a0;
- (void)setFlowProperties:(id)a0;
- (void)setHasDropCap:(BOOL)a0;
- (void)setIsImageRegion:(BOOL)a0;
- (void)setIsTextRegion:(BOOL)a0;
- (void)setNoIndentation:(BOOL)a0;

@end
