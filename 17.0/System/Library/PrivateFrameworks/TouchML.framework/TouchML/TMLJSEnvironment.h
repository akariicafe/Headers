@interface TMLJSEnvironment : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)setCurrentContext:(id)a0;
+ (id)currentContext;
+ (void)initializeJSContext:(id)a0;
+ (void)forceGC;
+ (void)addGCCallback:(id /* block */)a0;
+ (void)addToDefaultModules:(id)a0;
+ (void)applicationDidReceiveMemoryWarningNotification:(id)a0;
+ (id)convertJsValue:(id)a0 toType:(unsigned long long)a1;
+ (id)convertTmlValue:(id)a0;
+ (id)createJSContextWithRuntimeContext:(id)a0;
+ (id)defaultModules;
+ (id)normalizeValue:(id)a0 toType:(unsigned long long)a1;
+ (id)protoJSContext;
+ (void)requireModule:(id)a0 forJSContext:(id)a1;
+ (void)runInContext:(id)a0 block:(id /* block */)a1;
+ (id)sharedVM;
+ (id)validCurrentContext;

@end
