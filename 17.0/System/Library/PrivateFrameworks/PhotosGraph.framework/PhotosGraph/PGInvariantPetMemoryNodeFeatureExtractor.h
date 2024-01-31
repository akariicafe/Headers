@interface PGInvariantPetMemoryNodeFeatureExtractor : PGGraphMemoryNodeFeatureExtractor

+ (id)_nodeProcessingForVersion:(long long)a0 node:(id)a1;
+ (id)_labelProcessingForPetNodeSpecies:(unsigned long long)a0;
+ (id)_labelsForVersion:(long long)a0;

- (id)initWithError:(id *)a0;
- (id)initWithVersion:(long long)a0 error:(id *)a1;

@end
