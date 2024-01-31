@class RETaggedFeatureValueCountedSet;

@interface _RECategoricalHistogram : REHistogram {
    RETaggedFeatureValueCountedSet *_values;
}

- (unsigned long long)hash;
- (void)addValue:(unsigned long long)a0;
- (void)removeValue:(unsigned long long)a0;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (unsigned long long)count;
- (unsigned long long)standardDeviation;
- (unsigned long long)countForValue:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)mean;
- (unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)a0 maxValue:(unsigned long long)a1;
- (id)initWithFeature:(id)a0 binningSize:(unsigned long long)a1;

@end
