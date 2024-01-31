@interface GDAnalytics : NSObject

+ (void)sendEventForProductionLazyWithEventName:(id)a0 eventPayloadBuilder:(id /* block */)a1;
+ (void)sendEventForProductionWithEventName:(id)a0 prefix:(id)a1 eventPayload:(id)a2;

- (id)init;

@end
