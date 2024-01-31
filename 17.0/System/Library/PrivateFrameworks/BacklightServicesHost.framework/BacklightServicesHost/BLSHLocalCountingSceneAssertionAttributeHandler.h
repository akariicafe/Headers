@class NSString;

@interface BLSHLocalCountingSceneAssertionAttributeHandler : BLSHLocalCountingAssertionAttributeHandler <BLSHSceneEnvironmentObserving>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributeClasses;
+ (Class)attributeBaseClass;

- (void)activateWithFirstEntry:(id)a0;
- (void)deactivateWithFinalEntry:(id)a0;
- (void)sceneDidInvalidate:(id)a0 environment:(id)a1;
- (void)activateForSceneEnvironment:(id)a0;
- (id)countingTargetForEntry:(id)a0;
- (void)deactivateForSceneEnvironment:(id)a0;

@end
