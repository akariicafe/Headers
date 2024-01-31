@class ECMessageFlags;
@protocol MSFlagChangeTriageActionDelegate;

@interface MSFlagChangeTriageAction : MSTriageAction

@property (readonly, nonatomic) ECMessageFlags *messageFlags;
@property (readonly, nonatomic) BOOL flagState;
@property (readonly, nonatomic) long long reason;
@property (readonly, weak, nonatomic) id<MSFlagChangeTriageActionDelegate> delegate;

- (id)_changeAction;
- (void)_toggleFlagWithBuilder:(id)a0;
- (id)initWithMessageListSelection:(id)a0 origin:(long long)a1 actor:(long long)a2 delegate:(id)a3 reason:(long long)a4;

@end
