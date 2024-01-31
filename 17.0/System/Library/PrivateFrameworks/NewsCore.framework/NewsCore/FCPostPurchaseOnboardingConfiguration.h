@class NSString, NSURL;

@interface FCPostPurchaseOnboardingConfiguration : NSObject

@property (nonatomic) unsigned long long postPurchaseOnboardingStep;
@property (copy, nonatomic) NSString *landingPageArticleID;
@property (copy, nonatomic) NSString *callToActionText;
@property (copy, nonatomic) NSURL *deepLinkURL;

- (id)initWithConfigDictionary:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPostPurchaseOnboardingStep:(unsigned long long)a0 landingPageArticleID:(id)a1 callToActionText:(id)a2 deepLinkURL:(id)a3;

@end
