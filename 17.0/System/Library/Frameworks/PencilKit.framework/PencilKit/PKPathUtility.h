@interface PKPathUtility : NSObject

+ (double)averageDistanceForEdge:(struct Edge { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; })a0 withPoints:(const void *)a1;
+ (id)bezierPathFromPoints:(const void *)a0;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; })centripetalCatmullRomPointsFromConvexHull:(const void *)a0 alpha:(double)a1 granularity:(double)a2;
+ (void)convexHull:(void *)a0 forPoints:(const void *)a1;
+ (BOOL)edge:(struct Edge { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; })a0 intersectsEdge:(struct Edge { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; })a1;
+ (BOOL)edgeSet:(const void *)a0 containsEdge:(struct Edge { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; })a1;
+ (struct Edge { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; })longestEdgeInHull:(const void *)a0 atIndex:(int *)a1 visitedEdges:(const void *)a2;
+ (BOOL)newEdgeWithPoint:(struct CGPoint { double x0; double x1; })a0 betweenEdge:(struct Edge { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; })a1 intersectsOtherEdgesInHull:(const void *)a2;
+ (void)openConvexHullToConcave:(void *)a0 points:(const void *)a1 minAngleFactor:(double)a2 maxLengthThreshold:(double)a3 edgeRemovalConstant:(double)a4;
+ (struct CGPoint { double x0; double x1; })pointWithMinAngleForEdge:(struct Edge { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; })a0 fromPoints:(const void *)a1 minAngle:(double *)a2;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; })smoothedHullForPoints:(const void *)a0 alpha:(double)a1 granularity:(double)a2 minAngleFactor:(double)a3 maxLengthThreshold:(double)a4 edgeRemovalConstant:(double)a5;
+ (void)smoothedHullForPoints:(const void *)a0 completion:(id /* block */)a1;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; })unorderedSimplifiedPointsFromPoints:(const void *)a0 factor:(double)a1;
+ (BOOL)vector:(const void *)a0 containsPoint:(struct CGPoint { double x0; double x1; })a1;

@end
