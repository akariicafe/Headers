@class NSMapTable;

@interface _DYNSKVCMutableCollectionPropertyInfo : NSObject {
    Class _class;
    NSMapTable *_selectorBindingsMap;
    NSMapTable *_propertyBindingsMap;
}

+ (void)initialize;
+ (id)mutableCollectionPropertyInfoForClass:(Class)a0;

- (void)dealloc;
- (id)initWithClass:(Class)a0;
- (id)_stringWithCapitalizedFirstLetter:(id)a0;
- (id)bindingForProperty:(id)a0;
- (id)bindingForSelector:(SEL)a0;
- (void)dy_synthesizeMutableArrayProperty:(id)a0 withInstanceVariable:(id)a1;
- (void)dy_synthesizeMutableSetProperty:(id)a0 withInstanceVariable:(id)a1;

@end
