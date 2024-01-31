@class CPShape;

@interface CPZoneBorderNeighbor : NSObject <NSCopying, CPCopying> {
    CPShape *neighborShape;
    int shapeSide;
}

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initSuper;
- (id)neighborShape;
- (void)setNeighborShape:(id)a0;
- (void)setShapeSide:(int)a0;
- (int)shapeSide;

@end
