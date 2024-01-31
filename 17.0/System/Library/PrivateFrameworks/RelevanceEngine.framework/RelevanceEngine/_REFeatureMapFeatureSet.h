@class NSDictionary;

@interface _REFeatureMapFeatureSet : NSSet {
    NSDictionary *_map;
}

- (id)objectEnumerator;
- (id)member:(id)a0;
- (unsigned long long)count;
- (void).cxx_destruct;
- (id)initWithFeatureMap:(id)a0;

@end
