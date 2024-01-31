@class NSMutableArray, CPPage;

@interface CPZoneBorder : NSObject <NSCopying, CPCopying> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
    CPPage *page;
    NSMutableArray *ownerArray;
    NSMutableArray *graphicObjects;
    NSMutableArray *neighbors;
    NSMutableArray *intersections;
    BOOL isHorizontal;
    BOOL hasForwardVector;
    BOOL hasBackwardVector;
    double overhangMin;
    double overhangMax;
}

+ (void)addIntersectionBetweenBorder:(id)a0 andBorder:(id)a1 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (int)clockwiseWindingNumberOfShapeWithBorders:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extendRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (void)outerVertices:(struct CGPoint { double x0; double x1; } *)a0 fromBorders:(id)a1 swollenBy:(double)a2;
+ (void)removeIntersectionBetweenBorder:(id)a0 andBorder:(id)a1;

- (BOOL)isVertical;
- (id)page;
- (id)init;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)combine:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compareYBounds:(id)a0;
- (void)addToArray:(id)a0;
- (long long)compareXBounds:(id)a0;
- (void)addGraphicObject:(id)a0;
- (void)addNeighbor:(id)a0;
- (void)removeFromArray;
- (void)removeLooseThreadsStartingFrom:(id)a0;
- (void)addToArray:(id)a0 atIndex:(unsigned int)a1;
- (void)setSide:(int)a0 ofPage:(id)a1;
- (BOOL)continues:(id)a0;
- (id)copyWithoutIntersections;
- (BOOL)crosses:(id)a0;
- (BOOL)extractCycleTo:(id)a0 goingForward:(BOOL)a1 startingAtIndex:(unsigned int)a2;
- (BOOL)extractCycleTo:(id)a0 goingForward:(BOOL)a1 throughIntersectionIndex:(unsigned int)a2 returningTo:(id)a3 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (id)getNextBorder:(unsigned int)a0;
- (id)graphicObjectAtIndex:(unsigned int)a0;
- (unsigned int)graphicObjectCount;
- (id)graphicObjects;
- (BOOL)hasBackwardVector;
- (BOOL)hasClockwiseVectorAtIndex:(unsigned int)a0 startingForward:(BOOL)a1;
- (BOOL)hasCounterclockwiseVectorAtIndex:(unsigned int)a0 startingForward:(BOOL)a1;
- (BOOL)hasForwardVector;
- (BOOL)hasNeighborShape:(id)a0;
- (BOOL)hasNeighborShape:(id)a0 atSide:(int)a1;
- (BOOL)hasVectorGoingForward:(BOOL)a0 startingAtIndex:(unsigned int *)a1;
- (unsigned int)indexOfIntersectionWith:(id)a0;
- (id)initSuper;
- (id)initWithGraphicObject:(id)a0;
- (void)instantiateVectors;
- (unsigned int)intersectionCount;
- (BOOL)intersectsWith:(id)a0 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (BOOL)isHorizontal;
- (id)neighborAtIndex:(unsigned int)a0;
- (unsigned int)neighborCount;
- (id)ownerArray;
- (void)removeFromArrayAtIndex:(unsigned int)a0;
- (void)removeGraphicObjectAtIndex:(unsigned int)a0;
- (void)removeNeighborAtIndex:(unsigned int)a0;
- (void)setHasBackwardVector:(BOOL)a0;
- (void)setHasForwardVector:(BOOL)a0;
- (void)trimToLastIntersections;
- (BOOL)windsClockwiseOnto:(id)a0;
- (long long)zOrder;

@end
