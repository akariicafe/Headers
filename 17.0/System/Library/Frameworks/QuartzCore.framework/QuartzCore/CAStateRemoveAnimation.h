@class NSString;

@interface CAStateRemoveAnimation : CAStateElement

@property (copy, nonatomic) NSString *key;

+ (BOOL)supportsSecureCoding;

- (id)keyPath;
- (void)dealloc;
- (void)encodeWithCAMLWriter:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)apply:(id)a0;
- (id)debugDescription;
- (id)CAMLTypeForKey:(id)a0;
- (BOOL)matches:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
