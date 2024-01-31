@class NSString, NSNumber, NSDictionary;

@interface TBJoinAnalyticsEvent : NSObject <TBAnalyticsEvent>

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) NSString *bssid;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *score;
@property (nonatomic) NSNumber *visibleDuration;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *eventDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)joinAlertEventWithSource:(unsigned long long)a0 action:(unsigned long long)a1 visibleDuration:(id)a2;
+ (id)joinRecommendationEventWithSource:(unsigned long long)a0 action:(unsigned long long)a1 BSSID:(id)a2 latitude:(id)a3 longitude:(id)a4 score:(id)a5 visibleDuration:(id)a6;

- (void).cxx_destruct;

@end
