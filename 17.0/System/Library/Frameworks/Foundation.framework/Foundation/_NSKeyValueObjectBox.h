@interface _NSKeyValueObjectBox : NSObject <NSCopying> {
    id _object;
    unsigned long long _objectPointer;
    Class _objectClass;
}

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
