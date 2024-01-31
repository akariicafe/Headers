@class NSString, NSMutableDictionary;

@interface MAConcreteNode : MANode {
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
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;

@end
