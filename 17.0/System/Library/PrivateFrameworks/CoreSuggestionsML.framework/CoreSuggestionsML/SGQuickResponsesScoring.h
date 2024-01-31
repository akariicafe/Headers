@interface SGQuickResponsesScoring : NSObject

+ (id)categoryScoresWithModelScores:(id)a0 configReplies:(id)a1;
+ (id)modelScoresWithUnweightedScores:(id)a0 configReplies:(id)a1;
+ (id)sortedWithUnweightedScores:(id)a0 config:(id)a1;

@end
