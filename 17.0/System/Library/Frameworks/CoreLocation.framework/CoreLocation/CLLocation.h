@class NSData, NSString, CLLocationGnssOdometerInfo, NSDate, CLLocationSourceInformation, _CLLocationGroundAltitude, CLFloor, _CLLocationFusionInfo, CLLocationTrackRunInfo, CLLocationMatchInfo;

@interface CLLocation : NSObject <NSCopying, NSSecureCoding> {
    id _internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CLLocationMatchInfo *matchInfo;
@property (readonly, nonatomic) _CLLocationGroundAltitude *_groundAltitude;
@property (readonly, nonatomic) _CLLocationFusionInfo *_fusionInfo;
@property (readonly, nonatomic) CLLocationGnssOdometerInfo *gnssOdometerInfo;
@property (readonly, nonatomic) CLLocationTrackRunInfo *trackRunInfo;
@property (readonly, nonatomic) struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; double x20; BOOL x21; } clientLocation;
@property (readonly, nonatomic) NSString *iso6709Notation;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSData *coarseMetaData;
@property (nonatomic) int referenceFrame;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } rawCoordinate;
@property (readonly, nonatomic) double rawHorizontalAccuracy;
@property (readonly, nonatomic) double rawAltitude;
@property (readonly, nonatomic) double rawVerticalAccuracy;
@property (readonly, nonatomic) double rawCourse;
@property (readonly, nonatomic) double rawCourseAccuracy;
@property (readonly, nonatomic) double magneticDeclination;
@property (readonly, nonatomic) unsigned int integrity;
@property (readonly, nonatomic) double trustedTimestamp;
@property (readonly, nonatomic) BOOL isAltitudeWgs84Available;
@property (readonly, nonatomic) double altitudeWgs84;
@property (readonly, nonatomic, getter=isCoordinateFused) BOOL coordinateFused;
@property (readonly, nonatomic, getter=isCoordinateFusedWithVL) BOOL coordinateFusedWithVL;
@property (readonly, nonatomic) int signalEnvironmentType;
@property (readonly, nonatomic) int positionContextState;
@property (readonly, nonatomic) double probabilityPositionContextStateIndoor;
@property (readonly, nonatomic) double probabilityPositionContextStateOutdoor;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double ellipsoidalAltitude;
@property (readonly, nonatomic) double horizontalAccuracy;
@property (readonly, nonatomic) double verticalAccuracy;
@property (readonly, nonatomic) double course;
@property (readonly, nonatomic) double courseAccuracy;
@property (readonly, nonatomic) double speed;
@property (readonly, nonatomic) double speedAccuracy;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) CLFloor *floor;
@property (readonly, nonatomic) CLLocationSourceInformation *sourceInformation;

