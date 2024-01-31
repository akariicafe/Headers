@class NSString, EXBDisplayTransformDescriptor;
@protocol EXBDisplayProfileDelegate, EXBDisplayControllerProviding;

@interface EXBDisplayProfile : NSObject <EXBSceneHostingDisplayControllerProviderDelegate, EXBDisplayControllerProviding, BSDescriptionStreamable> {
    unsigned long long _priorityLevel;
    unsigned long long _deactivationReasonsWhenActive;
    EXBDisplayTransformDescriptor *_descriptor;
    id<EXBDisplayControllerProviding> _provider;
}

@property (readonly, nonatomic) unsigned long long priorityLevel;
@property (readonly, nonatomic) unsigned long long deactivationReasonsWhenActive;
@property (readonly, weak, nonatomic) id<EXBDisplayProfileDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mirroringMainDisplayProfileWithDelegate:(id)a0;
+ (id)sceneHostingProfileWithDelegate:(id)a0 builder:(id /* block */)a1;

- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)usesRootDisplay;
- (id)displayControllerForDisplay:(id)a0 configuration:(id)a1;
- (BOOL)evaluatePhysicalDisplay:(id)a0;
- (id)initWithPriority:(unsigned long long)a0 deactivationReasonsWhenActive:(unsigned long long)a1 descriptor:(id)a2 provider:(id)a3 delegate:(id)a4;
- (id)provider:(id)a0 initialDisplayConfigurationRequestForDisplay:(id)a1;
- (void)provider:(id)a0 modifyInitialSceneParameters:(id)a1;
- (id)provider:(id)a0 rootSceneWindowForDisplayConfiguration:(id)a1;
- (BOOL)shouldTransformConnectingDisplays;
- (void)transformPhysicalDisplayWithBuilder:(id)a0;

@end
