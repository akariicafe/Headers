@class NSDate, NSUUID, GEORouteMatch, NSString, CLLocation, GEORoadMatch, GEONavigationMatchInfo;

@interface MNLocation : CLLocation <NSSecureCoding> {
    unsigned long long _traceIndex;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long traceIndex;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) GEORoadMatch *roadMatch;
@property (retain, nonatomic) CLLocation *rawLocation;
@property (copy, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSUUID *routeID;
@property (retain, nonatomic) GEORouteMatch *routeMatch;
@property (retain, nonatomic) GEONavigationMatchInfo *detailedMatchInfo;
@property (copy, nonatomic) NSString *roadName;
@property (copy, nonatomic) NSString *shieldText;
@property (nonatomic) long long shieldType;
@property (nonatomic) unsigned int roadLineType;
@property (nonatomic) int rampType;
@property (nonatomic) unsigned long long speedLimit;
@property (nonatomic) BOOL speedLimitIsMPH;
@property (nonatomic) long long speedLimitShieldType;
@property (nonatomic) BOOL isDirectional;
@property (nonatomic) BOOL locationUnreliable;
@property (readonly, nonatomic) unsigned long long stepIndex;
@property (readonly, nonatomic) BOOL isProjected;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSDate *originalDate;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } rawShiftedCoordinate;
@property (nonatomic) BOOL isLeeched;

- (struct CLLocationCoordinate2D { double x0; double x1; })_navigation_rawShiftedCoordinate;
- (id)_navigation_routeMatch;
- (id)propagatedLocationForTimeInterval:(double)a0 shouldProjectAlongRoute:(BOOL)a1;
- (id)initWithCLLocation:(id)a0;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; double x20; BOOL x21; })a0;
- (id)initWithRoadMatch:(id)a0 rawLocation:(id)a1 locationMatchType:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)_referenceFrameAsString:(int)a0;
- (BOOL)_navigation_hasValidCourse;
- (id)_roadFeature;
- (id)initWithRawLocation:(id)a0;
- (id)_navigation_detailedMatchInfo;
- (id)description;
- (BOOL)_navigation_isStale;
- (void).cxx_destruct;
- (id)matchInfo;
- (id)initWithRawLocation:(id)a0 locationMatchType:(unsigned long long)a1;
- (BOOL)isEqualToLocation:(id)a0;
- (void)_readFromRoadFeature:(id)a0;
- (id)initWithRouteMatch:(id)a0 rawLocation:(id)a1 locationMatchType:(unsigned long long)a2;
- (id)initWithCoder:(id)a0;

@end
