@interface CalCompatibility : NSObject

@property (class) BOOL simulateLegacyBehaviors;

+ (BOOL)isProgramSDKAtLeast:(struct { unsigned int x0; unsigned int x1; })a0;
+ (void)perform:(id /* block */)a0 whileSimulatingLegacyBehaviors:(BOOL)a1;
+ (void)performWhileSimulatingLegacyBehaviors:(id /* block */)a0;

@end
