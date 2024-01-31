@class NSString, NSDictionary;

@interface STCommunicationSafetyChangedCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) BOOL communicationSafetyEnabled;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

@end
