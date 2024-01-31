@class NSData, NSString, NSURL, NSArray, SUUIReviewConfiguration, SUUIUber, SUUIProductPageItem, SUUIProductPageProductInfo, NSHTTPURLResponse, SSMetricsConfiguration;

@interface SUUIProductPage : NSObject <NSCopying>

@property (nonatomic) long long defaultPageFragment;
@property (retain, nonatomic) SUUIProductPageItem *item;
@property (retain, nonatomic) NSData *ITMLData;
@property (retain, nonatomic) NSHTTPURLResponse *ITMLResponse;
@property (retain, nonatomic) SSMetricsConfiguration *metricsConfiguration;
@property (copy, nonatomic) NSString *metricsPageDescription;
@property (copy, nonatomic) NSURL *pageURL;
@property (retain, nonatomic) SUUIProductPageProductInfo *productInformation;
@property (copy, nonatomic) NSArray *relatedContentSwooshes;
@property (retain, nonatomic) SUUIReviewConfiguration *reviewConfiguration;
@property (retain, nonatomic) SUUIUber *uber;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
