@class NSString;

@interface PPSocialHighlightStoreRequestKey : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long limit;
@property (readonly, nonatomic) NSString *client;
@property (readonly, nonatomic) NSString *variant;

+ (id)socialHighlightStoreRequestKeyWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2;

- (id)init;
- (unsigned long long)hash;
- (id)copyWithReplacementLimit:(unsigned long long)a0;
- (id)copyWithReplacementVariant:(id)a0;
- (id)initWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2;
- (id)description;
- (id)copyWithReplacementClient:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToSocialHighlightStoreRequestKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
