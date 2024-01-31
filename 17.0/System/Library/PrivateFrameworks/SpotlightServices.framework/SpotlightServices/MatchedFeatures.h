@class NSArray, NSMutableArray;

@interface MatchedFeatures : NSObject

@property unsigned long long tokenIndex;
@property unsigned long long photoFeatureIndex;
@property double tokenMatchRatio;
@property double characterMatchRatio;
@property (retain) NSMutableArray *matchedPositions;
@property (retain) NSArray *matchedTypes;

- (void).cxx_destruct;
- (id)initMatchedFeaturesTokenIndex:(unsigned long long)a0 photoFeatureIndex:(unsigned long long)a1 matchedPositions:(id)a2 tokenMatchRatio:(double)a3 characterMatchRatio:(double)a4 matchedTypes:(id)a5;

@end
