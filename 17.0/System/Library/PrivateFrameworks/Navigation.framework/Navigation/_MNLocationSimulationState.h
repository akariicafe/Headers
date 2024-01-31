@class _MNLocationSimulationData;
@protocol _MNLocationSimulationStateDelegate;

@interface _MNLocationSimulationState : NSObject

@property (weak, nonatomic) id<_MNLocationSimulationStateDelegate> delegate;
@property (retain, nonatomic) _MNLocationSimulationData *data;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (double)_courseFromCoordinate:(struct { double x0; double x1; double x2; })a0 toCoordinate:(struct { double x0; double x1; double x2; })a1;
- (id)_locationWithCoordinate:(struct { double x0; double x1; double x2; })a0 course:(double)a1 speed:(double)a2;
- (struct { double x0; double x1; double x2; })_projectedCoordinateOffRouteFrom:(struct { double x0; double x1; double x2; })a0 toCoordinate:(struct { double x0; double x1; double x2; })a1 overTimeDelta:(double)a2 outCourse:(out double *)a3 outSpeed:(out double *)a4;
- (id)nextSimulatedLocationWithElapsedTime:(double)a0;
- (void)onEnterState;
- (void)onLeaveState;
- (void)updateWithRouteInfo:(id)a0;

@end
