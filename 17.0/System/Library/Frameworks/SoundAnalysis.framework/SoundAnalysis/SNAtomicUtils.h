@interface SNAtomicUtils : NSObject

+ (BOOL)atomicAdd:(long long)a0 notSurpassing:(long long)a1 atAddress:(void *)a2;
+ (long long)atomicUpdateValue:(id /* block */)a0 atAddress:(void *)a1;

- (id)init;

@end
