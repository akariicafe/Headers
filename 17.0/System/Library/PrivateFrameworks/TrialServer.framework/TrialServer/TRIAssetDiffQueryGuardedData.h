@class NSError, NSMutableDictionary, NSDate;

@interface TRIAssetDiffQueryGuardedData : NSObject {
    NSMutableDictionary *recordIdsForTargetAssetIds;
    NSDate *retryAfter;
    NSError *error;
}

- (void).cxx_destruct;

@end
