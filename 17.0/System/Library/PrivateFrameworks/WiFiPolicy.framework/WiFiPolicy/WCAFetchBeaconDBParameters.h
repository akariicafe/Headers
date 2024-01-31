@class NSString;

@interface WCAFetchBeaconDBParameters : NSObject

@property (nonatomic) float wlanTimDtimPeriod;
@property (retain, nonatomic) NSString *wlanHTCapabilities;
@property (retain, nonatomic) NSString *wlanWfaIeWmeQosInfo;
@property (retain, nonatomic) NSString *wlanHtexCapabilities;
@property (retain, nonatomic) NSString *wlanHTAmpduparam;
@property (retain, nonatomic) NSString *wlanVhtCapabilities;
@property (retain, nonatomic) NSString *wlanTxbf;
@property (retain, nonatomic) NSString *wlanAsel;
@property (retain, nonatomic) NSString *wlanFixedCapabilities;
@property (nonatomic) long long beaconInterval;
@property (nonatomic) BOOL QBSS_Load;
@property (nonatomic) BOOL has_11krm;
@property (nonatomic) BOOL UAPSD;
@property (nonatomic) float antennas11c;
@property (retain, nonatomic) NSString *antennas11n;
@property (nonatomic) float max_rates;

- (void).cxx_destruct;
- (void)fetchWithCompletion:(id /* block */)a0;

@end
