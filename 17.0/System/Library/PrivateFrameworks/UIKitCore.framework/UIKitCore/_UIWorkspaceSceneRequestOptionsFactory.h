@class NSDictionary, NSMutableDictionary;

@interface _UIWorkspaceSceneRequestOptionsFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *buildersByRole;
@property (retain, nonatomic) NSDictionary *defaultBuildersByRole;

+ (id)sharedFactory;
+ (id)_createDefaultBuilders;

- (id)_init;
- (void).cxx_destruct;
- (id)_effectiveBuilderForRole:(id)a0;
- (void)_registerBuilder:(id)a0 forRole:(id)a1;
- (void)buildWorkspaceRequestOptionsForRequest:(id)a0 withContinuation:(id /* block */)a1;

@end
