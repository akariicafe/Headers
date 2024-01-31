@class NSMutableDictionary;

@interface TRIPruningFactorLevelCacheGuardedData : NSObject {
    id /* block */ loadFactorLevels;
    NSMutableDictionary *requiredLevels;
    NSMutableDictionary *prefetchedLevels;
}

- (void).cxx_destruct;

@end
