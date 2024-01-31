@class NSString, NSMutableDictionary;

@interface UIGestureGraphElement : NSObject {
    NSMutableDictionary *_properties;
}

@property (readonly, copy, nonatomic) NSString *label;

- (void)setProperties:(id)a0;
- (id)initWithLabel:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (void)removeAllProperties;
- (id)description;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removePropertyForKey:(id)a0;
- (BOOL)hasProperties:(id)a0;
- (id)propertyForKey:(id)a0;

@end
