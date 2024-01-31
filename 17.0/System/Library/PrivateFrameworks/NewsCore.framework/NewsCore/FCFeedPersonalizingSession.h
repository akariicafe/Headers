@class NSString, FCDateRange;

@interface FCFeedPersonalizingSession : NSObject

@property (retain, nonatomic) FCDateRange *dateRange;
@property (nonatomic) unsigned long long fixedArticleCount;
@property (nonatomic) long long feedType;
@property (retain, nonatomic) NSString *sessionID;

- (void).cxx_destruct;

@end
