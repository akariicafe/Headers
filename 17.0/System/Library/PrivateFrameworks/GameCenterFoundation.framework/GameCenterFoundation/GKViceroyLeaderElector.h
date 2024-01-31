@class NSString, NSMutableDictionary, NSDictionary;
@protocol GKTransportSupport;

@interface GKViceroyLeaderElector : NSObject

@property (copy, nonatomic) id /* block */ chooseHostCompletion;
@property (retain, nonatomic) NSMutableDictionary *hostScores;
@property (nonatomic) BOOL hostScoreForQuery;
@property (nonatomic) NSString *localPlayerPeerID;
@property (nonatomic) BOOL needHostScore;
@property (retain, nonatomic) NSDictionary *networkStatistics;
@property (weak, nonatomic) id<GKTransportSupport> transportSupport;

- (void).cxx_destruct;
- (void)addHostScore:(int)a0 forPlayer:(id)a1;
- (void)calculateHostScore;
- (void)chooseBestHostingPlayerWithCompletionHandler:(id /* block */)a0;
- (BOOL)haveAllHostScores;
- (id)initWithTransportSupport:(id)a0;
- (void)networkStatisticsDidChange:(id)a0 localPlayerPeerID:(id)a1;
- (void)receivedChooseHostData:(id)a0 fromPlayerID:(id)a1;
- (BOOL)selectHostIfRequestedAndAllScored;
- (void)sendHostScoreAsQuery:(BOOL)a0;

@end
