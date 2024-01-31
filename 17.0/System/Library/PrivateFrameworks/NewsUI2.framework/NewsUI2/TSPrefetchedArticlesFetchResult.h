@class NSString, NSArray, NSDictionary;

@interface TSPrefetchedArticlesFetchResult : NSObject {
    void /* unknown type, empty encoding */ selectedArticleID;
    void /* unknown type, empty encoding */ articleIDs;
    void /* unknown type, empty encoding */ prefetchedHeadlines;
}

@property (nonatomic, readonly) NSString *selectedArticleID;
@property (nonatomic, readonly) NSArray *articleIDs;
@property (nonatomic, readonly) NSDictionary *prefetchedHeadlines;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSelectedArticleID:(id)a0 articleIDs:(id)a1 prefetchedHeadlines:(id)a2;

@end
