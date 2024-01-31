@class NSIndexSet, NSSet, NSArray, NSString;

@interface SBFZStackParticipantPreferences : NSObject <NSCopying, BSDescriptionProviding>

@property (nonatomic) long long activationPolicyForParticipantsBelow;
@property (copy, nonatomic) NSIndexSet *assertIsAboveParticipantIdentifiers;
@property (nonatomic) long long homeGestureConsumption;
@property (nonatomic) long long homeAffordanceDrawingSuppression;
@property (nonatomic) BOOL suppressSystemApertureForSystemChromeSuppression;
@property (copy, nonatomic) NSSet *associatedBundleIdentifiersToSuppressInSystemAperture;
@property (copy, nonatomic) NSSet *associatedSceneIdentifiersToSuppressInSystemAperture;
@property (copy, nonatomic) NSArray *physicalButtonSceneTargets;
@property (copy, nonatomic) NSSet *audioCategoriesDisablingVolumeHUD;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initInternal;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
