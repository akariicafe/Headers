@class CLLocation;

@interface TransitionStartStopLocations : NSObject

@property (readonly, nonatomic) CLLocation *startLocation;
@property (readonly, nonatomic) CLLocation *stopLocation;

- (void).cxx_destruct;
- (id)initWithStartLocation:(id)a0 stopLocation:(id)a1;

@end
