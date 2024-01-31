@class NSOrderedSet, NSArray, CLKUIAlmanacTransitInfo, NSDate, CLLocation, NSData;

@interface NTKSiderealData : NSObject <NSSecureCoding> {
    float _altitudes[361];
    BOOL _useXR;
    BOOL _sunsetFilterEnabled;
    float _sunsetFilter;
    float _sunsetFilterRampUpStartProgress;
    float _sunsetFilterRampDownStartProgress;
    double _currentSolarDayProgress;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSOrderedSet *solarEvents;
@property (readonly, nonatomic) CLKUIAlmanacTransitInfo *sunriseSunsetInfo;
@property (readonly, nonatomic) NSOrderedSet *sectors;
@property (readonly, nonatomic) NSArray *waypoints;
@property (readonly, nonatomic) NSDate *referenceDate;
@property (readonly, nonatomic) CLLocation *referenceLocation;
@property (readonly, nonatomic) BOOL sunsetFollowsSunrise;
@property (readonly, nonatomic) BOOL isConstantSunUpOrDown;
@property (readonly, nonatomic) NSDate *sunsetTime;
@property (readonly, nonatomic) NSDate *sunriseTime;
@property (readonly, nonatomic) NSOrderedSet *daytimeEvents;
@property (readonly, nonatomic) NSData *gradientData;

+ (id)loadCached;

- (void)encodeWithCoder:(id)a0;
- (void)save;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)gradientWithSunsetFilterForDayProgress:(float)a0;
- (id)_findSunsetTime;
- (BOOL)_computeIsConstantSunUpOrDown;
- (BOOL)_computeSunsetFollowsSunrise;
- (id)_findSunriseTime;
- (id)_generateGradientDataForXR:(BOOL)a0;
- (struct { float x0; float x1; float x2; })altitudeForProgress:(double)a0;
- (id)applySunsetFilterToColor:(id)a0;
- (id)initWithReferenceDate:(id)a0 referenceLocation:(id)a1 sunriseSunsetInfo:(id)a2 solarEvents:(id)a3 daytimeEvents:(id)a4 sectors:(id)a5 waypoints:(id)a6 altitudes:(float *)a7 useXR:(BOOL)a8;
- (id)interpolateBetweenCalendricalMidnights:(double)a0;
- (BOOL)isDateInReferenceDate:(id)a0;
- (void)setSolarDayProgress:(double)a0;
- (void)updateSunsetFilter;
- (BOOL)useXR;

@end
