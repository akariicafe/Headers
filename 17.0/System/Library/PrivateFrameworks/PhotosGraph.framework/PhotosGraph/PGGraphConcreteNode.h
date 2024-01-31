@class NSString, NSMutableDictionary;

@interface PGGraphConcreteNode : PGGraphNode {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    NSString *_label;
}

- (id)label;
- (id)propertyDictionary;
- (BOOL)hasProperties;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (id)name;
- (unsigned short)domain;
- (id)UUID;
- (id)propertyForKey:(id)a0;
- (unsigned long long)propertiesCount;
- (id)propertyKeys;
- (id)_stringValueForPropertyWithKey:(id)a0;

@end
