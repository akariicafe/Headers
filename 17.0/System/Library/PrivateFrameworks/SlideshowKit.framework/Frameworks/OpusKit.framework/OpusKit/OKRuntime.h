@interface OKRuntime : NSObject

+ (unsigned long long)currentPlatform;
+ (id)currentPlatformStringWithDisplayScale;
+ (id)opusKitBundle;
+ (id)resolutionStringWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)resolutionStringWithSize:(struct CGSize { double x0; double x1; })a0 andPlatforms:(unsigned long long)a1;
+ (id)resolutionStringWithSize:(struct CGSize { double x0; double x1; })a0 keepAspectRatio:(BOOL)a1;
+ (id)resolutionStringWithSize:(struct CGSize { double x0; double x1; })a0 keepAspectRatio:(BOOL)a1 andPlatforms:(unsigned long long)a2;
+ (void)setupJavascriptContext:(id)a0;
+ (id)stringForPlatforms:(unsigned long long)a0;

@end
