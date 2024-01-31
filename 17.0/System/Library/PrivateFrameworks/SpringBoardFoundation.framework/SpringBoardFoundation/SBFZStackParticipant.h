@class NSSet, NSArray, SBFZStackResolver, SBFZStackParticipantPreferences, NSString;
@protocol SBFZStackParticipantDelegate;

@interface SBFZStackParticipant : NSObject <NSCopying, BSDescriptionProviding, SBFZStackParticipantSettings>

@property (nonatomic) long long activationState;
@property (nonatomic) BOOL ownsHomeGesture;
@property (nonatomic) BOOL homeAffordanceDrawingSuppressed;
@property (nonatomic) BOOL systemApertureSuppressedForSystemChromeSuppression;
@property (copy, nonatomic) NSSet *associatedBundleIdentifiersToSuppressInSystemAperture;
@property (copy, nonatomic) NSSet *associatedSceneIdentifiersToSuppressInSystemAperture;
@property (copy, nonatomic) NSArray *physicalButtonSceneTargets;
@property (copy, nonatomic) NSSet *audioCategoriesDisablingVolumeHUD;
@property (weak, nonatomic) SBFZStackResolver *resolver;
@property (copy, nonatomic) SBFZStackParticipantPreferences *preferences;
@property (readonly, nonatomic) long long identifier;
@property (readonly, weak, nonatomic) id<SBFZStackParticipantDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (void)_updatePreferences;
- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)setNeedsUpdatePreferencesWithReason:(id)a0;
- (id)initWithIdentifier:(long long)a0 delegate:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
