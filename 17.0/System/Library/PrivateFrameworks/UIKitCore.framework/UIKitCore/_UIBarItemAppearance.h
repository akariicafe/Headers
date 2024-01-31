@class NSArray;

@interface _UIBarItemAppearance : _UIAppearance {
    NSArray *_blindViewAppearances;
}

+ (id)_rootAppearancesNode;
+ (id)_appearanceForClass:(Class)a0 withContainerList:(id)a1;

- (void)dealloc;
- (void)_handleSetterInvocation:(id)a0;
- (void)_handleGetterInvocation:(id)a0;

@end
