@class LNConnectionAction;

@interface UILinkConnectionAction : BSAction

@property (readonly, nonatomic) LNConnectionAction *action;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (long long)UIActionType;
- (id)initWithAction:(id)a0 responseHandler:(id /* block */)a1;

@end
