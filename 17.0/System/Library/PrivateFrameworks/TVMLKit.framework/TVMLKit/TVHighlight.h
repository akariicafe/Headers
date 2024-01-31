@class NSString, TVTimeRange, NSURL;

@interface TVHighlight : NSObject

@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *highlightDescription;
@property (retain, nonatomic) TVTimeRange *timeRange;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) TVTimeRange *dateRange;

- (void).cxx_destruct;

@end
