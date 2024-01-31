@class NSMutableDictionary;

@interface BSAbstractDefaultDomainClassMetadata : NSObject {
    Class _clazz;
    NSMutableDictionary *_propertyNameToPropertyMap;
    NSMutableDictionary *_selectorToPropertyMap;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
