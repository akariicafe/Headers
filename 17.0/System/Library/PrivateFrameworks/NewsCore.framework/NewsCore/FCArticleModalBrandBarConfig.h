@class NSString;

@interface FCArticleModalBrandBarConfig : NSObject

@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) long long quiescenceInterval;
@property (readonly, nonatomic) int maxCount;
@property (readonly, nonatomic) NSString *messageTitle;
@property (readonly, nonatomic) NSString *messageBody;
@property (readonly, nonatomic) NSString *ctaTitle;
@property (readonly, nonatomic) NSString *ctaUrl;
@property (readonly, nonatomic) int campaignVersion;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;

@end
