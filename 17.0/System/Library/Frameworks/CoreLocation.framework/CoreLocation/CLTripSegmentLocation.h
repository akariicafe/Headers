@class NSDate;

@interface CLTripSegmentLocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *timestamp;
@property (nonatomic) double rawLatitude;
@property (nonatomic) double rawLongitude;
@property (readonly, nonatomic) int rawReferenceFrame;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (readonly, nonatomic) int referenceFrame;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double course;
@property (nonatomic) double courseAccuracy;
@property (nonatomic) double speed;
@property (nonatomic) double speedAccuracy;
@property (nonatomic) double altitude;
@property (nonatomic) double altitudeAccuracy;
@property (nonatomic) int mapsRoadClass;
@property (nonatomic) int mapsFormOfWay;
@property (nonatomic) int locType;
@property (nonatomic) int locTypeStart;
@property (nonatomic) int locTypeStop;
@property (nonatomic) unsigned long long reconstructionType;

- (void)dealloc;
- (id)initWithCLLocation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (double)distanceFromLocation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isMapMatched;
- (double)distanceFromLatitude:(double)a0 longitude:(double)a1;
- (void)updateCourse:(double)a0 andCourseAccuracy:(double)a1;
- (id)initWithTime:(id)a0 latitude:(double)a1 longitude:(double)a2 horizontalAccuracy:(double)a3 course:(double)a4 courseAccuracy:(double)a5 speed:(double)a6 speedAccuracy:(double)a7 altitude:(double)a8 altitudeAccuracy:(double)a9 locType:(int)a10;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 altitude:(double)a2;
- (id)initWithTime:(id)a0 latitude:(double)a1 longitude:(double)a2 horizontalAccuracy:(double)a3 course:(double)a4 courseAccuracy:(double)a5 speed:(double)a6 speedAccuracy:(double)a7 altitude:(double)a8 altitudeAccuracy:(double)a9 locType:(int)a10 referenceFrame:(int)a11;
- (BOOL)isCourseValid;
- (BOOL)isGPSLocationType;
- (BOOL)isGoodGPSFix;
- (BOOL)isInertialIntegrated;
- (BOOL)isLinearInterpolated;
- (BOOL)isLoiLocationType;
- (BOOL)isOriginalLocationType;
- (void)setLocationReconstructionType:(unsigned long long)a0;
- (void)setRawLatitude:(double)a0 longitude:(double)a1 referenceFrame:(int)a2;
- (void)setStartLocationType:(int)a0;
- (void)setStartLocationType:(int)a0 andStopLocationType:(int)a1;
- (void)setStopLocationType:(int)a0;
- (void)updateAltitude:(double)a0 andAltitudeAccuracy:(double)a1;
- (void)updateLatitude:(double)a0 longitude:(double)a1 horizontalAccuracy:(double)a2 referenceFrame:(int)a3;
- (void)updateSpeed:(double)a0 andSpeedAccuracy:(double)a1;

@end
