@interface HMDThreadNetworkStatusReport : NSObject

@property (readonly, nonatomic) unsigned long long numAdvertisedBRs;
@property (readonly, nonatomic) unsigned long long numAppleBRs;
@property (readonly, nonatomic) unsigned long long numThirdPartyBRs;
@property (readonly, nonatomic) unsigned long long numThreadNetworks;
@property (readonly, nonatomic) unsigned long long maxSimuIPPrefixesDetected;
@property (readonly, nonatomic) unsigned long long txTotal;
@property (readonly, nonatomic) unsigned long long txSuccess;
@property (readonly, nonatomic) unsigned long long txDelayAvg;
@property (readonly, nonatomic) unsigned long long rxTotal;
@property (readonly, nonatomic) unsigned long long rxSuccess;
@property (readonly, nonatomic) unsigned long long reportDuration;

- (id)initWithNumAdvertisedBRs:(unsigned long long)a0 numAppleBRs:(unsigned long long)a1 numThirdPartyBRs:(unsigned long long)a2 numThreadNetworks:(unsigned long long)a3 maxSimuIPPrefixesDetected:(unsigned long long)a4 txTotal:(unsigned long long)a5 txSuccess:(unsigned long long)a6 txDelayAvg:(unsigned long long)a7 rxTotal:(unsigned long long)a8 rxSuccess:(unsigned long long)a9 reportDuration:(unsigned long long)a10;

@end
