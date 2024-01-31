@class NSArray;

@interface WLKSiriBestPlayablesRequest : WLKRequest

@property (readonly, copy, nonatomic) NSArray *statsIDs;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStatsIDs:(id)a0;
- (void)makeRequestWithCompletion:(id /* block */)a0;

@end
