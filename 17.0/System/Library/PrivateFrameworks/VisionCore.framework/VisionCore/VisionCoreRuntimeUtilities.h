@interface VisionCoreRuntimeUtilities : NSObject

+ (int)linkTimeVersion;
+ (int)runTimeVersion;
+ (BOOL)linkTimeOrRunTimeBeforeVersion:(int)a0;
+ (void)enumerateSubclassesOfClass:(Class)a0 excludingRootClass:(BOOL)a1 usingBlock:(id /* block */)a2;
+ (BOOL)item:(id)a0 overridesClassSelector:(SEL)a1;
+ (BOOL)item:(id)a0 overridesSelector:(SEL)a1;
+ (BOOL)linkTimeOrRunTimeAtLeastVersion:(int)a0;
+ (id)allSubclassesOfClass:(Class)a0 excludingRootClass:(BOOL)a1 overridingClassSelector:(SEL)a2;
+ (id)allSubclassesOfClass:(Class)a0 excludingRootClass:(BOOL)a1 overridingSelector:(SEL)a2;
+ (id)leafSubclassesOfClass:(Class)a0 excludingRootClass:(BOOL)a1;
+ (id)leafSubclassesOfClass:(Class)a0 excludingRootClass:(BOOL)a1 overridingClassSelector:(SEL)a2;
+ (id)leafSubclassesOfClass:(Class)a0 excludingRootClass:(BOOL)a1 overridingSelector:(SEL)a2;
+ (id)signatureForItem:(id)a0 selector:(SEL)a1;

@end
