@interface CPRegion : CPChunk {
    BOOL isTextRegion;
    BOOL isImageRegion;
    BOOL isCompoundShape;
    CPRegion *nextRegion;
    int order;
    id link;
}

- (void)setOrder:(int)a0;
- (int)order;
- (void)dealloc;
- (void)setLink:(id)a0;
- (id)link;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)accept:(id)a0;
- (BOOL)isCompoundShape;
- (BOOL)isBodyZone;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isImageRegion;
- (BOOL)isIndivisible;
- (BOOL)isListItemRegion;
- (BOOL)isParagraphRegion;
- (BOOL)isRotated;
- (BOOL)isRowRegion;
- (BOOL)isShapeRegion;
- (BOOL)isTableCellRegion;
- (BOOL)isTextRegion;
- (BOOL)isZone;
- (id)nextRegion;
- (void)setIsCompoundShape:(BOOL)a0;
- (void)setIsImageRegion:(BOOL)a0;
- (void)setIsTextRegion:(BOOL)a0;
- (void)setNextRegion:(id)a0;

@end
