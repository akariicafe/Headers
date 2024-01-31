@class INIntentResponse, NSSet, INIntent;

@interface INCExtensionTransactionState : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) INIntentResponse *intentResponse;
@property (readonly, copy, nonatomic) NSSet *userActivities;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 intent:(id)a1 intentResponse:(id)a2 userActivities:(id)a3;

@end
