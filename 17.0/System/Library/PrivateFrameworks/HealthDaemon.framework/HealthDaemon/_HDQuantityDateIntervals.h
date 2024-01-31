@class NSMutableArray;

@interface _HDQuantityDateIntervals : NSObject {
    double _currentStartInterval;
    double _currentEndInterval;
    long long _currentPairIndex;
    BOOL _containsUUIDs;
    NSMutableArray *_intervalPairs;
}

- (id)init;
- (void).cxx_destruct;

@end
