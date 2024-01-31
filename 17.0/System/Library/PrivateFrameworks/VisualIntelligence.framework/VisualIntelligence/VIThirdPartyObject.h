@class NSString, NSData;

@interface VIThirdPartyObject : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *imageURL;
@property (readonly, nonatomic) NSString *thumbnailURL;
@property (readonly, nonatomic) NSData *metadata;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObjectIdentifier:(id)a0 imageURL:(id)a1 thumbnailURL:(id)a2 metadata:(id)a3;

@end
