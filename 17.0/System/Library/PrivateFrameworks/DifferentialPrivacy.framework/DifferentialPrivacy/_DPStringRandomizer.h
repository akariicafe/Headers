@protocol _DPStringRandomizer;

@interface _DPStringRandomizer : NSObject

@property (readonly, nonatomic) unsigned long long algorithm;
@property (readonly, nonatomic) id<_DPStringRandomizer> randomizer;

+ (id)numbersRandomizerWithEpsilon:(double)a0 privatizationAlgorithm:(unsigned long long)a1 dataAlgorithm:(unsigned long long)a2 range:(unsigned long long)a3;
+ (id)stringRandomizerWithEpsilon:(double)a0 privatizationAlgorithm:(unsigned long long)a1 dataAlgorithm:(unsigned long long)a2 algorithmParameters:(id)a3;
+ (id)stringRandomizerWithEpsilon:(double)a0 privatizationAlgorithm:(unsigned long long)a1 dataAlgorithm:(unsigned long long)a2 algorithmParameters:(id)a3 huffmanTableClass:(id)a4;

- (id)initWithEpsilon:(double)a0 privatizationAlgorithm:(unsigned long long)a1 dataAlgorithm:(unsigned long long)a2 algorithmParameters:(id)a3 huffmanTableClass:(id)a4;
- (id)init;
- (id)initWithEpsilon:(double)a0 privatizationAlgorithm:(unsigned long long)a1 dataAlgorithm:(unsigned long long)a2 range:(unsigned long long)a3;
- (id)description;
- (void).cxx_destruct;

@end
