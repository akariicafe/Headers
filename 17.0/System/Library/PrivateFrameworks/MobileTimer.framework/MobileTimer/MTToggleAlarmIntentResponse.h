@class MTIntentAlarm;

@interface MTToggleAlarmIntentResponse : INIntentResponse

@property (nonatomic) long long code;
@property (nonatomic) long long state;
@property (copy, nonatomic) MTIntentAlarm *alarm;

+ (id)continueInAppIntentResponseWithState:(long long)a0;
+ (id)failureRequiringAppLaunchIntentResponseWithState:(long long)a0;
+ (id)inProgressIntentResponseWithState:(long long)a0;
+ (id)readyIntentResponseWithState:(long long)a0;
+ (id)successIntentResponseWithState:(long long)a0 alarm:(id)a1;
+ (id)unspecifiedIntentResponseWithState:(long long)a0;

- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
