@class SBFFluidBehaviorSettings, NSUUID, NSMutableDictionary, NSString, NSSet;

@interface SBSAAnimatedTransitionDescription : NSObject <SBSAAnimatedTransitionDescribing, SBSAAnimatedTransitionMilestoneProviding, SBSABlockMutating, SBSADescriptionDebugSource>

@property (class, readonly, nonatomic) Class mutatorClass;

@property (copy, nonatomic, setter=_setAnimatedTransitionIdentifier:) NSUUID *animatedTransitionIdentifier;
@property (copy, nonatomic, setter=_setBehaviorSettings:) SBFFluidBehaviorSettings *behaviorSettings;
@property (copy, nonatomic, setter=_setKeyPathsToAuxillaryBehaviorSettingsMap:) NSMutableDictionary *keyPathsToAuxillaryBehaviorSettingsMap;
@property (copy, nonatomic, setter=_setResponsibleProviderDebugString:) NSString *responsibleProviderDebugString;
@property (copy, nonatomic, setter=_setMilestones:) NSSet *milestones;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animatedTransitionDescriptionWithAnimatedTransitionIdentifier:(id)a0 behaviorSettings:(id)a1 milestones:(id)a2 responsibleProvider:(id)a3;
+ (id)instanceWithBlock:(id /* block */)a0;

- (id)copyWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)auxillaryBehaviorSettingsForKeyPath:(id)a0;
- (id)copyBySettingAuxillaryBehaviorSettings:(id)a0 forKeyPath:(id)a1;
- (id)initWithAnimatedTransitionDescription:(id)a0;
- (id)keyPathsWithAuxillaryBehaviorSettings;

@end
