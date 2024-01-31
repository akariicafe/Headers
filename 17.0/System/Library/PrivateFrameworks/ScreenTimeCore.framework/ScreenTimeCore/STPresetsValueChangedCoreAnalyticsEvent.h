@class NSString, NSDictionary;

@interface STPresetsValueChangedCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) NSString *sessionId;
@property (readonly) NSString *fieldName;
@property (readonly) NSString *recommendedPresetId;
@property (readonly) id recommendedValue;
@property (readonly) id selectedValue;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

- (void).cxx_destruct;
- (id)initWithSessionId:(id)a0 recommendedPresetId:(id)a1 fieldName:(id)a2 recommendedValue:(id)a3 selectedValue:(id)a4;

@end
