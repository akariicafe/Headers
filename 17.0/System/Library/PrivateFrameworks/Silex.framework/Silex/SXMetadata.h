@class SXTabBarAppearance, NSString, SXFeedNavigationAppearance, SXJSONDictionary;

@interface SXMetadata : SXJSONObject

@property (readonly, nonatomic) BOOL transparentToolbar;
@property (readonly, nonatomic) NSString *canonicalURL;
@property (readonly, nonatomic) NSString *thumbnailImageIdentifier;
@property (readonly, nonatomic) NSString *documentVersion;
@property (readonly, nonatomic) SXTabBarAppearance *tabBarAppearance;
@property (readonly, nonatomic) SXFeedNavigationAppearance *feedNavigationAppearance;
@property (readonly, nonatomic) SXJSONDictionary *campaignData;
@property (readonly, nonatomic) BOOL showNewsSubscribe;
@property (readonly, nonatomic) BOOL suppressMoreFromPublisher;
@property (readonly, nonatomic) BOOL suppressRelatedArticles;
@property (readonly, nonatomic) long long suppressRecommendedReads;

- (long long)suppressRecommendedReadsWithValue:(id)a0 withType:(int)a1;

@end
