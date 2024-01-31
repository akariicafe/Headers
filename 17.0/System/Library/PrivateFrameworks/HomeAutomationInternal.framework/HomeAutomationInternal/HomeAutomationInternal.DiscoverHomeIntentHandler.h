@class NSArray, DiscoverHomeIntentResponse, DiscoverHomeIntent;

@interface HomeAutomationInternal.DiscoverHomeIntentHandler : NSObject <DiscoverHomeIntentHandling>

- (id)init;
- (void)confirmDiscoverHome:(DiscoverHomeIntent *)a0 completion:(void (^)(DiscoverHomeIntentResponse *))a1;
- (void)handleDiscoverHome:(DiscoverHomeIntent *)a0 completion:(void (^)(DiscoverHomeIntentResponse *))a1;
- (void)resolveFiltersForDiscoverHome:(DiscoverHomeIntent *)a0 withCompletion:(void (^)(NSArray *))a1;

@end
