@class NSString;

@interface CAStateRemoveElement : CAStateElement

@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) id object;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (void)encodeWithCAMLWriter:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)CAMLTypeSupportedForKey:(id)a0;
- (void)apply:(id)a0;
- (id)debugDescription;
- (id)CAMLTypeForKey:(id)a0;
- (BOOL)matches:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
