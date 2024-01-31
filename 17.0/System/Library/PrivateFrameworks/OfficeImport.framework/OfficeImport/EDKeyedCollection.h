@class OITSUIntegerKeyDictionary;

@interface EDKeyedCollection : EDCollection {
    OITSUIntegerKeyDictionary *mMap;
}

- (void)removeAllObjects;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)addObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)insertIntoMap:(id)a0;
- (BOOL)isObjectInMap:(id)a0;
- (BOOL)isOverwritingKeyOK;
- (id)objectWithKey:(long long)a0;
- (void)removeFromMap:(id)a0;

@end
