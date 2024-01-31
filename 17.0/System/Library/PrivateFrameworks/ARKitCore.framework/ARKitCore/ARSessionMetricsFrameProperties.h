@class NSArray, ARGeoTrackingStatus, ARVLStateData, ARWorldTrackingState, CLLocation, ARCamera;

@interface ARSessionMetricsFrameProperties : NSObject

@property (readonly, nonatomic) ARCamera *camera;
@property (readonly, nonatomic) ARWorldTrackingState *worldTrackingState;
@property (readonly, nonatomic) NSArray *anchors;
@property (readonly, nonatomic) ARGeoTrackingStatus *geoTrackingStatus;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) ARVLStateData *vlState;

- (id)initWithFrame:(id)a0;
- (void).cxx_destruct;

@end
