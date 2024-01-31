@class NSURL, NSString;

@interface SSVPlaybackLeaseConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) long long leaseType;
@property (copy, nonatomic) NSURL *beginLeaseURL;
@property (copy, nonatomic) NSURL *certificateURL;
@property (copy, nonatomic) NSURL *getAssetURL;
@property (copy, nonatomic) NSURL *refreshLeaseURL;
@property (copy, nonatomic) NSURL *pastisCertificateURL;
@property (copy, nonatomic) NSURL *pastisKeyServerURL;
@property (copy, nonatomic) NSURL *provisionMachineURL;
@property (copy, nonatomic) NSURL *syncMachineURL;
@property (copy, nonatomic) NSString *storeFrontSuffix;

- (id)initWithURLBagDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCertificateURL:(id)a0 leaseType:(long long)a1 leaseURL:(id)a2 pastisKeyServerURL:(id)a3 provisionMachineURL:(id)a4 storeFrontSuffix:(id)a5 syncMachineURL:(id)a6;
- (id)initWithCertificateURL:(id)a0 leaseURL:(id)a1 pastisKeyServerURL:(id)a2 provisionMachineURL:(id)a3 storeFrontSuffix:(id)a4 syncMachineURL:(id)a5;
- (id)initWithURLBagDictionary:(id)a0 leaseType:(long long)a1;

@end
