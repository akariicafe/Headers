@class NSNumber, NSString;

@interface HFAnalyticsAppForegroundDurationEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *foregroundDuration;
@property (nonatomic) BOOL userHasAccessories;
@property (retain, nonatomic) NSString *processName;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
