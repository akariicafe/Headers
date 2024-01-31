@interface PGPeopleFeatureExtractor : PGGraphFeatureExtractor

+ (id)_fixLabels:(id)a0 toLength:(unsigned long long)a1;
+ (id)_labelFromPersonNode:(id)a0;

- (id)initWithGraph:(id)a0 error:(id *)a1;
- (id)initWithTopNumberOfPeople:(unsigned long long)a0 graph:(id)a1 error:(id *)a2;

@end
