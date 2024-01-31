@class NSDictionary, NSString;
@protocol SCUIInterventionViewControllerDelegate;

@interface SCUIInterventionViewController : UINavigationController <SCUIInterventionContainer>

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

@end
