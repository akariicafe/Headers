@protocol CRKIdentity;

@interface CRKMDMIdentityProvider : NSObject

@property (class, readonly, nonatomic) id<CRKIdentity> identity;

+ (id)new;

- (id)init;

@end
