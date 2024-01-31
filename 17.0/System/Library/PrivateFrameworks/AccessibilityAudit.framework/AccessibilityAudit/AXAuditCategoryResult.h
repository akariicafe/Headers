@class NSString, NSMutableString, NSArray, NSMutableArray;
@protocol AXAuditCategoryResultDelegate;

@interface AXAuditCategoryResult : AXAuditTimedResult

@property (retain, nonatomic) NSMutableArray *_mutableCases;
@property (retain, nonatomic) NSMutableString *_mutableLog;
@property (weak, nonatomic) id<AXAuditCategoryResultDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *caseResults;

- (id)init;
- (id)log;
- (id)description;
- (void).cxx_destruct;
- (void)addCaseResult:(id)a0;
- (id)allIssues;
- (void)appendLog:(id)a0;
- (long long)issueCount;
- (id)issueSummaryStrings;

@end
