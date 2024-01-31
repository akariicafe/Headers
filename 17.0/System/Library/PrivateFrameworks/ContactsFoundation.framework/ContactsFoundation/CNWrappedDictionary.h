@class NSDictionary;

@interface CNWrappedDictionary : NSDictionary {
    NSDictionary *_underlyingDictionary;
}

- (id)keyEnumerator;
- (unsigned long long)count;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
