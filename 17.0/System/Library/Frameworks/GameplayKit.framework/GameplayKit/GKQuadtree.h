@interface GKQuadtree : NSObject {
    void *_cQuadTree;
}

+ (id)quadtreeWithBoundingQuad:(struct GKQuad { })a0 minimumCellSize:(float)a1;

- (id)init;
- (void)dealloc;
- (BOOL)removeElement:(id)a0;
- (id)elementsInQuad:(struct GKQuad { })a0;
- (id)addElement:(SEL)a0 withPoint:(id)a1;
- (id)initWithBoundingQuad:(struct GKQuad { })a0 minimumCellSize:(float)a1;
- (id)addElement:(id)a0 withQuad:(struct GKQuad { })a1;
- (id)elementsAtPoint:(SEL)a0;
- (BOOL)removeElement:(id)a0 withNode:(id)a1;

@end
