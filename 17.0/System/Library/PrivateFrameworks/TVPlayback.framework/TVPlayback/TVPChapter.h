@class NSString, TVPTimeRange, TVPDateRange;

@interface TVPChapter : NSObject

@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *chapterDescription;
@property (retain, nonatomic) TVPTimeRange *timeRange;
@property (retain, nonatomic) TVPDateRange *dateRange;

- (void).cxx_destruct;

@end
