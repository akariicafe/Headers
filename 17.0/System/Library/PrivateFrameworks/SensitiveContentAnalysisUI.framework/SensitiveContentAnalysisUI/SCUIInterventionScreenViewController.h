@class SCUIInterventionViewController;

@interface SCUIInterventionScreenViewController : OBWelcomeController

@property (weak, nonatomic) SCUIInterventionViewController *container;
@property (readonly, nonatomic) long long contentScreen;
@property (readonly, nonatomic) long long options;

- (void).cxx_destruct;
- (void)screenOne_moreHelpButtonPressed;
- (void)addBulletsFromModel:(id)a0;
- (void)addButtonsFromModel:(id)a0;
- (id)initWithContainer:(id)a0 contentScreen:(long long)a1 options:(long long)a2;
- (id)nextScreenWithContainer:(id)a0;
- (void)screenOne_acceptButtonPressed;
- (void)screenOne_moreHelpButtonDefaultImplementation;
- (void)screenOne_notNowButtonPressed;
- (void)screenTwo_acceptButtonPressed;
- (void)screenTwo_messageButtonDefaultImplementation;
- (void)screenTwo_messageButtonPressed;
- (void)screenTwo_notNowButtonPressed;

@end
