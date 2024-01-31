@interface _UIBarAppearanceData : NSObject <NSCopying> {
    BOOL _immutable;
}

+ (id)decodeFromCoder:(id)a0 prefix:(id)a1;

- (BOOL)checkEqualTo:(id)a0;
- (long long)hashInto:(long long)a0;
- (void)describeInto:(id)a0;
- (void)encodeToCoder:(id)a0 prefix:(id)a1;
- (void)assertMutable:(SEL)a0;
- (id)markReadOnly;
- (id)writableInstance;
- (unsigned long long)hash;
- (id)replicate;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
