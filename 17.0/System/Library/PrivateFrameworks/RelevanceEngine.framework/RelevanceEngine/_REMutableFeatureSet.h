@class NSMutableSet;

@interface _REMutableFeatureSet : REMutableFeatureSet {
    NSMutableSet *_names;
    NSMutableSet *_features;
}

- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithFeatures:(id)a0;
- (unsigned long long)count;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)addFeature:(id)a0;
- (id)initWithFeature:(id)a0;
- (id)featureWithName:(id)a0;
- (void)removeFeature:(id)a0;
- (BOOL)containsFeature:(id)a0;
- (void)removeAllFeatures;

@end
