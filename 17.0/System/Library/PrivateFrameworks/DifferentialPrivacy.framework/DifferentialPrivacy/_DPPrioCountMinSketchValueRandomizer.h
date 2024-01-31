@class NSString;

@interface _DPPrioCountMinSketchValueRandomizer : NSObject <_DPStringRandomizer>

@property (readonly, nonatomic) double epsilon;
@property (readonly, nonatomic) unsigned long long m;
@property (readonly, nonatomic) unsigned long long k;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)randomizerWithEpsilon:(double)a0 bitCount:(unsigned long long)a1 hashFunctionCount:(unsigned long long)a2;

- (id)init;
- (id)randomizeWords:(id)a0 fragmentWidth:(unsigned long long)a1 forKey:(id)a2;
- (id)randomizeStrings:(id)a0 forKey:(id)a1;
- (id)randomizeBitValues:(id)a0 forKey:(id)a1;
- (id)initWithEpsilon:(double)a0 bitCount:(unsigned long long)a1 hashFunctionCount:(unsigned long long)a2;
- (id)randomize:(id)a0 metadata:(id)a1;
- (id)randomizeStrings:(id)a0 metadata:(id)a1 forKey:(id)a2;

@end