- (id)init;
- (void)dealloc;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; double x20; BOOL x21; })a0;
- (id)shortDescription;
- (id)jsonObject;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (double)distanceFromLocation:(id)a0;
- (id)description;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; double x20; BOOL x21; })a0 clientLocationPrivate:(struct { double x0; double x1; double x2; double x3; double x4; float x5; float x6; float x7; BOOL x8; int x9; struct { double x0; double x1; } x10; double x11; int x12; int x13; BOOL x14; struct { double x0; double x1; BOOL x2; BOOL x3; int x4; double x5; long long x6; double x7; double x8; double x9; } x15; struct { struct { int x0; double x1; double x2; double x3; double x4; double x5; struct { double x0; double x1; } x6; double x7; double x8; } x0; int x1; unsigned long long x2; int x3; int x4; int x5; int x6; double x7; BOOL x8; } x16; struct { double x0; double x1; } x17; int x18; float x19; struct { double x0; double x1; } x20; double x21; double x22; int x23; BOOL x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; BOOL x33; BOOL x34; struct { double x0; double x1; } x35; double x36; int x37; double x38; double x39; double x40; double x41; int x42; double x43; double x44; int x45; struct { unsigned int x0; } x46; struct { int x0; float x1; } x47; })a1;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; double x20; BOOL x21; })a0 coarseMetaData:(id)a1;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; double x20; BOOL x21; })a0 clientLocationPrivate:(struct { double x0; double x1; double x2; double x3; double x4; float x5; float x6; float x7; BOOL x8; int x9; struct { double x0; double x1; } x10; double x11; int x12; int x13; BOOL x14; struct { double x0; double x1; BOOL x2; BOOL x3; int x4; double x5; long long x6; double x7; double x8; double x9; } x15; struct { struct { int x0; double x1; double x2; double x3; double x4; double x5; struct { double x0; double x1; } x6; double x7; double x8; } x0; int x1; unsigned long long x2; int x3; int x4; int x5; int x6; double x7; BOOL x8; } x16; struct { double x0; double x1; } x17; int x18; float x19; struct { double x0; double x1; } x20; double x21; double x22; int x23; BOOL x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; BOOL x33; BOOL x34; struct { double x0; double x1; } x35; double x36; int x37; double x38; double x39; double x40; double x41; int x42; double x43; double x44; int x45; struct { unsigned int x0; } x46; struct { int x0; float x1; } x47; })a1 coarseMetaData:(id)a2;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; double x20; BOOL x21; })a0 matchInfo:(id)a1 trustedTimestamp:(double)a2 groundAltitude:(id)a3 fusionInfo:(id)a4 trackRunInfo:(id)a5 rawHorizontalAccuracy:(double)a6 rawAltitude:(double)a7 rawVerticalAccuracy:(double)a8 rawCourseAccuracy:(double)a9 positionContextStateType:(int)a10 probabilityPositionContextStateIndoor:(double)a11 probabilityPositionContextStateOutdoor:(double)a12 gnssOdometerInfo:(id)a13 coarseMetaData:(id)a14;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; double x20; BOOL x21; })a0 matchInfo:(id)a1 trustedTimestamp:(double)a2 groundAltitude:(id)a3;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 altitude:(double)a1 horizontalAccuracy:(double)a2 verticalAccuracy:(double)a3 course:(double)a4 speed:(double)a5 timestamp:(id)a6;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; double x20; BOOL x21; })a0 matchInfo:(id)a1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 altitude:(double)a1 horizontalAccuracy:(double)a2 verticalAccuracy:(double)a3 timestamp:(id)a4;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 altitude:(double)a1 horizontalAccuracy:(double)a2 verticalAccuracy:(double)a3 timestamp:(id)a4 referenceFrame:(int)a5;
- (id)propagateLocationToTime:(double)a0;
- (id)snapToResolution:(double)a0;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 altitude:(double)a1 horizontalAccuracy:(double)a2 verticalAccuracy:(double)a3 course:(double)a4 courseAccuracy:(double)a5 speed:(double)a6 speedAccuracy:(double)a7 timestamp:(id)a8 sourceInfo:(id)a9;
- (void)unmatch;
- (id)_initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 altitude:(double)a1 horizontalAccuracy:(double)a2 verticalAccuracy:(double)a3 course:(double)a4 courseAccuracy:(double)a5 speed:(double)a6 speedAccuracy:(double)a7 timestamp:(id)a8 floor:(int)a9 type:(int)a10 sourceParams:(id)a11 referenceFrame:(int)a12;
- (id)_initWithRTLocation:(id)a0;
- (double)getDistanceFrom:(id)a0;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; double x20; BOOL x21; })a0 matchInfo:(id)a1 trustedTimestamp:(double)a2;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; double x20; BOOL x21; })a0 matchInfo:(id)a1 trustedTimestamp:(double)a2 groundAltitude:(id)a3 fusionInfo:(id)a4 trackRunInfo:(id)a5 rawHorizontalAccuracy:(double)a6 rawCourseAccuracy:(double)a7 coarseMetaData:(id)a8;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 altitude:(double)a1 horizontalAccuracy:(double)a2 verticalAccuracy:(double)a3 course:(double)a4 courseAccuracy:(double)a5 speed:(double)a6 speedAccuracy:(double)a7 timestamp:(id)a8;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 altitude:(double)a2 speed:(double)a3 course:(double)a4 horizontalAccuracy:(double)a5 verticalAccuracy:(double)a6 speedAccuracy:(double)a7 courseAccuracy:(double)a8 type:(int)a9 timestamp:(id)a10;

@end
