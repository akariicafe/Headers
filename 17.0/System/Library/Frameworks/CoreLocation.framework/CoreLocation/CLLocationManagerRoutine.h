@class _CLLocationManagerRoutineProxy;
@protocol CLInertialDataManagerDelegate, CLLocationManagerDelegate;

@interface CLLocationManagerRoutine : NSObject

@property (retain, nonatomic) _CLLocationManagerRoutineProxy *locationManagerRoutineProxy;
@property (nonatomic) id<CLLocationManagerDelegate> delegate;
@property (nonatomic) id<CLInertialDataManagerDelegate> inertialDelegate;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void)dealloc;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;

@end
