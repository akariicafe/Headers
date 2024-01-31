@class GVGraph, NSMutableArray;

@interface GVLayout : NSObject {
    unsigned long long *savedOrder;
    unsigned long long currentCrossings;
}

@property (nonatomic) GVGraph *graph;
@property (nonatomic) int direction;
@property (nonatomic) struct CGSize { double width; double height; } separation;
@property (retain, nonatomic) NSMutableArray *selfEdges;
@property (retain, nonatomic) NSMutableArray *ranks;

+ (struct CGSize { double x0; double x1; })layoutGraph:(id)a0 withDirection:(int)a1 separation:(struct CGSize { double x0; double x1; })a2;

- (void)dealloc;
- (void)transpose;
- (void)initializeRanks;
- (void)weightedMedian:(unsigned long long)a0;
- (void)_removeCycleDFS:(id)a0 visistedNodes:(id)a1 nodesInStack:(id)a2;
- (void)initializeOrder;
- (void)medianPosition:(unsigned long long)a0;
- (void)removeSelfEdges;
- (void)assignCoordinates;
- (void)assignNodeCoordinates;
- (void)assignNodePriorities;
- (void)assignRankCoordinates;
- (void)assignRanks;
- (void)balanceRanks;
- (void)buildRankIterators;
- (void)commitOrder;
- (unsigned long long)crossings;
- (struct CGSize { double x0; double x1; })doLayout:(id)a0 direction:(int)a1 separation:(struct CGSize { double x0; double x1; })a2;
- (void)initializeNodeCoordinates;
- (void)makeFeasibleTree;
- (void)medianSort:(id)a0 withRespectTo:(id)a1;
- (unsigned long long)medianValueOf:(id)a0 withRespectTo:(id)a1;
- (void)minimizeCutValues;
- (void)normalizeRanks;
- (void)orderVertices;
- (void)packCutX:(unsigned long long)a0;
- (void)packCutY:(unsigned long long)a0;
- (void)removeCycles;
- (void)restoreOrder;
- (void)saveOrder;
- (void)straightenX;
- (void)straightenY;
- (void)undoRemoveCycles;
- (void)undoRemoveSelfEdges;

@end
