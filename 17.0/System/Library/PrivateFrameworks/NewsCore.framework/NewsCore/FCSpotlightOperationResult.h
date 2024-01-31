@class NSString, FCColor, NSDate;
@protocol FCHeadlineProviding, FCCardStyleProviding;

@interface FCSpotlightOperationResult : NSObject

@property (readonly, nonatomic) id<FCHeadlineProviding> headline;
@property (readonly, copy, nonatomic) NSString *channelID;
@property (readonly, copy, nonatomic) NSString *eyebrowTitle;
@property (readonly, copy, nonatomic) NSString *titleText;
@property (readonly, copy, nonatomic) NSString *subTitleText;
@property (readonly, copy, nonatomic) NSString *ctaText;
@property (readonly, copy, nonatomic) FCColor *titleColor;
@property (readonly, copy, nonatomic) NSDate *publishDate;
@property (readonly, copy, nonatomic) id<FCCardStyleProviding> spotlightItemStyle;
@property (readonly, copy, nonatomic) id<FCCardStyleProviding> spotlightItemDarkStyle;

- (void).cxx_destruct;
- (id)initWithSpotlightGroupConfig:(id)a0 headline:(id)a1;

@end
