@class NSArray, ShowHomeIntent, ShowHomeIntentResponse;

@interface HomeAutomationInternal.ShowHomeIntentHandler : NSObject <ShowHomeIntentHandling>

- (id)init;
- (void)confirmShowHome:(ShowHomeIntent *)a0 completion:(void (^)(ShowHomeIntentResponse *))a1;
- (void)handleShowHome:(ShowHomeIntent *)a0 completion:(void (^)(ShowHomeIntentResponse *))a1;
- (void)resolveFiltersForShowHome:(ShowHomeIntent *)a0 withCompletion:(void (^)(NSArray *))a1;

@end
