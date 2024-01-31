@class RESortedDictionary;

@interface _REContinuousHistogram : REHistogram {
    unsigned long long _binningValue;
    RESortedDictionary *_values;
}

- (unsigned long long)hash;
- (void)addValue:(unsigned long long)a0;
- (void)dealloc;
- (void)removeValue:(unsigned long long)a0;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (unsigned long long)count;
- (unsigned long long)standardDeviation;
- (unsigned long long)countForValue:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)mean;
- (void)_enumerateValuesBetweenMinValue:(unsigned long long)a0 maxValue:(unsigned long long)a1 block:(id /* block */)a2;
- (unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)a0 maxValue:(unsigned long long)a1;
- (id)initWithFeature:(id)a0 binningSize:(unsigned long long)a1;

@end
