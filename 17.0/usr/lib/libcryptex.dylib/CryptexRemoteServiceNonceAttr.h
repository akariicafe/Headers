@interface CryptexRemoteServiceNonceAttr : NSObject

@property (nonatomic) unsigned long long image_type;
@property (nonatomic) unsigned long long persistence;

- (id)init;
- (unsigned long long)getNonceDomainIndex;

@end
