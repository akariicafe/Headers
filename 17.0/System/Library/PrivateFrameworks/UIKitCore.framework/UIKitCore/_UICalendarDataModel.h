@class NSTimeZone, NSCalendar, NSDateInterval, NSString, NSLocale, _UIDatePickerCalendarMonth;

@interface _UICalendarDataModel : NSObject

@property (copy, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) NSCalendar *effectiveCalendar;
@property (readonly, nonatomic) NSLocale *effectiveLocale;
@property (readonly, nonatomic) NSTimeZone *effectiveTimeZone;
@property (retain, nonatomic) _UIDatePickerCalendarMonth *visibleMonth;
@property (copy, nonatomic) NSDateInterval *availableDateRange;
@property (retain, nonatomic) NSString *fontDesign;

- (id)init;
- (void).cxx_destruct;
- (void)_deriveEffectiveLocaleAndCalendarIfNeeded;

@end
