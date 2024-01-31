@class NSString, NSNumber, NSObject;
@protocol OS_os_log;

@interface HKChartOverlaySelectedAnalyticsEventConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *eventName;
@property (readonly, copy, nonatomic) NSString *previousContextItemPropertyName;
@property (readonly, copy, nonatomic) NSString *currentContextItemPropertyName;
@property (retain, nonatomic) NSObject<OS_os_log> *loggingCategory;
@property (copy, nonatomic) NSString *featureIdentifier;
@property (retain, nonatomic) NSNumber *minimumAge;

- (void).cxx_destruct;
- (id)initWithEventName:(id)a0 previousContextItemPropertyName:(id)a1 currentContextItemPropertyName:(id)a2;

@end
