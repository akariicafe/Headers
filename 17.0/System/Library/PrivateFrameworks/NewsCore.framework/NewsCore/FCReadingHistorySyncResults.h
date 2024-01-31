@class NSArray;

@interface FCReadingHistorySyncResults : NSObject {
    NSArray *_modifiedArticleIDs;
    NSArray *_deletedArticleIDs;
    NSArray *_newlyCreatedArticleIDs;
}

- (void).cxx_destruct;

@end
