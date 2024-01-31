@class NSArray;

@interface SGQuickResponsesRecords : NSObject

@property (readonly, nonatomic) NSArray *replyRecords;
@property (readonly, nonatomic) double totalOpportunities;
@property (readonly, nonatomic) double totalDisplayed;
@property (readonly, nonatomic) double totalSelected;
@property (readonly, nonatomic) double totalMatched;
@property (readonly, nonatomic) double totalUnmatched;

- (void).cxx_destruct;
- (id)initWithReplyRecords:(id)a0 totalOpportunities:(double)a1 totalDisplayed:(double)a2 totalSelected:(double)a3 totalMatched:(double)a4 totalUnmatched:(double)a5;

@end
