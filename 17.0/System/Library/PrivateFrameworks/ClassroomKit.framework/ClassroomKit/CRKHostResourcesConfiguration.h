@class NSArray, NSObject;
@protocol CRKIPAddressProviding, CRKIdentity;

@interface CRKHostResourcesConfiguration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *resourceURLs;
@property (readonly, nonatomic) id<CRKIdentity> serverIdentity;
@property (readonly, copy, nonatomic) NSArray *trustedCertificates;
@property (nonatomic) unsigned long long maximumAllowedDownloads;
@property (nonatomic) unsigned short port;
@property (retain, nonatomic) NSObject<CRKIPAddressProviding> *IPAddressProvider;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResourceURLs:(id)a0 serverIdentity:(id)a1 trustedAnchorCertificates:(id)a2;
- (id)initWithResourceURLs:(id)a0 serverIdentity:(id)a1 trustedCertificates:(id)a2;

@end
