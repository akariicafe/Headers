@class NSString;
@protocol FBSSceneHandle;

@interface FBSBasicSceneAgent : NSObject <FBSSceneAgent, BSDescriptionProviding>

@property (readonly, weak, nonatomic) id<FBSSceneHandle> scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)_configureWithScene:(id)a0;
- (void)didReceiveMessage:(id)a0 fromCounterpartAgent:(id)a1 withResponseSender:(id /* block */)a2;
- (void)scene:(id)a0 reviewEvent:(id)a1 withCompletion:(id /* block */)a2;

@end
