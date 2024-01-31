@class NSString, NSOrderedSet;

@interface PRSPosterRoleCollectionObserver : NSObject

@property (readonly, nonatomic) NSString *role;
@property (readonly, nonatomic) BOOL needsSandboxExtensions;
@property (copy) id /* block */ handler;
@property (readonly, nonatomic) NSOrderedSet *posterCollection;

- (void).cxx_destruct;
- (id)initWithRole:(id)a0;
- (id)initWithRole:(id)a0 needsSandboxExtensions:(BOOL)a1;
- (void)issueUpdatedState:(id)a0;

@end
