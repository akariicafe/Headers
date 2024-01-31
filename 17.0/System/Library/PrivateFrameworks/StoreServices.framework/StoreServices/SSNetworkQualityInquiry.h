@class NSMutableArray, NSArray, SSPromise, NSMutableSet, NSObject, NWNetworkOfInterestManager;
@protocol OS_dispatch_queue;

@interface SSNetworkQualityInquiry : NSObject <NWNetworkOfInterestManagerDelegate> {
    NSArray *_lastKnownReports;
    long long _lastReportRefreshTimestamp;
    SSPromise *_currentInvestigation;
}

@property (readonly, nonatomic) NWNetworkOfInterestManager *manager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableSet *knownNetworks;
@property (retain, nonatomic) NSMutableArray *knownNetworksReadyHandlers;

+ (id)sharedInstance;
+ (BOOL)isEntitled;

- (id)init;
- (void)dealloc;
- (void)didStopTrackingNOI:(id)a0;
- (BOOL)areKnownNetworksReady;
- (id)investigateNetworks;
- (void)didStopTrackingAllNOIs:(id)a0;
- (void)performWhenKnownNetworksReady:(id /* block */)a0;
- (void).cxx_destruct;
- (void)drainKnownNetworksReadyHandlers;
- (void)didStartTrackingNOI:(id)a0;

@end
