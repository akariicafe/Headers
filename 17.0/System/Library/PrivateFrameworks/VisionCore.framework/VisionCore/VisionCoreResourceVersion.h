@class NSString;

@interface VisionCoreResourceVersion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int major;
@property (readonly, nonatomic) unsigned int minor;
@property (readonly, nonatomic) unsigned int micro;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;

+ (id)versionForStringRepresentation:(id)a0;
+ (id)invalidVersion;
+ (id /* block */)newerFirstComparator;
+ (id /* block */)olderFirstComparator;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithMajor:(unsigned int)a0 minor:(unsigned int)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMajor:(unsigned int)a0 minor:(unsigned int)a1 micro:(unsigned int)a2;
- (id)initWithMajor:(unsigned int)a0;
- (BOOL)isEqualToResourceVersion:(id)a0;

@end
