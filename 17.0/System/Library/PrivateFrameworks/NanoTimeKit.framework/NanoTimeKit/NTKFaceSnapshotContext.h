@class NSCalendar, NSString, CLLocation, NSDate, NSNumber;

@interface NTKFaceSnapshotContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSCalendar *calendar;
@property (copy, nonatomic) NSString *monogram;
@property (copy, nonatomic) NSString *locale;
@property (retain, nonatomic) NSNumber *uses24hTime;
@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *tzVersion;
@property (retain, nonatomic) NSNumber *enhanceTextLegibilityEnabled;
@property (copy, nonatomic) NSString *lunarCalendarLocaleID;

+ (id)currentContext;

- (BOOL)lunarCalendarLocaleIDMatchesContext:(id)a0;
- (BOOL)localeMatchesContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)calendarDateMatchesContext:(id)a0;
- (double)distanceInKilometersFromContext:(id)a0;
- (void).cxx_destruct;
- (id)_yearMonthDay;
- (BOOL)enhanceTextLegibilityEnabledMatchesContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)buildVersionMatchesContext:(id)a0;
- (BOOL)locationSignificantlyDiffersFromContext:(id)a0;
- (BOOL)timeZoneMatchesContext:(id)a0;

@end
