@class NSError, LSRebuildStatisticsGatherer, NSMutableSet;

@interface LSDatabaseRebuildContext : NSObject {
    LSRebuildStatisticsGatherer *_statsGatherer;
    NSMutableSet *_overriddenPlugins;
    NSError *_lastObservedError;
}

- (void).cxx_destruct;
- (id)initWithStatsGatherer:(id)a0;

@end
