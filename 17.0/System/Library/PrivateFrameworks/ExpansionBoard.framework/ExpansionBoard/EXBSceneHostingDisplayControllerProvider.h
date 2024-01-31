@class NSString, EXBDisplayTransformDescriptor, FBSSceneSpecification;
@protocol EXBSceneHostingDisplayControllerProviderDelegate;

@interface EXBSceneHostingDisplayControllerProvider : NSObject <EXBSceneHostingDisplayControllerDelegate, EXBDisplayControllerProviding, BSDescriptionStreamable> {
    unsigned long long _priorityLevel;
    EXBDisplayTransformDescriptor *_descriptor;
    FBSSceneSpecification *_sceneSpecification;
}

@property (weak, nonatomic) id<EXBSceneHostingDisplayControllerProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)controller:(id)a0 initialDisplayConfigurationRequestForDisplay:(id)a1;
- (void)controller:(id)a0 modifyInitialSceneParameters:(id)a1;
- (id)controller:(id)a0 rootSceneWindowForDisplayConfiguration:(id)a1;
- (id)displayControllerForDisplay:(id)a0 configuration:(id)a1;
- (id)initWithPriority:(unsigned long long)a0 descriptor:(id)a1 sceneSpecification:(id)a2;

@end
