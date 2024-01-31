@class NSString;

@interface _NSKeyValueObjectAndKeyPair : NSObject <NSCopying> {
    id _object;
    unsigned long long _objectPointer;
    Class _objectClass;
    void *_context;
    NSString *_key;
}

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
