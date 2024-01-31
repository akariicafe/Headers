@interface GKRTree : NSObject {
    void *_cRTree;
}

@property unsigned long long queryReserve;

+ (id)treeWithMaxNumberOfChildren:(unsigned long long)a0;

- (id)init;
- (void)dealloc;
- (void)addElement:(id)a0 boundingRectMin:(SEL)a1 boundingRectMax:(id)a2 splitStrategy:(long long)a3;
- (id)elementsInBoundingRectMin:(id)a0 rectMax:(SEL)a1;
- (id)initWithMaxNumberOfChildren:(unsigned long long)a0;
- (void)removeElement:(id)a0 boundingRectMin:(SEL)a1 boundingRectMax:(id)a2;

@end
