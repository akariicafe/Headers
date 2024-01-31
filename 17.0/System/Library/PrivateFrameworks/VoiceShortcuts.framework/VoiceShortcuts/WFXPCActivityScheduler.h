@class NSString;

@interface WFXPCActivityScheduler : NSObject

@property (nonatomic) struct _xpc_activity_eligibility_changed_handler_s { } *eligibilityChangedHandler;
@property (readonly, nonatomic) NSString *activityIdentifier;

+ (id)activatedSchedulerWithActivityIdentifier:(id)a0 runHandler:(id /* block */)a1;
+ (id)activatedSchedulerWithActivityIdentifier:(id)a0 checkInHandler:(id /* block */)a1 runHandler:(id /* block */)a2;

- (void)dealloc;
- (void)scheduleWithCheckInHandler:(id /* block */)a0 runHandler:(id /* block */)a1;
- (id)initWithActivityIdentifier:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)scheduleWithRunHandler:(id /* block */)a0;

@end
