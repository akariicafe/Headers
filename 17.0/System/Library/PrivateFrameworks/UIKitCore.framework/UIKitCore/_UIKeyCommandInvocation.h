@class UIKeyCommand, UIPhysicalKeyboardEvent;

@interface _UIKeyCommandInvocation : NSObject

@property (readonly, nonatomic) UIKeyCommand *keyCommand;
@property (readonly, nonatomic) UIPhysicalKeyboardEvent *triggeringEvent;
@property (readonly, weak, nonatomic) id target;

- (void).cxx_destruct;
- (id)initWithKeyCommand:(id)a0 triggeringEvent:(id)a1 target:(id)a2;

@end
