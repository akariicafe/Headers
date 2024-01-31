@class NSString, CLCircularRegion, CLLocation, HMHome;

@interface HULocationTriggerRegion : NSObject

@property (readonly, nonatomic) unsigned long long regionType;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) CLCircularRegion *circularRegion;
@property (readonly, nonatomic) CLCircularRegion *defaultCircularRegionForCoordinate;

+ (id)customRegionWithCircularRegion:(id)a0;
+ (id)homeRegionWithHome:(id)a0 eventType:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithRegionType:(unsigned long long)a0 home:(id)a1 circularRegion:(id)a2 eventType:(unsigned long long)a3;

@end
