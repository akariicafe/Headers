@class NSArray, NSMutableArray, TSDBezierNode;

@interface TSDEditableBezierPathSource : TSDPathSource <TSDRealignablePathSource, TSDMixing> {
    unsigned long long mActiveSubpath;
    BOOL mHasLockedFlipTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mLockedFlipTransform;
}

@property (retain, nonatomic) NSMutableArray *subpaths;
@property (retain, nonatomic) NSMutableArray *nodes;
@property (retain, nonatomic) NSArray *nodeTypes;
@property (readonly, nonatomic) TSDBezierNode *firstNode;
@property (readonly, nonatomic) TSDBezierNode *lastNode;
@property (nonatomic, getter=isClosed) BOOL closed;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) BOOL closeIfEndpointsAreEqual;
@property (readonly, nonatomic) BOOL hasSelectedNode;
@property (readonly, nonatomic) BOOL allNodesSelected;
@property (readonly, nonatomic) BOOL canDeleteSelectedNodes;
@property (readonly, nonatomic) BOOL deletingSelectedNodesWillDeleteShape;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } nodeBounds;
@property (readonly, nonatomic) BOOL isCompound;
@property (readonly, nonatomic) struct CGPath { } *subpathForSelection;

+ (id)editableBezierPathSource;
+ (id)editableBezierPathSourceWithBezierPath:(id)a0;
+ (id)editableBezierPathSourceWithPathSource:(id)a0;

- (id)init;
- (void)setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (void)removeNode:(id)a0;
- (void)addNode:(id)a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isCircular;
- (void)removeLastNode;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isRectangular;
- (void)closePath;
- (void)lineToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)moveToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setBezierPath:(id)a0;
- (void)curveToPoint:(struct CGPoint { double x0; double x1; })a0 controlPoint1:(struct CGPoint { double x0; double x1; })a1 controlPoint2:(struct CGPoint { double x0; double x1; })a2;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)adjustGeometryForAlignToOrigin:(id)a0;
- (void)sharpenAllNodes;
- (void)alignToOrigin;
- (id)bezierNodeUnderPoint:(struct CGPoint { double x0; double x1; })a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 andTolerance:(double)a2 returningType:(long long *)a3;
- (BOOL)bezierPathUnderPoint:(struct CGPoint { double x0; double x1; })a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 tolerance:(double)a2;
- (id)bezierPathWithoutFlips;
- (BOOL)canCloseSelectedNodes;
- (BOOL)canConnectSelectedNodes;
- (BOOL)canCutAtSelectedNodes;
- (void)closeSelectedNodes;
- (void)connectSelectedNodes;
- (void)convertToHobby;
- (void)cutAtSelectedNodes;
- (void)deleteSelectedEdges;
- (void)deleteSelectedNodes;
- (void)deleteSelectedNodesForced:(BOOL)a0;
- (void)deselectAllNodes;
- (double)distanceToPoint:(struct CGPoint { double x0; double x1; })a0 subpathIndex:(unsigned long long *)a1 elementIndex:(unsigned long long *)a2 tValue:(double *)a3 threshold:(double)a4;
- (id)insertNodeAtPoint:(struct CGPoint { double x0; double x1; })a0 tolerance:(double)a1;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;
- (id)nodeAfterNode:(id)a0;
- (id)nodePriorToNode:(id)a0;
- (void)offsetSelectedEdgesByDelta:(struct CGPoint { double x0; double x1; })a0;
- (void)offsetSelectedNodesByDelta:(struct CGPoint { double x0; double x1; })a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })pathFlipTransform;
- (struct CGPath { } *)pathWithoutFlips;
- (Class)preferredRepClass;
- (void)reverseDirection;
- (void)selectAllNodes;
- (void)selectSubpathForNode:(id)a0 toggle:(BOOL)a1;
- (void)setLockedFlipTransform:(BOOL)a0;
- (void)smoothAllNodes;
- (void)smoothCurveToPoint:(struct CGPoint { double x0; double x1; })a0 controlPoint1:(struct CGPoint { double x0; double x1; })a1 controlPoint2:(struct CGPoint { double x0; double x1; })a2;
- (void)smoothNode:(id)a0;
- (id)splitEdge:(long long)a0 at:(double)a1 fromSubpath:(long long)a2;
- (void)splitSelectedEdges;
- (void)splitSelectedNodes;
- (id)subpathsForConnectingUsingFirstSubpathFirstNode:(BOOL *)a0 andSecondPathFirstNode:(BOOL *)a1;
- (void)toggleNode:(id)a0 toType:(int)a1 prevNode:(id)a2 nextNode:(id)a3;
- (void)toggleSelectedNodesToType:(int)a0;

@end
