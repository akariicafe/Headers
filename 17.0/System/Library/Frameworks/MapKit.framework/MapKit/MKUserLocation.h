@class NSString, CLHeading, CLLocation, MKUserLocationInternal;

@interface MKUserLocation : NSObject <MKAnnotation> {
    MKUserLocationInternal *_internal;
}

@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, nonatomic) double headingDegrees;
@property (readonly, nonatomic) double accuracy;
@property (nonatomic, getter=isUpdating) BOOL updating;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) CLHeading *heading;
@property (retain, nonatomic) CLLocation *fixedLocation;
@property (retain, nonatomic) CLLocation *predictedLocation;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) NSString *shortDescription;
@property (nonatomic) double expectedCoordinateUpdateInterval;
@property (nonatomic) double expectedHeadingUpdateInterval;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingSubtitle;
+ (void)_setAnnotationClass:(Class)a0;
+ (id)title;

- (id)init;
- (void)reset;
- (void)dealloc;
- (void)setCourse:(double)a0;
- (id)annotation;
- (void).cxx_destruct;
- (double)course;
- (BOOL)isEqualToLocation:(id)a0;
- (BOOL)hasValidHeading;
- (void)_updateCoordinate;

@end
