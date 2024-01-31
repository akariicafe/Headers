@interface RMSandbox : NSObject

+ (long long)consumeToken:(id)a0;
+ (BOOL)configureSandbox;
+ (void)releaseToken:(long long)a0;
+ (id)tokenForURL:(id)a0;

@end
