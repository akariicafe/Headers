@class NSString, NSDictionary;

@interface STEyeReliefChangedCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) BOOL eyeReliefEnabled;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

@end
