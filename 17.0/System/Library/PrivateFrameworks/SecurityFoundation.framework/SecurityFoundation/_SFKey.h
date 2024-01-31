@class NSData, _SFKeySpecifier, NSString;

@interface _SFKey : NSObject {
    id _keyInternal;
}

@property (class, readonly, nonatomic, getter=_attributesClass) Class attributesClass;

@property (readonly, nonatomic) NSData *keyData;
@property (readonly, copy, nonatomic) _SFKeySpecifier *keySpecifier;
@property (readonly, copy, nonatomic) NSString *keyDomain;

+ (id)_specifierForSecKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;

- (id)initWithAttributes:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithData:(id)a0 specifier:(id)a1 error:(id *)a2;
- (id)initRandomKeyWithSpecifier:(id)a0;

@end
