@class NSString;

@interface CapturedSystemState : NSObject

@property (nonatomic) unsigned int cosmState;
@property (nonatomic) unsigned long long reasonFlags;
@property (nonatomic) unsigned long long wrmStatus;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL cellPrivateNetworkActive;
@property (nonatomic) int cellularRAT;
@property (nonatomic) int cellularRSRP;
@property (nonatomic) int cellularNRFrequencyBand;
@property (nonatomic) long long cellularBandwidth;
@property (readonly, nonatomic) BOOL cellularExpensive;
@property (readonly, nonatomic) BOOL cellularWRMExpensive;
@property (readonly, nonatomic) BOOL cellularPrivateNetwork;
@property (nonatomic) double largeTransferHysteresisTime;
@property (nonatomic) long long largeTransferHysteresisWins;
@property (nonatomic) long long openedSISFlows;
@property (nonatomic) long long openedAppleStackFlows;
@property (nonatomic) long long openedNonAppleStackFlows;
@property (nonatomic) int outrankPercentFGExploited;
@property (nonatomic) int outrankPercentFGNonExploited;
@property (nonatomic) int outrankPercentIconShown;
@property (nonatomic) int outrankNumIconOnTransitions;
@property (nonatomic) int outrankNumFGAppsExploiting;
@property (nonatomic) int outrankNumFGAppsNonExploiting;
@property (retain, nonatomic) NSString *wifiLargeTransferInitiatingName;
@property (nonatomic) unsigned long long wifiLargeTransferInitiatingCount;
@property (nonatomic) int wifiRAT;
@property (nonatomic) int wifiRSSI;
@property (readonly, nonatomic) BOOL wifiSecure;

- (void).cxx_destruct;

@end
