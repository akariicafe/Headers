@interface RMDateFormat : NSObject

+ (id)_isoLocalTimeZoneDateFormatter;
+ (id)_isoLocalTimeZoneFractionalSecondsDateFormatter;
+ (id)_isoUTCDateFormatter;
+ (id)_isoUTCFractionalSecondsDateFormatter;
+ (id)dateWithStringLocalTimeZone:(id)a0;
+ (id)dateWithStringLocalTimeZoneFractionalSeconds:(id)a0;
+ (id)dateWithStringUTC:(id)a0;
+ (id)dateWithStringUTCFractionalSeconds:(id)a0;
+ (id)stringLocalTimeZoneFractionalSecondsWithDate:(id)a0;
+ (id)stringLocalTimeZoneWithDate:(id)a0;
+ (id)stringUTCFractionalSecondsWithDate:(id)a0;
+ (id)stringUTCWithDate:(id)a0;

@end
