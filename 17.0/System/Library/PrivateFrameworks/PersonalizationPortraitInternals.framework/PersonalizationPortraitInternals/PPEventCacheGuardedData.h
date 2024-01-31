@class NSMutableDictionary, NSMutableIndexSet, NSArray, NSMutableArray;

@interface PPEventCacheGuardedData : NSObject {
    NSMutableArray *_cachedEvents;
    NSMutableIndexSet *_cachedRanges;
    unsigned long long _extraSecondsToBackfill;
    NSMutableDictionary *_cachedEventHighlights;
    NSArray *_fileBackedPlists;
}

- (void).cxx_destruct;

@end
