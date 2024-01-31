@class NSURL, NSString, FCColor;

@interface FCSubscriptionButtonConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned long long subscriptionButtonType;
@property (nonatomic) unsigned long long targetType;
@property (nonatomic) unsigned long long postPurchaseActionType;
@property (copy, nonatomic) NSURL *postPurchaseURL;
@property (copy, nonatomic) NSString *landingPageArticleID;
@property (nonatomic, getter=shouldDismissLandingPagePostPurchase) BOOL dismissLandingPagePostPurchase;
@property (copy, nonatomic) NSString *trialText;
@property (copy, nonatomic) NSString *nonTrialText;
@property (retain, nonatomic) FCColor *buttonColor;
@property (retain, nonatomic) FCColor *buttonTextColor;

+ (id)defaultAmsSheetTargetSubscriptionButton;
+ (id)defaultArticleSubscriptionButtonWithLandingPageArticleID:(id)a0;
+ (id)defaultIssueCoverSubscriptionButtonWithLandingPageArticleID:(id)a0;
+ (id)defaultLandingPageSubscriptionButtonWithLandingPageArticleID:(id)a0;
+ (id)defaultLandingPageTargetSubscriptionButtonWithLandingPageArticleID:(id)a0;
+ (id)defaultNonTrialText;
+ (id)defaultOsloSheetTargetSubscriptionButton;
+ (id)defaultSubscriptionButtonText;
+ (id)defaultTrialText;

- (id)initWithConfigDictionary:(id)a0;
- (id)init;
- (id)initWithSubscriptionButtonType:(unsigned long long)a0 trialText:(id)a1 nonTrialText:(id)a2 buttonColor:(id)a3 buttonTextColor:(id)a4 targetType:(unsigned long long)a5 postPurchaseActionType:(unsigned long long)a6 postPurchaseURL:(id)a7 landingPageArticleID:(id)a8 dismissLandingPagePostPurchase:(BOOL)a9;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
