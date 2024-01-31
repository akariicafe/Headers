@class NSSet, NSMutableDictionary;

@interface PRSPosterRoleActivePosterObserver : NSObject {
    NSMutableDictionary *_roleToState;
}

@property (readonly, nonatomic) NSSet *roles;
@property (readonly, nonatomic) BOOL needsSandboxExtensions;
@property (copy) id /* block */ handler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRoles:(id)a0;
- (id)initWithRoles:(id)a0 needsSandboxExtensions:(BOOL)a1;
- (void)issueUpdatedState:(id)a0;
- (id)stateForRole:(id)a0;

@end
