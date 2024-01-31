@class VSIdentityProvider, VSSetTopBoxProfile;

@interface VSSetTopBoxInfoQueryResult : NSObject

@property (copy, nonatomic) VSIdentityProvider *setTopBoxProvider;
@property (copy, nonatomic) VSSetTopBoxProfile *profile;

- (void).cxx_destruct;

@end
