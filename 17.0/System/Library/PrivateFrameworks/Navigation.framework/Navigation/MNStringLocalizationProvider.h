@class NSString, NSLocale;

@interface MNStringLocalizationProvider : NSObject <GEOComposedStringLocalizationProvider> {
    NSLocale *_locale;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initLocalizationProvider;

- (id)init;
- (id)locale;
- (void).cxx_destruct;
- (id)aboutDistanceAndAHalfKilometers;
- (id)aboutDistanceAndAHalfMiles;
- (id)aboutNDistance;
- (id)distanceAQuarterMile;
- (id)distanceAndAHalfKilometers;
- (id)distanceAndAHalfMiles;
- (id)distanceHalfAMile;
- (id)distanceThreeQuartersOfAMile;
- (id)frequencyRange_BothOnlyHours;
- (id)frequencyRange_BothOnlyMinutes;
- (id)frequencyRange_MixedUnits;
- (id)frequencySingleValue_OneHour;
- (id)frequencySingleValue_OneMinute;
- (id)minutesFormatForCountdownList;
- (id)separatorForTimestampList;
- (id)spokenLocale;

@end
