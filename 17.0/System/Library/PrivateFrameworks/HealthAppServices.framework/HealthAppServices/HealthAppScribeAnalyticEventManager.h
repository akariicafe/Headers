@interface HealthAppScribeAnalyticEventManager : NSObject

- (BOOL)isImproveHealthAndActivityEnabled;
- (void)submitHealthEventWithDescription:(id)a0 requestInterval:(id)a1;
- (id)createEventPayloadWithDataType:(id)a0 requestCategory:(id)a1 requestType:(long long)a2 requestInterval:(id)a3 hourOfDay:(id)a4 userAction:(id)a5 hasHealthDataAuthorization:(BOOL)a6 isFirstInvocation:(BOOL)a7;
- (id)createHealthEventPayloadWithDescription:(id)a0 requestInterval:(id)a1;
- (void)submitEventWithDataType:(id)a0 requestCategory:(id)a1 requestType:(long long)a2 requestInterval:(id)a3 hourOfDay:(id)a4 userAction:(id)a5 hasHealthDataAuthorization:(BOOL)a6 isFirstInvocation:(BOOL)a7;

@end
