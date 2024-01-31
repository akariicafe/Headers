@class NSString;

@interface FCArticleLinkBehaviorConfig : NSObject

@property (readonly, nonatomic) BOOL openArticlesAsModals;
@property (readonly, nonatomic) BOOL lohAnimationEnabled;
@property (readonly, nonatomic) BOOL lohAnimationCompletesInArticle;
@property (readonly, nonatomic) NSString *animationTitleLine1;
@property (readonly, nonatomic) NSString *animationTitleLine2;
@property (readonly, nonatomic) NSString *animationBody;
@property (readonly, nonatomic) long long animationQuiescenceInterval;
@property (readonly, nonatomic) int animationMaxCount;
@property (readonly, nonatomic) int animationCampaignVersion;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;

@end
