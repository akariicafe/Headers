@class NSString, _EXPromise, _EXExtensionRootViewController, UIViewController;

@interface _EXUISceneSession : _EXSceneSession <NSXPCListenerDelegate>

@property (retain) _EXPromise *initializationPromise;
@property (retain, nonatomic) _EXExtensionRootViewController *rootViewController;
@property (retain, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithExtension:(id)a0;
- (id)makeSceneWithError:(id *)a0;
- (void).cxx_destruct;
- (void)connectToScene:(id)a0;
- (id)makeConfigurationWithParameters:(id)a0;
- (id)makeConnectionResponse;

@end
