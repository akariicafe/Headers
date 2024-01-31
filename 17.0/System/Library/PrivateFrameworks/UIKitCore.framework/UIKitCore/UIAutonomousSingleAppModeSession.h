@class UIAutonomousSingleAppModeConfiguration;

@interface UIAutonomousSingleAppModeSession : NSObject

@property (copy, nonatomic) UIAutonomousSingleAppModeConfiguration *effectiveConfiguration;
@property (nonatomic, getter=isActive) BOOL active;

+ (id)__gaxTrampoline_currentlyActiveSession;
+ (void)__gaxTrampoline_requestSessionWithConfiguration:(id)a0 completion:(id /* block */)a1;
+ (id)currentlyActiveSession;
+ (void)requestSessionWithConfiguration:(id)a0 completion:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithEffectiveConfiguration:(id)a0;
- (void)__gaxTrampoline_endSessionWithCompletion:(id /* block */)a0;
- (void)_guidedAccessStateDidChange:(id)a0;
- (void)endWithCompletion:(id /* block */)a0;

@end
