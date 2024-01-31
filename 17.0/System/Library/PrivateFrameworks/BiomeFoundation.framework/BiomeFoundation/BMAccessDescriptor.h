@class BMResourceSpecifier;

@interface BMAccessDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long domain;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) BMResourceSpecifier *resource;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)accessDescriptorWithAccessMode:(unsigned long long)a0;
- (id)initWithDomain:(unsigned long long)a0 accessMode:(unsigned long long)a1 resource:(id)a2;

@end
