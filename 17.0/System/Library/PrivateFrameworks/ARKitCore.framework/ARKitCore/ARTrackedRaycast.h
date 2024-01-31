@class NSUUID, ARWorldTrackingTechnique, ARRaycastQuery;

@interface ARTrackedRaycast : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) id /* block */ updateHandler;
@property (weak, nonatomic) ARWorldTrackingTechnique *attachedWorldTrackingTechnique;
@property (retain) ARRaycastQuery *trackedQuery;

- (id)query;
- (id)description;
- (void).cxx_destruct;
- (void)stopTracking;
- (id)initWithIdentifier:(id)a0 ray:(id)a1 worldTrackingTechnique:(id)a2 updateHandler:(id /* block */)a3;

@end
