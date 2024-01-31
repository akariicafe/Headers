@class NSMutableArray;

@interface TSDMagicMoveMatchingEngine : NSObject {
    NSMutableArray *_matches;
}

+ (id)matchingEngine;

- (id)init;
- (id)matchResults;
- (void).cxx_destruct;
- (void)addMatches:(id)a0;
- (void)addMatch:(id)a0;

@end
