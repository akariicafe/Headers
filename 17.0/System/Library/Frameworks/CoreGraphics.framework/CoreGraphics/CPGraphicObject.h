@class CPParagraph, CPTextLine, CPChunk;
@protocol CPGraphicUser;

@interface CPGraphicObject : CPChunk {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } renderedBounds;
    BOOL isInZoneBorder;
    int zoneGraphicType;
    CPTextLine *anchoringTextLine;
    CPChunk<CPGraphicUser> *user;
}

@property (nonatomic) unsigned int clipIndex;
@property (retain, nonatomic) CPParagraph *anchoringParagraph;

- (id)user;
- (id)init;
- (void)dealloc;
- (void)setUser:(id)a0;
- (BOOL)isNarrow;
- (BOOL)isVisible;
- (unsigned short)unicode;
- (id)anchoringTextLine;
- (int)zoneGraphicType;
- (BOOL)canBeContainer;
- (BOOL)isInZoneBorder;
- (BOOL)isIndivisible;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderedBounds;
- (void)setAnchoringTextLine:(id)a0;
- (void)setIsInZoneBorder:(BOOL)a0;
- (void)setZoneGraphicType:(int)a0;

@end
