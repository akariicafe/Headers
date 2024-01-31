@class NSString, WBSCompletionQuery;

@interface QuickWebsiteSearchQuery : NSObject

@property (readonly, nonatomic) NSString *websiteNamePrefix;
@property (readonly, nonatomic) NSString *searchTerms;
@property (readonly, nonatomic) WBSCompletionQuery *completionQuery;

- (void).cxx_destruct;
- (id)initWithUserEnteredQuery:(id)a0;

@end
