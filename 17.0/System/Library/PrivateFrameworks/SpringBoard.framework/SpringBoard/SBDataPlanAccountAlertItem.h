@class NSURL;

@interface SBDataPlanAccountAlertItem : SBDataPlanAlertItem <SBDataPlanAlertActions>

@property (copy, nonatomic) NSURL *accountURL;

+ (id)laterButtonTitle;
+ (id)nowButtonTitle;

- (void).cxx_destruct;
- (id)initWithAccountURL:(id)a0;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (void)notNow;
- (void)takeAction;

@end
