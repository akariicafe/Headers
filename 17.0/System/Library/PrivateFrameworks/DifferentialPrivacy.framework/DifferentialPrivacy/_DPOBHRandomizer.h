@class NSString, _DPRandomBitPositionGenerator, _DPBiasedCoin;

@interface _DPOBHRandomizer : NSObject <_DPStringRandomizer>

@property (readonly, nonatomic) unsigned long long m;
@property (readonly, nonatomic) double epsilon;
@property (readonly, nonatomic) _DPBiasedCoin *epsilonCoin;
@property (readonly, nonatomic) _DPRandomBitPositionGenerator *bitPositionGenerator;
@property (readonly, nonatomic) double cEpsilon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)obhRandomizerWithDimensionality:(unsigned long long)a0 epsilon:(double)a1;

- (id)init;
- (id)randomizeWords:(id)a0 fragmentWidth:(unsigned long long)a1 forKey:(id)a2;
- (id)randomizeStrings:(id)a0 forKey:(id)a1;
- (id)randomizeBitValues:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithDimensionality:(unsigned long long)a0 epsilon:(double)a1;
- (BOOL)getBitValueAtIndex:(unsigned long long)a0 forString:(id)a1;
- (id)randomizedBitForString:(id)a0;

@end
