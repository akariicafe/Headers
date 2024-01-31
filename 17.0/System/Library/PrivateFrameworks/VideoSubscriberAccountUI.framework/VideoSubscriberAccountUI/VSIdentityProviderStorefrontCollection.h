@class NSString, NSMutableArray;

@interface VSIdentityProviderStorefrontCollection : NSObject

@property (retain, nonatomic) NSMutableArray *mutableFeaturedIdentityProviders;
@property (retain, nonatomic) NSMutableArray *mutableAllIdentityProviders;
@property (retain, nonatomic) NSString *storefrontTwoCharCode;
@property (retain, nonatomic) NSString *localizedDisplayName;

- (id)init;
- (void).cxx_destruct;
- (id)allIdentityProviders;
- (void)featureProvidersInCurrentStorefront;
- (id)featuredIdentityProviders;

@end
