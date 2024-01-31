@class NSDictionary, NSEnumerator, NSString;

@interface BRContainerBundlePropertyEnumerator : NSEnumerator {
    NSDictionary *_plist;
    NSEnumerator *_enumerator;
    NSString *_propertyKey;
    Class _valueClass;
}

- (id)nextObject;
- (id)initWithContainerPlist:(id)a0 propertyKey:(id)a1 valuesOfClass:(Class)a2;
- (void).cxx_destruct;

@end
