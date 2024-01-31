@class NSString, MRStaticRouteBannerRequest;

@interface MRRouteBannerRequest : MRBaseBannerRequest

@property (retain, nonatomic) NSString *routeIdentifier;
@property (nonatomic) unsigned long long bannerType;
@property (retain, nonatomic) MRStaticRouteBannerRequest *staticRequest;

+ (BOOL)supportsSecureCoding;
+ (id)requestWithStaticRequest:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRouteIdentifier:(id)a0 staticRequest:(id)a1;

@end
