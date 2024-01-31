@interface SKArcadeService : NSObject

+ (void)repairArcadeApp;
+ (void)arcadeSubscriptionStatusWithNonce:(unsigned long long)a0 resultHandler:(id /* block */)a1;
+ (void)registerArcadeAppWithRandomFromLib:(id)a0 randomFromLibLength:(unsigned int)a1 resultHandler:(id /* block */)a2;

@end
