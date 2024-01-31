@class NSMutableArray;

@interface TSDMagicMoveMatchingEngine : NSObject {
    NSMutableArray *_matches;
}

+ (id)matchingEngine;

- (id)init;
- (void)dealloc;
- (id)matchResults;
- (void)addMatches:(id)a0;
- (void)addMatch:(id)a0;

@end
