@interface _NSNestedDictionary : NSMutableDictionary {
    id _locals;
    id _bindings;
}

- (id)objectEnumerator;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;

@end
