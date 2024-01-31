@class NSString, NSDictionary;

@interface HLPAnalyticsEvent : NSObject

@property (readonly) NSString *eventName;
@property (readonly) NSDictionary *caRepresentation;

+ (id)event;

- (void)log;

@end
