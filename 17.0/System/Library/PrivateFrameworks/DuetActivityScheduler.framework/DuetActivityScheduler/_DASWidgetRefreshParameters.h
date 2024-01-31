@class NSString, NSDate;

@interface _DASWidgetRefreshParameters : NSObject

@property (retain, nonatomic) NSString *widgetIdentifier;
@property (retain, nonatomic) NSString *widgetBudgetIdentifier;
@property (retain, nonatomic) NSString *ratelimitConfigurationName;
@property (retain, nonatomic) NSString *remoteDeviceIdentifier;
@property (retain, nonatomic) NSString *appIdentifier;
@property (retain, nonatomic) NSDate *refreshBeforeDate;
@property (retain, nonatomic) NSDate *refreshAfterDate;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 withBudgetIdentifier:(id)a1 withRateLimitConfigurationName:(id)a2 withRemoteDeviceIdentifier:(id)a3 withAppIdentifier:(id)a4 refreshAfter:(id)a5 refreshBefore:(id)a6;

@end
