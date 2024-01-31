@class WiFiUsageNetworkDetails, NSMutableSet, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface WiFiUsageNetworkSession : WiFiUsageSession {
    WiFiUsageNetworkDetails *_lastNetworkDetails;
    BOOL _linkUp;
    NSDate *_lastLinkUpTime;
    NSDate *_lastLinkDownTime;
    double _networkUsageDuration;
    BOOL _dnuEnabled;
    NSMutableSet *_neighborBssList;
    NSMutableSet *_otherBssList;
    NSObject<OS_dispatch_queue> *_WiFiLinkStateBiomeEventQueue;
}

- (id)metricName;
- (void)scanningStateDidChange:(BOOL)a0 client:(unsigned long long)a1 neighborBSS:(id)a2 otherBSS:(id)a3;
- (id)initWithInterfaceName:(id)a0;
- (void)displayStateDidChange:(BOOL)a0;
- (void)linkStateDidChange:(BOOL)a0 isInvoluntary:(BOOL)a1 linkChangeReason:(long long)a2 linkChangeSubreason:(long long)a3 withNetworkDetails:(id)a4;
- (void)processForgetNetwork:(id)a0;
- (void)joinStateDidChange:(id)a0 withReason:(unsigned long long)a1 lastDisconnectReason:(long long)a2 lastJoinFailure:(long long)a3 andNetworkDetails:(id)a4;
- (void)sessionDidStart;
- (void)sessionDidEnd;
- (BOOL)isSessionHarvestable;
- (void).cxx_destruct;

@end
