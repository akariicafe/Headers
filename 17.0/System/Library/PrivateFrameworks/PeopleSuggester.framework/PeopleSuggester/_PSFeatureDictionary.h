@class NSMutableDictionary;

@interface _PSFeatureDictionary : NSMutableDictionary {
    NSMutableDictionary *_timeBuckets;
    NSMutableDictionary *_otherValues;
    unsigned long long _count;
}

- (id)init;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;

@end
