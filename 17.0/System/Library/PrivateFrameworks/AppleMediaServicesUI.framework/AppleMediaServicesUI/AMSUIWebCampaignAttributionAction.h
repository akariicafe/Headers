@class NSArray, ACAccount, NSURL;

@interface AMSUIWebCampaignAttributionAction : AMSUIWebAction

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSArray *additionalQueryItems;
@property (retain, nonatomic) NSURL *URL;

+ (id)_campaignAttributionTaskForURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
