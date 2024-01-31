@class NSUUID, NSArray;

@interface CLMiLoServiceDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *serviceIdentifier;
@property (readonly, nonatomic) unsigned long long serviceType;
@property (readonly, nonatomic) NSArray *locationTypes;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithServiceIdentifier:(id)a0 serviceType:(unsigned long long)a1 locationTypes:(id)a2;

@end
