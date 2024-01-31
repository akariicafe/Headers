@class NSString, FBSSceneSpecification, EXBMutableDisplayTransformDescriptor;

@interface EXBDisplayProfileBuilder : NSObject <EXBDisplayProfileConfiguring> {
    unsigned long long _priorityLevel;
    FBSSceneSpecification *_sceneSpecification;
    unsigned long long _deactivationReasons;
    EXBMutableDisplayTransformDescriptor *_descriptor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)validate;
- (id)init;
- (id)descriptor;
- (id)sceneSpecification;
- (unsigned long long)displayPriority;
- (void).cxx_destruct;
- (void)setCloningSupported:(BOOL)a0;
- (unsigned long long)deactivationReasonsWhenActive;
- (void)deriveWithIdentifier:(id)a0;
- (void)setMainLike:(BOOL)a0;
- (void)setPriorityLevel:(unsigned long long)a0 sceneSpecification:(id)a1;
- (void)setDeactivationReasonsWhenActive:(unsigned long long)a0;

@end
