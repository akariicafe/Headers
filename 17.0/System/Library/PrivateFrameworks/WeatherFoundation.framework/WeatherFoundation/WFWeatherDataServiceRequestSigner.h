@interface WFWeatherDataServiceRequestSigner : NSObject

+ (id)roundDate:(id)a0 toMinutes:(unsigned long long)a1;
+ (void)signRequest:(id)a0 withDate:(id)a1;
+ (void)signRequest:(id)a0 withSecret:(id)a1 andDate:(id)a2;
+ (id)buildAuthHeader:(id)a0 withSecret:(id)a1 andDate:(id)a2;

@end
