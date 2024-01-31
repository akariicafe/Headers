@interface ICNAOptedInObject : NSObject

@property (class, readonly) BOOL isOptedInForAnalytics;

+ (void)disableAnalytics;

- (id)init;

@end
