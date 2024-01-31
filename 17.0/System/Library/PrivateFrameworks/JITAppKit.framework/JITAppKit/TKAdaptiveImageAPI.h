@interface TKAdaptiveImageAPI : NSObject

+ (id)defaultImageService;
+ (id /* block */)getService:(id)a0;
+ (void)registerService:(id)a0 handler:(id /* block */)a1;
+ (void)setDefaultImageService:(id)a0;

@end
