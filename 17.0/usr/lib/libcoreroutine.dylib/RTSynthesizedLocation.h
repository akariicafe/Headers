@class NSString, NSDate;

@interface RTSynthesizedLocation : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double horizontalAccuracy;
@property (readonly, nonatomic) double verticalAccuracy;
@property (readonly, nonatomic) double course;
@property (readonly, nonatomic) double courseAccuracy;
@property (readonly, nonatomic) double speed;
@property (readonly, nonatomic) double speedAccuracy;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (nonatomic) long long downsamplingLevel;
@property (nonatomic) long long geoRoadClass;
@property (nonatomic) long long geoFormOfWay;
@property (nonatomic) long long locationType;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithSynhtesizedLocationMO:(id)a0;

- (id)initWithCLLocation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)managedObjectWithContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToLocation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)convertCLLocationType:(int)a0;
- (long long)convertFormOfWay:(int)a0;
- (long long)convertGeoRoadClass:(int)a0;
- (long long)convertReconstructedLocationType:(id)a0;
- (id)initWithCLTripSegmentLocation:(id)a0;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 altitude:(double)a1 horizontalAccuracy:(double)a2 verticalAccuracy:(double)a3 course:(double)a4 courseAccuracy:(double)a5 speed:(double)a6 speedAccuracy:(double)a7 geoRoadClass:(long long)a8 geoFormOfWay:(long long)a9 locationType:(long long)a10 timestamp:(id)a11;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 altitude:(double)a1 horizontalAccuracy:(double)a2 verticalAccuracy:(double)a3 course:(double)a4 courseAccuracy:(double)a5 speed:(double)a6 speedAccuracy:(double)a7 geoRoadClass:(long long)a8 geoFormOfWay:(long long)a9 locationType:(long long)a10 timestamp:(id)a11 downsamplingLevel:(long long)a12;

@end
