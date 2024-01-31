@class NSString, NSArray;

@interface CKMultipleCTSubscriptionsController : PSListController

@property (copy, nonatomic) NSString *defaultsKey;
@property (copy, nonatomic) NSString *headerKey;
@property (copy, nonatomic) NSString *controllerTitle;
@property (retain, nonatomic) NSArray *ctSubscriptions;

- (void)viewWillAppear:(BOOL)a0;
- (id)specifiers;
- (void).cxx_destruct;
- (void)systemApplicationWillEnterForeground;
- (id)isEnabledForSubscription:(id)a0;
- (void)setEnabledForSubscription:(id)a0 specifier:(id)a1;

@end
