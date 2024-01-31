@class NSString;

@interface TRIActivationEventRecord : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *parentId;
@property (readonly, nonatomic) NSString *factorPackSetId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *osBuild;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *regionCode;
@property (readonly, nonatomic) NSString *carrierBundleIdentifier;
@property (readonly, nonatomic) NSString *carrierCountryIsoCode;
@property (readonly, nonatomic) long long diagnosticsUsageEnabled;
@property (readonly, nonatomic) long long hasAne;
@property (readonly, nonatomic) NSString *aneVersion;

+ (id)recordWithParentId:(id)a0 factorPackSetId:(id)a1 deploymentId:(int)a2 osBuild:(id)a3 languageCode:(id)a4 regionCode:(id)a5 carrierBundleIdentifier:(id)a6 carrierCountryIsoCode:(id)a7 diagnosticsUsageEnabled:(long long)a8 hasAne:(long long)a9 aneVersion:(id)a10;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqualToRecord:(id)a0;
- (id)copyWithReplacementFactorPackSetId:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementDeploymentId:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementAneVersion:(id)a0;
- (id)copyWithReplacementCarrierBundleIdentifier:(id)a0;
- (id)copyWithReplacementCarrierCountryIsoCode:(id)a0;
- (id)copyWithReplacementDiagnosticsUsageEnabled:(long long)a0;
- (id)copyWithReplacementHasAne:(long long)a0;
- (id)copyWithReplacementLanguageCode:(id)a0;
- (id)copyWithReplacementOsBuild:(id)a0;
- (id)copyWithReplacementParentId:(id)a0;
- (id)copyWithReplacementRegionCode:(id)a0;
- (id)initWithParentId:(id)a0 factorPackSetId:(id)a1 deploymentId:(int)a2 osBuild:(id)a3 languageCode:(id)a4 regionCode:(id)a5 carrierBundleIdentifier:(id)a6 carrierCountryIsoCode:(id)a7 diagnosticsUsageEnabled:(long long)a8 hasAne:(long long)a9 aneVersion:(id)a10;

@end
