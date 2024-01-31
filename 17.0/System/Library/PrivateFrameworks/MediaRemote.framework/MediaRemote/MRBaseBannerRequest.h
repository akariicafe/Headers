@class NSString;

@interface MRBaseBannerRequest : NSObject <MRBannerRequestRepresentable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifierAffinity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestWithBundleIdentifierAffinity:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifierAffinity:(id)a0;

@end
