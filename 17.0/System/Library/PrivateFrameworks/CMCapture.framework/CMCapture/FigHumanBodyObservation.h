@class VNTrackObjectRequest, VNHumanObservation;

@interface FigHumanBodyObservation : NSObject

@property (readonly) VNHumanObservation *humanObservation;
@property (readonly) VNTrackObjectRequest *humanTrackingRequest;
@property (readonly) unsigned long long humanBodyID;
@property (readonly) unsigned long long lastUpdatedTime;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithHumanObservation:(id)a0 humanBodyID:(unsigned long long)a1 time:(unsigned long long)a2;

@end
