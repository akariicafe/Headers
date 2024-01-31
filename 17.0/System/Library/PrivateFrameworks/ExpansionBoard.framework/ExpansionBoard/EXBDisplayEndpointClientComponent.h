@class Protocol, NSString, FBSDisplayConfigurationRequest, EXBDisplayArrangementItem, UIRootSceneWindow;
@protocol EXBDisplayEndpointDelegate;

@interface EXBDisplayEndpointClientComponent : FBSSceneComponent <EXBDisplayEndpointProviding>

@property (class, readonly, nonatomic) Protocol *settingsProtocol;

@property (nonatomic) BOOL wantsControlOfDisplay;
@property (readonly, nonatomic) unsigned long long priorityLevel;
@property (retain, nonatomic) FBSDisplayConfigurationRequest *displayConfigurationRequest;
@property (nonatomic) EXBDisplayArrangementItem *displayArrangementItem;
@property (readonly, nonatomic) BOOL hasControlOfDisplay;
@property (readonly, nonatomic) unsigned long long currentDeactivationReasons;
@property (readonly, nonatomic) UIRootSceneWindow *rootWindow;
@property (weak, nonatomic) id<EXBDisplayEndpointDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)scene:(id)a0 didUpdateSettings:(id)a1;

@end
