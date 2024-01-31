@interface CNMutableOrderedDictionary : CNOrderedDictionary

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)initWithDictionary:(id)a0 orderedKeys:(id)a1;

@end
