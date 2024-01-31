@class NSString;

@interface MRGroupSessionBannerRequest : MRBaseBannerRequest

@property (retain, nonatomic) NSString *hostDisplayName;
@property (nonatomic) unsigned char routeType;

+ (BOOL)supportsSecureCoding;
+ (id)requestWithBundleIdentifierAffinity:(id)a0 hostDisplayName:(id)a1 routeType:(unsigned char)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifierAffinity:(id)a0 hostDisplayName:(id)a1 routeType:(unsigned char)a2;

@end
