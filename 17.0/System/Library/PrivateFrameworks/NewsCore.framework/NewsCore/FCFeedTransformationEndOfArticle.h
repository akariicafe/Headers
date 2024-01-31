@class NSString;
@protocol FCPurchaseProviderType;

@interface FCFeedTransformationEndOfArticle : NSObject <FCFeedTransforming>

@property (nonatomic) double paidHeadlineRatio;
@property (nonatomic) unsigned long long maxiumInaccessibleHeadlineCount;
@property (nonatomic) unsigned long long expireArticlesAfter;
@property (nonatomic) BOOL isPaywallAvailable;
@property (retain, nonatomic) id<FCPurchaseProviderType> purchaseProvider;
@property (nonatomic) unsigned long long minimumResultHeadlineCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformationWithConfiguration:(id)a0 context:(id)a1 isPaywallAvailable:(BOOL)a2;

@end
