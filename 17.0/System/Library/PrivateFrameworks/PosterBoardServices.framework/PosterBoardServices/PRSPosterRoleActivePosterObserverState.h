@class NSString, PRSPosterConfiguration;

@interface PRSPosterRoleActivePosterObserverState : NSObject

@property (readonly, nonatomic) NSString *role;
@property (readonly, nonatomic) PRSPosterConfiguration *activePoster;

- (void).cxx_destruct;
- (id)initWithRole:(id)a0 activePoster:(id)a1;

@end
