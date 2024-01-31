@interface _DPPrioSeedablePRNG : NSObject

+ (id)generateSeed;
+ (id)randomDataFromSeed:(id)a0 length:(unsigned long long)a1;
+ (unsigned long long)seedLength;

@end
