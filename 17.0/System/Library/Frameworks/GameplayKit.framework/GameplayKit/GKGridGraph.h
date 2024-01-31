@interface GKGridGraph : GKGraph {
    void *_cGridGraph;
}

@property (readonly, nonatomic) void /* unknown type, empty encoding */ gridOrigin;
@property (readonly, nonatomic) unsigned long long gridWidth;
@property (readonly, nonatomic) unsigned long long gridHeight;
@property (readonly, nonatomic) BOOL diagonalsAllowed;

+ (BOOL)supportsSecureCoding;
+ (id)graphFromGridStartingAt:(SEL)a0 width:(int)a1 height:(int)a2 diagonalsAllowed:(BOOL)a3;
+ (id)graphFromGridStartingAt:(SEL)a0 width:(int)a1 height:(int)a2 diagonalsAllowed:(BOOL)a3 nodeClass:(Class)a4;

- (void)encodeWithCoder:(id)a0;
- (void)removeNodes:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initFromGridStartingAt:(SEL)a0 width:(int)a1 height:(int)a2 diagonalsAllowed:(BOOL)a3 nodeClass:(Class)a4;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)a0;
- (void *)cGridGraph;
- (void)connectNodeToAdjacentNodes:(id)a0;
- (id)initFromGridStartingAt:(SEL)a0 width:(int)a1 height:(int)a2 diagonalsAllowed:(BOOL)a3;
- (void *)makeCGraph;
- (id)nodeAtGridPosition:(SEL)a0;
- (id)nodeAtGridPositionNoNilCheck:(SEL)a0;

@end
