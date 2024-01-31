@class NSString, NSDictionary;

@interface STPresetsAgeSelectedCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) NSString *sessionId;
@property (readonly) long long lowerBoundAgeRange;
@property (readonly) long long upperBoundAgeRange;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

- (void).cxx_destruct;
- (id)initWithSessionId:(id)a0 lowerBoundAgeRange:(long long)a1 upperBoundAgeRange:(long long)a2;

@end
