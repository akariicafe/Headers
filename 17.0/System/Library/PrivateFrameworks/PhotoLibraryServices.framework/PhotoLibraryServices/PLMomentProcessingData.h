@class NSString, CLLocation, NSDate;

@interface PLMomentProcessingData : NSObject <PLMomentProcessingProtocol>

@property (readonly, nonatomic) NSString *pl_uuid;
@property (readonly, nonatomic) NSDate *pl_startDate;
@property (readonly, nonatomic) NSDate *pl_endDate;
@property (readonly, nonatomic) unsigned long long pl_numberOfAssets;
@property (readonly, nonatomic) CLLocation *pl_location;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } pl_coordinate;
@property (readonly, nonatomic) short pl_originatorState;
@property (readonly, nonatomic) unsigned short pl_locationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMoment:(id)a0;

@end
