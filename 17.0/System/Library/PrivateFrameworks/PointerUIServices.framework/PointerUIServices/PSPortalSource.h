@interface PSPortalSource : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long sourceLayerRenderID;
@property (readonly, nonatomic) unsigned int sourceContextID;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSourceContextID:(unsigned int)a0 sourceLayerRenderID:(unsigned long long)a1;

@end
