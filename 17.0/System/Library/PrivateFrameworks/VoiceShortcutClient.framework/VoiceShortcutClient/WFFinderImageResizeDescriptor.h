@interface WFFinderImageResizeDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long format;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) BOOL preserveMetadata;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFormat:(unsigned long long)a0 size:(unsigned long long)a1 preserveMetadata:(BOOL)a2;

@end
