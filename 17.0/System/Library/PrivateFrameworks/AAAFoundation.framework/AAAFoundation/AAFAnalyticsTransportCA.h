@class NSString;

@interface AAFAnalyticsTransportCA : NSObject <AAFAnalyticsTransport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)sendEvent:(id)a0;

@end
