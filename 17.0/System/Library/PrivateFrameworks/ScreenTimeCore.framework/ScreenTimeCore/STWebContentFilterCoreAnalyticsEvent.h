@class NSString, NSDictionary;

@interface STWebContentFilterCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) BOOL webContentFilterEnabled;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

@end
