@class NSString;

@interface PUEditActionActivity : UIActivity

@property (retain, nonatomic) NSString *internalActivityType;
@property (copy, nonatomic) id /* block */ activityBlock;
@property (copy, nonatomic) NSString *actionName;
@property (copy, nonatomic) NSString *systemImageName;
@property (nonatomic) BOOL disablesInsteadOfHides;
@property (copy, nonatomic) id /* block */ performActivityActionHandler;
@property (copy, nonatomic) id /* block */ canPerformActivityActionHandler;

+ (long long)activityCategory;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)_isDisabled;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithActionName:(id)a0 activityType:(id)a1 systemImageName:(id)a2;

@end
