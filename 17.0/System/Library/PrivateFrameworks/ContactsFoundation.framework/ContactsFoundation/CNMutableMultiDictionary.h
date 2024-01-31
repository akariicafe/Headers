@interface CNMutableMultiDictionary : CNMultiDictionary

- (void)removeObject:(id)a0 forKey:(id)a1;
- (void)setObjects:(id)a0 forKey:(id)a1;
- (void)addNonNilObject:(id)a0 forKey:(id)a1;
- (void)removeObjectsForKey:(id)a0;
- (void)addObject:(id)a0 forKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
