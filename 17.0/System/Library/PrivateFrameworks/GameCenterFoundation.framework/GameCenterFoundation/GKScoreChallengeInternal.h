@class GKScoreInternal, GKLeaderboardInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal

@property (copy, nonatomic) GKScoreInternal *score;
@property (retain, nonatomic) GKLeaderboardInternal *leaderboard;

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;

- (id)titleText;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)serverRepresentationForReceivingPlayer:(id)a0;

@end
