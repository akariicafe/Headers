@class NSString;

@interface _DPPrioPlusPlusMetricsValueRandomizer : NSObject <_DPStringRandomizer>

@property (readonly, nonatomic) double epsilon;
@property (readonly, nonatomic) double delta;
@property (readonly, nonatomic) unsigned long long n;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)randomizerWithEpsilon:(double)a0 delta:(double)a1 maxLength:(unsigned long long)a2;

- (id)init;
- (id)randomizeWords:(id)a0 fragmentWidth:(unsigned long long)a1 forKey:(id)a2;
- (id)randomizeStrings:(id)a0 forKey:(id)a1;
- (id)randomizeBitValues:(id)a0 forKey:(id)a1;
- (id)initWithEpsilon:(double)a0 delta:(double)a1 maxLength:(unsigned long long)a2;
- (id)randomizeFloatVector:(id)a0 metadata:(id)a1;
- (id)randomizeFloatVectors:(id)a0 forKey:(id)a1;
- (id)randomizeFloatVectors:(id)a0 metadata:(id)a1 forKey:(id)a2;

@end
