@class NSString, NSMeasurementFormatter, NSLengthFormatter, _PASLock, NSLocale, NSDateComponentsFormatter, PPQuickTypeQuery, NSDateFormatter, _PASCachedResult, NSCache;

@interface PPQuickTypeFormatter : NSObject {
    PPQuickTypeQuery *_query;
    NSLocale *_locale;
    NSString *_desiredLanguage;
    NSString *_fallbackLanguage;
    NSDateFormatter *_birthdayFormatter;
    NSDateFormatter *_chineseBirthdayFormatter;
    NSDateFormatter *_yearlessChineseBirthdayFormatter;
    NSDateFormatter *_shortEventFormatter;
    NSDateFormatter *_longEventFormatter;
    NSCache *_dateFormatCache;
    NSCache *_appNameCache;
    NSMeasurementFormatter *_measurementWholeFormatter;
    NSMeasurementFormatter *_measurementDecimalFormatter;
    NSMeasurementFormatter *_measurementUnscaledFormatter;
    NSLengthFormatter *_lengthFormatter;
    NSDateComponentsFormatter *_dateComponentFormatter;
    _PASLock *_localizedStringsCache;
    _PASCachedResult *_cachedContactsLabeledValuesLprojs;
}

+ (id)new;
+ (id)formatterWithQuery:(id)a0;

- (id)init;
- (id)distanceLabel;
- (id)destinationLabel;
- (id)makeMeasurementDecimalFormatter;
- (id)formattedEventTime:(id)a0;
- (id)makeMeasurementUnscaledFormatter;
- (id)inviteLinkLabel;
- (id)makeLengthFormatter;
- (id)etaLabel;
- (id)makeLongEventFormatter;
- (id)formattedBirthday:(id)a0;
- (id)makeBirthdayFormatter;
- (id)formattedStringsForLabels:(id)a0;
- (id)formattedStringForLabel:(id)a0;
- (id)formattedMeasurement:(id)a0 allowDecimals:(BOOL)a1 scaleUnits:(BOOL)a2;
- (void).cxx_destruct;
- (id)streetLabel;
- (id)formattedLengthInMeters:(double)a0;
- (id)makeYearlessChineseBirthdayFormatter;
- (id)makeDateComponentFormatter;
- (id)makeChineseBirthdayFormatter;
- (id)formattedPostalAddress:(id)a0;
- (id)localizedAppNameForBundleIdentifier:(id)a0;
- (id)attributionPattern;
- (id)timeLeftLabel;
- (id)makeShortEventFormatter;
- (id)makeMeasurementWholeFormatter;
- (id)navigationItemLabelForTypeLabel:(id)a0 destination:(id)a1;
- (id)formattedTimeInterval:(double)a0;

@end
