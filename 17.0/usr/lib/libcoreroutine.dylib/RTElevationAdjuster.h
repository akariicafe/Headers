@class RTElevationManager;

@interface RTElevationAdjuster : NSObject

@property (readonly, nonatomic) RTElevationManager *elevationManager;

- (void).cxx_destruct;
- (id)adjustCLLocation:(id)a0 elevation:(double)a1;
- (void)adjustElevation:(id)a0 handler:(id /* block */)a1;
- (void)adjustElevationForLocations:(id)a0 handler:(id /* block */)a1;
- (void)adjustElevationForSynthesizedLocations:(id)a0 handler:(id /* block */)a1;
- (void)adjustElevationForTripSegmentLocations:(id)a0 handler:(id /* block */)a1;
- (id)initWithElevationManager:(id)a0;
- (id)performElevationInterpolationOn:(id)a0 referenceElevations:(id)a1;
- (void)respondWithCLLocation:(id)a0 elevations:(id)a1 error:(id)a2 handler:(id /* block */)a3;
- (void)respondWithSynthesizedLocation:(id)a0 elevations:(id)a1 error:(id)a2 handler:(id /* block */)a3;
- (void)respondWithTripSegmentLocation:(id)a0 elevations:(id)a1 error:(id)a2 handler:(id /* block */)a3;

@end
