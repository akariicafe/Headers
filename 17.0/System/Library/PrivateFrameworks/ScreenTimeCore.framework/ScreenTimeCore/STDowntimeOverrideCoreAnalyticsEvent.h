@class NSString, NSDictionary;

@interface STDowntimeOverrideCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) BOOL downtimeEnabled;
@property (readonly) BOOL gracePeriodUsed;
@property (readonly) BOOL scheduleEnabled;
@property (readonly) long long hourOfDay;
@property (readonly) BOOL userIsManaged;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

@end
