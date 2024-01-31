@class SFMailRankingSignals;

@interface MSParsecSearchSessionTopHit : MSParsecSearchSessionMessageResult

@property (readonly, nonatomic) SFMailRankingSignals *mailRankingSignals;

+ (id)topHitWithIdentifier:(id)a0 date:(id)a1 mailRankingSignals:(id)a2;

- (void).cxx_destruct;
- (id)feedbackResult;
- (id)initWithIdentifier:(id)a0 date:(id)a1 mailRankingSignals:(id)a2;

@end
