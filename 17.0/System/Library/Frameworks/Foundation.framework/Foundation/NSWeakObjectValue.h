@interface NSWeakObjectValue : NSValue {
    void *_value;
    id _object;
    BOOL _useFallback;
}

- (id)initWithObject:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (const char *)objCType;
- (id)nonretainedObjectValue;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (void)getValue:(void *)a0;
- (id)weakObjectValue;
- (BOOL)isEqualToValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
