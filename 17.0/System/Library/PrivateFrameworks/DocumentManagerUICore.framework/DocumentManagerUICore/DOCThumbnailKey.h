@class DOCNodeThumbnailIdentifier, DOCThumbnailDescriptor;

@interface DOCThumbnailKey : NSObject <NSCopying>

@property (readonly, nonatomic) DOCNodeThumbnailIdentifier *primaryKey;
@property (readonly, nonatomic) DOCThumbnailDescriptor *descriptor;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPrimaryKey:(id)a0 descriptor:(id)a1;

@end
