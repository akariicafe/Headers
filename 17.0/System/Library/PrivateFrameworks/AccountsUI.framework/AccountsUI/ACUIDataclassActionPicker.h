@class NSArray, ACDataclassAction, ACAccount, NSMutableArray;

@interface ACUIDataclassActionPicker : NSObject

@property (readonly, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSMutableArray *affectedDataclasses;
@property (readonly, nonatomic) ACAccount *affectedAccount;
@property (readonly, nonatomic) BOOL hasDestructiveActions;
@property (readonly, nonatomic) ACDataclassAction *firstDestructiveAction;
@property (readonly, nonatomic) long long priorityIndex;

- (id)message;
- (void).cxx_destruct;
- (id)title;
- (id)showInViewController:(id)a0;
- (id)_stringForMessage:(id)a0 withAccountType:(id)a1 dataclassDescription:(id)a2;
- (id)actionOfType:(long long)a0;
- (void)addAffectedDataclass:(id)a0;
- (id)descriptionForDataclassAction:(id)a0;
- (BOOL)hasActionOfType:(long long)a0;
- (id)initWithActions:(id)a0 affectingAccount:(id)a1;

@end
