@interface TMLRuntimeObject : NSObject

- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (void)registerTMLProperty:(id)a0;
- (BOOL)tmlHasPropertyForKey:(id)a0;

@end
