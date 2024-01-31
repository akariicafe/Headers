@class NSString, SBSystemUIScenesCoordinator;

@interface _SBKeyboardServiceSceneResolver : NSObject <_SBSceneResolving>

@property (retain, nonatomic) SBSystemUIScenesCoordinator *systemUIScenesCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)sceneForSceneIdentityToken:(id)a0 inProcess:(int)a1;

@end
