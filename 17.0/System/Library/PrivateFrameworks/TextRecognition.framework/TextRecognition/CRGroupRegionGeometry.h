@class NSObject, CRGroupRegion;
@protocol CRTextRegion;

@interface CRGroupRegionGeometry : NSObject

@property (readonly) CRGroupRegion *groupRegion;
@property (readonly) double diagonalDistance;
@property (readonly) NSObject<CRTextRegion> *firstTextRegion;

- (void).cxx_destruct;
- (double)_distanceFromQuad1:(id)a0 toQuad2:(id)a1;
- (double)calculateMinimumDistanceFromOtherGeometries:(id)a0;
- (id)initWithGroupRegion:(id)a0;
- (BOOL)isIsolatedClosestRegionDistance:(double)a0;
- (BOOL)shouldBeConsiderForFiltering;
- (BOOL)shouldBeConsideredForNearestDistanceCalculation;

@end
