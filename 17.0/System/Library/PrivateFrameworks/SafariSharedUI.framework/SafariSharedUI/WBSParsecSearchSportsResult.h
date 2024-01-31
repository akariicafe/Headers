@class WBSParsecSportsScoreSummary, NSArray, NSString, WBSParsecSearchSportsAttributionExtraCompletionItem;

@interface WBSParsecSearchSportsResult : WBSParsecLegacySearchResult <WBSParsecSearchSportsResult> {
    WBSParsecSportsScoreSummary *_scoreSummary;
}

@property (readonly, copy, nonatomic) NSArray *images;
@property (readonly, copy, nonatomic) NSArray *individualScores;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) WBSParsecSearchSportsAttributionExtraCompletionItem *extraCompletionItem;

+ (id)_specializedSchema;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
