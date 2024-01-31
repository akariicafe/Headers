@class NSString;

@interface CAStateSetValue : CAStateElement {
    id _value;
}

@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) id value;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCAMLWriter:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)CAMLTypeSupportedForKey:(id)a0;
- (void)apply:(id)a0;
- (id)debugDescription;
- (void)foreachLayer:(id /* block */)a0;
- (id)CAMLTypeForKey:(id)a0;
- (BOOL)matches:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
