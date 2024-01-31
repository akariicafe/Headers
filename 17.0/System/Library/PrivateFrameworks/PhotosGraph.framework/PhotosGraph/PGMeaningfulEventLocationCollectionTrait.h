@interface PGMeaningfulEventLocationCollectionTrait : PGMeaningfulEventCollectionTrait

@property (nonatomic) BOOL useStrictNegativeNodesMatching;
@property (nonatomic) BOOL skipNegativeRequirementForMissingLocation;

- (id)initWithNodes:(id)a0 negativeNodes:(id)a1;

@end
