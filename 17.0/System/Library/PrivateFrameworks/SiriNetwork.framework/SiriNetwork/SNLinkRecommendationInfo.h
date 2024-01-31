@interface SNLinkRecommendationInfo : NSObject

@property (nonatomic) BOOL btPreference;
@property (nonatomic) BOOL wifiPreference;
@property (nonatomic) unsigned long long btRSSI;
@property (nonatomic) long long wifiRSSI;
@property (nonatomic) long long wifiSNR;
@property (nonatomic) long long beaconPER;
@property (nonatomic) long long nwType;
@property (nonatomic) long long wifiCCA;
@property (nonatomic) long long lsmRecommendationBe;
@property (nonatomic) long long expectedThroughputVIBE;
@property (nonatomic) long long packetLifetimeVIBE;
@property (nonatomic) long long packetLossRateVIBE;
@property (nonatomic) long long btRetransmissionRateTx;
@property (nonatomic) long long btRetransmissionRateRx;
@property (nonatomic) long long btTech;
@property (nonatomic) double timeTaken;

@end
