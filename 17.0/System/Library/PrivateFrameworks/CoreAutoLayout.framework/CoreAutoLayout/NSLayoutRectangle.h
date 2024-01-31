@class NSLayoutPoint;

@interface NSLayoutRectangle : NSLayoutRect

@property (readonly, copy) NSLayoutPoint *centerPoint;

+ (id)rectangleWithCenter:(id)a0 width:(id)a1 height:(id)a2;
+ (id)rectangleWithLeading:(id)a0 top:(id)a1 trailing:(id)a2 bottom:(id)a3;
+ (id)rectangleWithLeading:(id)a0 top:(id)a1 width:(id)a2 height:(id)a3;

- (id)constraintsContainingWithinRectangle:(id)a0;
- (id)constraintsEqualToRectangle:(id)a0;
- (id)rectangleByInsettingTop:(double)a0 leading:(double)a1 bottom:(double)a2 trailing:(double)a3;
- (id)rectangleByInsettingTopByDimension:(id)a0 leadingByDimension:(id)a1 bottomByDimension:(id)a2 trailingByDimension:(id)a3;
- (id)rectangleBySlicingWithDimension:(id)a0 fromEdge:(long long)a1;
- (id)rectangleBySlicingWithDistance:(double)a0 fromEdge:(long long)a1;
- (id)rectangleBySlicingWithProportion:(double)a0 fromEdge:(long long)a1;
- (id)rectangleWithName:(id)a0;

@end
