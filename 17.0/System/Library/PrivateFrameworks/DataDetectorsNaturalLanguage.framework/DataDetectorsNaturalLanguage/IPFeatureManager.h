@interface IPFeatureManager : NSObject

+ (void)scanEventsInMessageUnits:(id)a0 synchronously:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (id)featuresForTextString:(id)a0 inMessageUnit:(id)a1;
+ (void)scanEventsInMessageUnits:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setEventStoreForTesting:(id)a0;

@end
