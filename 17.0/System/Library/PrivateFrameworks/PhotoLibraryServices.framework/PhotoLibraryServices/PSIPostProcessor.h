@interface PSIPostProcessor : NSObject

+ (BOOL)_prefer:(id)a0 over:(id)a1;
+ (void)postProcessGroupResults:(id)a0 dedupedGroupResults:(out id *)a1 query:(id)a2;

@end
