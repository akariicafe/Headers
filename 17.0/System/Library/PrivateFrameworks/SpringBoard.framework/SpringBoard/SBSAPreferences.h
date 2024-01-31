@class BSOrderedDictionary, NSString, NSArray, SBSAElementLayoutTransition, NSMutableDictionary, SBSAViewDescription, SBSABackgroundBlurDescription;

@interface SBSAPreferences : NSObject <SBSABlockMutating, SBSAInterfaceElementAnimationDescribing, SBSAPreferencesRepresenting, NSCopying, SBSADictionaryDescribable> {
    BOOL _finalizedForApplication;
}

@property (class, readonly, nonatomic) Class mutatorClass;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic, setter=_setGestureDescriptions:) NSArray *gestureDescriptions;
@property (copy, nonatomic, setter=_setTimerDescriptions:) NSArray *timerDescriptions;
@property (copy, nonatomic, setter=_setActions:) NSArray *actions;
@property (copy, nonatomic, setter=_setContainerParentViewDescription:) SBSAViewDescription *containerParentViewDescription;
@property (copy, nonatomic, setter=_setContainerViewDescriptions:) NSArray *containerViewDescriptions;
@property (copy, nonatomic, setter=_setElementDescriptions:) NSArray *elementDescriptions;
@property (copy, nonatomic, setter=_setElementLayoutTransition:) SBSAElementLayoutTransition *elementLayoutTransition;
@property (copy, nonatomic, setter=_setLastChangingElementLayoutTransition:) SBSAElementLayoutTransition *lastChangingElementLayoutTransition;
@property (copy, nonatomic, setter=_setBackgroundBlurDescription:) SBSABackgroundBlurDescription *backgroundBlurDescription;
@property (nonatomic, setter=_setCurtainRenderingConfiguration:) struct SBSystemApertureContainerRenderingConfiguration { long long renderingStyle; long long cloningStyle; } curtainRenderingConfiguration;
@property (nonatomic, setter=_setHighLevelCurtainRenderingConfiguration:) struct SBSystemApertureContainerRenderingConfiguration { long long renderingStyle; long long cloningStyle; } highLevelCurtainRenderingConfiguration;
@property (nonatomic, getter=isBlobEnabled, setter=_setBlobEnabled:) BOOL blobEnabled;
@property (nonatomic, getter=isCollisionImminent, setter=_setCollisionImminent:) BOOL collisionImminent;
@property (retain, nonatomic, getter=_interfaceElementPropertiesToBehaviorSettings, setter=_setInterfaceElementPropertiesToBehaviorSettings:) NSMutableDictionary *interfaceElementPropertiesToBehaviorSettings;
@property (retain, nonatomic, getter=_interfaceElementPropertiesToMilestones, setter=_setInterfaceElementPropertiesToMilestones:) NSMutableDictionary *interfaceElementPropertiesToMilestones;
@property (readonly, copy, nonatomic) NSArray *propertiesWithAnimatedTransitionDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) BSOrderedDictionary *dictionaryDescription;

+ (id)instanceWithBlock:(id /* block */)a0;

- (id)copyWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_doesUnanimatedTransitionDescriptionExistForProperty:(id)a0;
- (id)_effectiveTransitionDescriptionForPropertyForProperty:(id)a0 addingMilestonesAndCreatingUniqueDescriptionIfIndirect:(BOOL)a1;
- (id)animatedTransitionDescriptionForProperty:(id)a0;
- (id)copyByAddingActions:(id)a0;
- (id)copyByUpdatingBackgroundBlurDescription:(id)a0;
- (id)copyByUpdatingContainerViewDescriptions:(id)a0;
- (id)copyByUpdatingElementDescriptions:(id)a0;
- (id)copyWithCancellationOfGestureOfClass:(Class)a0 context:(id)a1;
- (id)effectiveAnimatedTransitionDescriptionForProperty:(id)a0;
- (id)effectiveMilestoneProvidingAnimatedTransitionDescriptionForProperty:(id)a0;
- (void)finalizePreferencesForApplication:(id)a0;

@end
