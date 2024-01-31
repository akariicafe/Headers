@class NSString, WFTrigger;

@interface WFDailyRoutineShortcutSetupTriggerBuilder : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) WFTrigger *templateTrigger;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 templateTrigger:(id)a2;
- (id)triggerWithConfiguration:(id)a0;

@end
