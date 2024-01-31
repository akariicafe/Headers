@class NSCalendar, NSDictionary, NSString, NSDate, CPAnalyticsSystemProperties;

@interface CPAnalyticsEvent : NSObject <CPAnalyticsEventProtocol>

@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) CPAnalyticsSystemProperties *systemProperties;
@property (readonly, nonatomic) NSCalendar *gregorianCalendar;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)hourOfDayFromDate:(id)a0;
+ (id)dayOfWeekFromDate:(id)a0;

@end
