@class NSDictionary, NSString, SCUIInterventionScreenModel;
@protocol SCUIInterventionViewControllerDelegate;

@interface SCUIInterventionAlertController : UINavigationController <SCUIInterventionContainer>

@property (readonly, nonatomic) long long contentScreen;
@property (readonly, nonatomic) SCUIInterventionScreenModel *screenModel;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long workflow;
@property (weak, nonatomic) id<SCUIInterventionViewControllerDelegate> interventionDelegate;
@property (readonly, copy, nonatomic) NSDictionary *contextDictionary;
@property (readonly, nonatomic) long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerWithWorkflow:(long long)a0 contextDictionary:(id)a1;
+ (id)viewControllerWithWorkflow:(long long)a0 contextDictionary:(id)a1 options:(long long)a2;

- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)screenOne_moreHelpButtonPressed;
- (id)initWithWorkflow:(long long)a0 contextDictionary:(id)a1 options:(long long)a2;
- (id)initWithWorkflow:(long long)a0 contextDictionary:(id)a1 options:(long long)a2 type:(long long)a3;
- (void)presentAlertScreen;
- (void)screenOne_acceptButtonPressed;
- (void)screenOne_moreHelpButtonDefaultImplementation;
- (void)screenOne_notNowButtonPressed;
- (void)screenTwo_acceptButtonPressed;
- (void)screenTwo_messageButtonDefaultImplementation;
- (void)screenTwo_messageButtonPressed;
- (void)screenTwo_notNowButtonPressed;

@end
