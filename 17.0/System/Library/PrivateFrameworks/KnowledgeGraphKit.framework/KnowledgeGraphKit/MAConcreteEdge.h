@class NSString, NSMutableDictionary;

@interface MAConcreteEdge : MAEdge {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    float _weight;
    NSString *_label;
}

- (float)weight;
- (id)label;
- (unsigned long long)memoryFootprint:(id)a0;
- (id)propertyDictionary;
- (BOOL)hasProperties;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)propertyForKey:(id)a0;
- (unsigned long long)propertiesCount;
- (id)propertyKeys;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;

@end
